@interface WLKBackgroundUpdateController : NSObject {
    int _notifyToken;
    BOOL _notifyTokenIsValid;
}

+ (id)sharedInstance;

- (id)_init;
- (void)dealloc;
- (id)init;

@end
