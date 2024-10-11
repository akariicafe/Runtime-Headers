@class NSString;

@interface SAGLShowGlance : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *bundleId;

+ (id)showGlance;
+ (id)showGlanceWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
