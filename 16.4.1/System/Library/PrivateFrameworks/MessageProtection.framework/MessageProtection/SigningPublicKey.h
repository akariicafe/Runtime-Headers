@interface SigningPublicKey : PublicKey

- (BOOL)verifySignature:(id)a0 ofData:(id)a1;
- (BOOL)verifySignature:(id)a0 formatter:(id)a1;
- (id)description;

@end
