@interface EMVDecoder : NSObject <ATLDecoder>

+ (BOOL)isEMV:(id)a0;
+ (BOOL)isNeon:(id)a0;
+ (BOOL)isLuau:(id)a0;
+ (BOOL)isArgon:(id)a0;
+ (BOOL)isXenon:(id)a0;
+ (id)parseStartEvent:(id)a0 withApplet:(id)a1 error:(id *)a2;
+ (id)parseEndEvent:(id)a0 withApplet:(id)a1 withModule:(id)a2 withLegacy:(BOOL)a3 error:(id *)a4;
+ (id)DecodeEndE1TLV:(const struct { char *x0; unsigned long long x1; } *)a0 withModule:(id)a1 withLegacy:(BOOL)a2 withType:(unsigned short *)a3 error:(id *)a4;
+ (BOOL)isHelium:(id)a0;
+ (BOOL)isEMVLegacy:(id)a0;

- (id)parseHCIEvent:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withTransceiver:(id)a4 withError:(id *)a5;
- (id)GetAppletProperties:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
- (id)getAppletStateAndHistory:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;
- (id)processEndOfTransaction:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;

@end
