@class NSString;

@interface SAUILocalImageResource : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *imageCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localImageResourceWithDictionary:(id)a0 context:(id)a1;
+ (id)localImageResource;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
