@interface HAP2EncodingUtils : NSObject

+ (id)removePairingRequestWithIdentifier:(id)a0 error:(id *)a1;
+ (id)addPairingRequestWithIdentity:(id)a0 error:(id *)a1;
+ (BOOL)parseAddOrRemovePairingRequestResponse:(id)a0 error:(id *)a1;

@end
