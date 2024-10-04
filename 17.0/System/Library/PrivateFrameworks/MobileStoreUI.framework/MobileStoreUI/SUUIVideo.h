@class NSURL;
@protocol SUUIArtworkProviding;

@interface SUUIVideo : NSObject

@property (readonly, nonatomic) id<SUUIArtworkProviding> artworks;
@property (readonly, nonatomic) NSURL *URL;

- (void).cxx_destruct;
- (id)initWithVideoDictionary:(id)a0;

@end
