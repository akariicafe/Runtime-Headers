@interface BaseMifareDecoder : NSObject <MifareSubDecoder>

+ (id)getServiceProviderData:(id)a0 withPackage:(id)a1 withModule:(id)a2 withPublicKey:(id)a3 withEncryptionScheme:(id)a4 withTransceiver:(id)a5 withError:(id *)a6;
+ (id)getServiceProviderData:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
+ (BOOL)canDecodeSPId:(unsigned char)a0;
+ (BOOL)didTransactionError:(const struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned short x3; unsigned char x4[32]; unsigned short x5; unsigned short x6; unsigned short x7; unsigned char x8[3]; unsigned char x9[0]; } *)a0 withTransactionResult:(unsigned short *)a1;
+ (id)getAppletStateAndHistory:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;
+ (BOOL)getDontWaitForEOT;
+ (id)getEmReentryDelayMs;
+ (id)getServiceProvider:(unsigned char)a0;
+ (BOOL)supportsPlasticCardMode:(unsigned char)a0 withTransceiver:(id)a1;

@end
