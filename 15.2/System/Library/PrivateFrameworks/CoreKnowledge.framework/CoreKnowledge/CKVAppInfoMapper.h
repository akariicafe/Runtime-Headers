@class NSString;

@interface CKVAppInfoMapper : NSObject <CKVItemMapper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemBufferFromExternalVocabularyItem:(id)a0 error:(id *)a1;
+ (long long)targetItemType;
+ (id)_itemBufferFromAppInfo:(id)a0 error:(id *)a1;


@end
