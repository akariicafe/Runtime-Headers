@class NSString;

@interface DOMCharacterData : DOMNode

@property (copy) NSString *data;
@property (readonly) unsigned int length;

- (void)appendData:(id)a0;
- (void)remove;
- (id)previousElementSibling;
- (id)nextElementSibling;
- (id)substringData:(unsigned int)a0 length:(unsigned int)a1;
- (void)insertData:(unsigned int)a0 data:(id)a1;
- (void)deleteData:(unsigned int)a0 length:(unsigned int)a1;
- (void)replaceData:(unsigned int)a0 length:(unsigned int)a1 data:(id)a2;
- (id)substringData:(unsigned int)a0 :(unsigned int)a1;
- (void)insertData:(unsigned int)a0 :(id)a1;
- (void)deleteData:(unsigned int)a0 :(unsigned int)a1;
- (void)replaceData:(unsigned int)a0 :(unsigned int)a1 :(id)a2;

@end
