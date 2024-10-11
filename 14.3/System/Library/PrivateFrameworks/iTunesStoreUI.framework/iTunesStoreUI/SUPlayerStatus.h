@class NSError;

@interface SUPlayerStatus : NSObject <NSCopying>

@property (nonatomic) double currentTime;
@property (nonatomic) double duration;
@property (nonatomic) long long playerState;
@property (retain, nonatomic) NSError *error;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;

@end
