@interface MusicKit.ArtworkLoadingProtocol : NSURLProtocol

+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;

- (void)stopLoading;
- (void)startLoading;
- (id)initWithRequest:(id)a0 cachedResponse:(id)a1 client:(id)a2;

@end
