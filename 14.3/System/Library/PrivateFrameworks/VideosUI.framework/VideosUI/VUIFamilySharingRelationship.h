@class NSString, _TVContentRating, NSDate;

@interface VUIFamilySharingRelationship : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) _TVContentRating *contentRating;
@property (retain, nonatomic) NSString *standardDescription;
@property (retain, nonatomic) NSString *artworkURL;
@property (retain, nonatomic) NSDate *releaseDate;
@property (retain, nonatomic) NSString *genreTitle;

- (void).cxx_destruct;

@end
