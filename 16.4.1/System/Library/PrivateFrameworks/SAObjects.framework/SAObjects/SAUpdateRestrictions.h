@class NSArray, NSString;

@interface SAUpdateRestrictions : SABaseCommand <SAServerBoundCommand, SAClientStateServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *restrictionsToAdd;
@property (copy, nonatomic) NSArray *restrictionsToRemove;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)updateRestrictions;
+ (id)updateRestrictionsWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
