@class NSString, DOMHTMLCollection;

@interface DOMHTMLTableSectionElement : DOMHTMLElement

@property (copy) NSString *align;
@property (copy) NSString *ch;
@property (copy) NSString *chOff;
@property (copy) NSString *vAlign;
@property (readonly) DOMHTMLCollection *rows;

- (id)insertRow:(int)a0;
- (void)deleteRow:(int)a0;

@end
