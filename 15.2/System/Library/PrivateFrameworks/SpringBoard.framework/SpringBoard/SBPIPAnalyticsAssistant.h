@class NSString;

@interface SBPIPAnalyticsAssistant : NSObject {
    NSString *_bundleIdentifier;
    long long _contentType;
    BOOL _isAutoPIPEnabled;
    double _activateDuration;
    double _activationTimestamp;
    id /* block */ _invalidationBlock;
}

@property (readonly, nonatomic) NSString *analyticsIdentifier;

- (void).cxx_destruct;
- (void)invalidate;
- (id)generateAnalyticsPayload;
- (id)initWithBundleIdentifier:(id)a0 contentType:(long long)a1 isAutoPIPEnabled:(BOOL)a2 invalidationBlock:(id /* block */)a3;
- (void)noteBecameInactiveAtTime:(double)a0;
- (void)noteBecameActiveAtTime:(double)a0;
- (id)_generateMutableAnalyticsPayload;

@end
