@class NSArray;

@interface MCCertificateDetailsController : PSListController {
    NSArray *_properties;
}

+ (id)_dateFormatter;

- (void).cxx_destruct;
- (id)valueForSpecifier:(id)a0;
- (id)specifiers;
- (id)specifiersFromCertificateProperties:(id)a0;
- (id)_propertiesFromTrust:(struct __SecTrust { } *)a0;
- (id)specifiersFromTrust:(struct __SecTrust { } *)a0;

@end
