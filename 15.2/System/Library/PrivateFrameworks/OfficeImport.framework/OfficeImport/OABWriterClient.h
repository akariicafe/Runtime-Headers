@interface OABWriterClient : NSObject

- (void)writeClientAnchorFromDrawable:(id)a0 toObject:(id)a1 state:(id)a2;
- (void)writeClientDataFromDrawable:(id)a0 toObject:(id)a1 state:(id)a2;
- (void)writeClientTextFromShape:(id)a0 toObject:(id)a1 state:(id)a2;
- (void)writeClientDataFromTableCell:(id)a0 toObject:(id)a1 state:(id)a2;
- (unsigned short)eshSchemeColorIndexForOADSchemeColorValue:(int)a0 state:(id)a1;

@end
