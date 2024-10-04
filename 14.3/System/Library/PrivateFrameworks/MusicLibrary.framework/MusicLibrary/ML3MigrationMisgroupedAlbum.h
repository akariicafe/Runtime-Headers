@class NSArray, NSMutableArray;

@interface ML3MigrationMisgroupedAlbum : NSObject {
    NSMutableArray *_misgroupedTracks;
}

@property (readonly, nonatomic) long long albumPID;
@property (readonly, nonatomic) long long albumArtistPID;
@property (readonly, nonatomic) NSArray *misgroupedTracks;

- (void).cxx_destruct;
- (id)initWithAlbumPID:(long long)a0 albumArtistPID:(long long)a1;
- (void)addMisgroupedTrack:(id)a0;

@end
