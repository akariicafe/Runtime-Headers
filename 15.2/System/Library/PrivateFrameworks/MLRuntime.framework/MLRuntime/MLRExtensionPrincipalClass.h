@class NSString;

@interface MLRExtensionPrincipalClass : NSObject <NSExtensionRequestHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)beginRequestWithExtensionContext:(id)a0;

@end
