@class NSString, AACustodianshipInfo;

@interface AAOBInheritanceInvitationModel : NSObject <AAOBWelcomeControllerModelProtocol, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSString *primaryButton;
@property (copy, nonatomic) NSString *secondaryButton;
@property (copy, nonatomic) NSString *leftBarButton;
@property (copy, nonatomic) NSString *helpLinkTitle;
@property (copy, nonatomic) NSString *helpLinkURL;
@property (copy, nonatomic) NSString *ownerHandle;
@property (copy, nonatomic) NSString *recipientHandle;
@property (copy, nonatomic) AACustodianshipInfo *custodianshipInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBenefactorHandle:(id)a0;
- (id)initWithBenefactorName:(id)a0 handle:(id)a1;

@end
