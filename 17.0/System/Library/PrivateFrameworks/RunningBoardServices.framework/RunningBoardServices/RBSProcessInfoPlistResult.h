@class NSString;

@interface RBSProcessInfoPlistResult : NSObject <RBSXPCSecureCoding>

@property (copy, nonatomic) id value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)initWithRBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithRBSXPCCoder:(id)a0;

@end
