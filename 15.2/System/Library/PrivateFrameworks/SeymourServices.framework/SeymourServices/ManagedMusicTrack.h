@class NSString, NSSet, ManagedArtwork;

@interface ManagedMusicTrack : NSManagedObject

@property (nonatomic, copy) NSString *album;
@property (nonatomic, copy) NSString *artist;
@property (nonatomic, copy) NSString *contentRating;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) double startTime;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) ManagedArtwork *artwork;
@property (nonatomic, retain) NSSet *catalogWorkoutMetadatas;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
