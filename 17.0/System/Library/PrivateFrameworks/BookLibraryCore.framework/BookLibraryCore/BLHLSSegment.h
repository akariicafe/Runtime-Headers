@class NSURL, BLHLSKey, BLHLSMap;

@interface BLHLSSegment : NSObject

@property (readonly, nonatomic) BLHLSMap *map;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) BLHLSKey *key;

- (id)description;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 duration:(double)a1 map:(id)a2 key:(id)a3;

@end
