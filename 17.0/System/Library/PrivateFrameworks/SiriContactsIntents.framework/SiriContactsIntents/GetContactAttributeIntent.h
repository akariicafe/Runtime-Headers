@class NSString, NSArray, ContactAttribute, NSNumber;

@interface GetContactAttributeIntent : INIntent

@property (nonatomic, retain) NSNumber *isMe;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSString *nickName;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, copy) NSString *middleName;
@property (nonatomic, copy) NSString *organizationName;
@property (nonatomic, copy) NSString *contactIdentifier;
@property (nonatomic, copy) NSString *contactRelation;
@property (nonatomic, copy) NSString *fullName;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, copy) NSArray *siriMatches;
@property (nonatomic, retain) ContactAttribute *contactAttributeToGet;
@property (nonatomic, copy) NSArray *contactHandleMatches;
@property (nonatomic, copy) NSArray *contactHandleAlternatives;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
