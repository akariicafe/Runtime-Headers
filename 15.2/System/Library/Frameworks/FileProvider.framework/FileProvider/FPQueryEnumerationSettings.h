@class NSArray, NSNumber, NSString;

@interface FPQueryEnumerationSettings : FPEnumerationSettings

@property (copy) NSArray *allowedProviders;
@property (copy) NSNumber *desiredNumberOfItems;
@property (copy) NSArray *excludedFileTypes;
@property (copy) NSArray *allowedFileTypes;
@property (copy) NSString *tagIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
