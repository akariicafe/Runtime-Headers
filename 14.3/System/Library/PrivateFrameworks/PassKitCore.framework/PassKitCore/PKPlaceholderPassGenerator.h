@class NSString, NSMutableDictionary, NSArray, NSURL, PKPass;

@interface PKPlaceholderPassGenerator : NSObject {
    NSURL *_templateDirectory;
    PKPass *_templatePass;
}

@property (retain, nonatomic) NSMutableDictionary *passContent;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSArray *associatedApplicationIdentifiers;
@property (copy, nonatomic) NSString *primaryAccountIdentifier;

+ (id)manifestForDirectory:(id)a0 error:(id *)a1;
+ (id)manifestSignatureForDirectory:(id)a0 passCertificate:(id)a1 appleWWDRCertificate:(id)a2 certificatePassword:(id)a3 error:(id *)a4;

- (void).cxx_destruct;
- (void)insertPaymentApplication:(id)a0;
- (long long)updatePaymentApplicationsWithBlock:(id /* block */)a0;
- (id)generateAndSignPassWithPassCertificate:(id)a0 appleWWDRCertificate:(id)a1 certificatePassword:(id)a2 error:(id *)a3;
- (void)insertPassField:(id)a0;
- (id)initWithPassTemplate:(id)a0 error:(id *)a1;
- (id)generatePass;
- (long long)updatePassUpgradeRequestsWithBlock:(id /* block */)a0;
- (id)passTypeIdentifier;
- (void)setPassTypeIdentifier:(id)a0;

@end
