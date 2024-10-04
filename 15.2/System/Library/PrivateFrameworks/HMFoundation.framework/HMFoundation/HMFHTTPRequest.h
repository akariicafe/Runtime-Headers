@class NSString, HMFHTTPRequestInternal, NSURL, NSDictionary, NSData, NSURLRequest;

@interface HMFHTTPRequest : HMFObject

@property (nonatomic) double timeoutInterval;
@property (readonly, nonatomic) HMFHTTPRequestInternal *internal;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *method;
@property (readonly, nonatomic) NSDictionary *headerFields;
@property (readonly, nonatomic) NSData *body;
@property (readonly, copy, nonatomic) NSURLRequest *urlRequest;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)init;
- (id)responseWithStatusCode:(long long)a0;
- (id)initWithInternalRequest:(id)a0;

@end
