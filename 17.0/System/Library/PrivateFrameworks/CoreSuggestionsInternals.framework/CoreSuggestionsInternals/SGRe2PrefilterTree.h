@class NSData;

@interface SGRe2PrefilterTree : NSObject {
    NSData *_data;
    const unsigned short *_rpns;
    const unsigned short *_h1;
    const unsigned short *_h2;
    const unsigned short *_h3;
    const char *_s1;
    const char *_s2;
    const char *_s3;
    unsigned short _nrpns;
    unsigned short _n1;
    unsigned short _n2;
    unsigned short _n3;
}

- (id)init;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)regexpIdsThatMightMatchUtf8:(const char *)a0;

@end
