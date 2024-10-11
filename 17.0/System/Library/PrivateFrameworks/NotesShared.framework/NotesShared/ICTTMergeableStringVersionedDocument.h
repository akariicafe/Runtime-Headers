@class ICTTMergeableAttributedString;

@interface ICTTMergeableStringVersionedDocument : ICTTVersionedDocument

@property (readonly, nonatomic) ICTTMergeableAttributedString *mergeableString;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;

- (void).cxx_destruct;
- (id)initWithMergeableString:(id)a0;
- (unsigned long long)mergeWithStringVersionedDocument:(id)a0;
- (void)mergeVersion:(unsigned int)a0 fromData:(id)a1;
- (id)serializeCurrentVersion:(unsigned int *)a0;

@end
