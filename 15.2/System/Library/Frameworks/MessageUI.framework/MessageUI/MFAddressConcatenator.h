@class NSString;

@interface MFAddressConcatenator : NSObject

@property (retain, nonatomic) NSString *andNMoreFormat;
@property (retain, nonatomic) NSString *andNMoreNoEllipsisFormat;
@property (retain, nonatomic) NSString *oneAddressFormat;
@property (retain, nonatomic) NSString *nAddressesFormat;
@property (retain, nonatomic) NSString *truncatedAddressFormat;

+ (id)defaultRecipientListConcatenator;

- (void).cxx_destruct;
- (void)getCommaSeparatedAddressList:(out id *)a0 andListSuffix:(out id *)a1 withAddressCount:(unsigned long long)a2 prefixForAddressAtIndex:(id /* block */)a3 stringForAddressAtIndex:(id /* block */)a4 lengthValidationBlock:(id /* block */)a5;
- (id)commaSeparatedAddressListWithAddressCount:(unsigned long long)a0 prefixForAddressAtIndex:(id /* block */)a1 stringForAddressAtIndex:(id /* block */)a2 lengthValidationBlock:(id /* block */)a3;

@end
