@class StoredCredential, NSString, NSData, NSDate, StoredPayload;

@interface StoredCryptoKey : NSManagedObject

@property (nonatomic, copy) NSData *attestation;
@property (nonatomic, copy) NSData *attestationSignature;
@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long keySlot;
@property (nonatomic, copy) NSString *keyType;
@property (nonatomic, copy) NSData *publicKey;
@property (nonatomic, copy) NSData *publicKeyIdentifier;
@property (nonatomic, copy) NSDate *updatedAt;
@property (nonatomic, copy) NSString *usage;
@property (nonatomic, retain) StoredCredential *credential;
@property (nonatomic, retain) StoredPayload *payload;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
