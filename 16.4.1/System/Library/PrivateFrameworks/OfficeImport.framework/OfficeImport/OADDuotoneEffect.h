@class OADColor;

@interface OADDuotoneEffect : OADBlipEffect {
    OADColor *mColor1;
    OADColor *mColor2;
    int mTransferMode1;
    int mTransferMode2;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)color1;
- (id)color2;
- (void)setColor1:(id)a0;
- (void)setColor2:(id)a0;
- (void)setStyleColor:(id)a0;
- (void)setTransferMode1:(int)a0;
- (void)setTransferMode2:(int)a0;
- (int)transferMode1;
- (int)transferMode2;

@end
