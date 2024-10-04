@interface RCEntityRevision : NSManagedObject

@property (readonly, nonatomic) long long revisionType;
@property (readonly, nonatomic) long long revisionID;
@property (readonly, nonatomic) long long recordingID;

- (void)setRecordingID:(long long)a0;
- (void)setRevisionID:(long long)a0;
- (void)setRevisionType:(long long)a0;

@end
