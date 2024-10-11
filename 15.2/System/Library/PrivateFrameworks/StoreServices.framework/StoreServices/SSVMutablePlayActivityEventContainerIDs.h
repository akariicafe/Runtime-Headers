@class NSString;

@interface SSVMutablePlayActivityEventContainerIDs : SSVPlayActivityEventContainerIDs

@property (nonatomic) long long adamID;
@property (copy, nonatomic) NSString *cloudAlbumID;
@property (nonatomic) unsigned long long cloudPlaylistID;
@property (copy, nonatomic) NSString *globalPlaylistID;
@property (copy, nonatomic) NSString *playlistVersionHash;
@property (copy, nonatomic) NSString *stationHash;
@property (copy, nonatomic) NSString *stationStringID;
@property (nonatomic) long long stationID;

- (void)setAdamID:(long long)a0;
- (void)setStationHash:(id)a0;
- (void)setStationID:(long long)a0;
- (void)setCloudAlbumID:(id)a0;
- (void)setPlaylistVersionHash:(id)a0;
- (void)setCloudPlaylistID:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setGlobalPlaylistID:(id)a0;
- (void)setStationStringID:(id)a0;

@end
