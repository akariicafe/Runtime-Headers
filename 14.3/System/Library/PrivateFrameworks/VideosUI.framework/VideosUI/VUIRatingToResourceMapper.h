@class NSDictionary;

@interface VUIRatingToResourceMapper : NSObject

@property (retain, nonatomic) NSDictionary *mappingDictionary;

- (id)init;
- (void).cxx_destruct;
- (id)_cleanRatingName:(id)a0;
- (id)resourceForRating:(id)a0 ratingSystem:(id)a1;

@end
