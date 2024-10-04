@class NSString;

@interface FTMutableTextToSpeechRequestDevConfig : FTTextToSpeechRequestDevConfig

@property (nonatomic) BOOL return_log;
@property (copy, nonatomic) NSString *voice_asset_path;
@property (copy, nonatomic) NSString *resource_asset_path;
@property (nonatomic) BOOL return_server_info;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
