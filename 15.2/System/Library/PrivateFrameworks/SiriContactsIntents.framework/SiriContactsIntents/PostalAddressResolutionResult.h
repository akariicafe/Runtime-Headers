@interface PostalAddressResolutionResult : INObjectResolutionResult

+ (id)successWithResolvedObject:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)successWithResolvedPostalAddress:(id)a0;
+ (id)disambiguationWithPostalAddresssToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithPostalAddressToConfirm:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
