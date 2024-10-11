@class NSString, NSDictionary;

@interface WBSFormAutoFillCorrectionSet : NSObject

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSDictionary *fingerprintsToClassifications;
@property (readonly, nonatomic) NSDictionary *fingerprintsToCorrections;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDomain:(id)a0 fingerprintsToClassifications:(id)a1;
- (id)initWithDomain:(id)a0 fingerprintsToCorrections:(id)a1;

@end
