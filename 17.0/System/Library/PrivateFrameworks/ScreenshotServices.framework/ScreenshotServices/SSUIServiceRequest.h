@class NSString;

@interface SSUIServiceRequest : NSObject <BSXPCSecureCoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)entitlement;

- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;

@end
