@class NSString;

@interface SAMPSetQueueQueueOrder : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL descending;
@property (copy, nonatomic) NSString *mediaItemProperty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)setQueueQueueOrder;
+ (id)setQueueQueueOrderWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
