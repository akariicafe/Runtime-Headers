@class NSString;

@interface HAPUpdateNotReadyReasonsWrapper : NSObject <NSCopying, HAPTLVProtocol>

@property (nonatomic) unsigned long long value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)initWithValue:(unsigned long long)a0;
- (id)serializeWithError:(id *)a0;

@end
