@class NSURL, NSDictionary;

@interface GEOURLWithHeaders : NSObject

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSDictionary *headerFields;

- (id)initWithURL:(id)a0 headerFields:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
