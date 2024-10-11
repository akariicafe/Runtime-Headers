@class NSSet, NSArray;

@interface CEMApplicationListActiveNSExtensionsCommand_Status : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;
@property (class, readonly, copy) NSSet *allowedReasons;

@property (copy, nonatomic) NSArray *statusExtensions;

+ (id)buildWithExtensions:(id)a0;
+ (id)buildRequiredOnlyWithExtensions:(id)a0;

- (void).cxx_destruct;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
