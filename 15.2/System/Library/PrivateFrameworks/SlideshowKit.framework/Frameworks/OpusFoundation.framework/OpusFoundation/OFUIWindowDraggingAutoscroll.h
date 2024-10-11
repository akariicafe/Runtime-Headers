@class NSTimer, UIView;
@protocol OFUIWindowDraggingAutoscroll;

@interface OFUIWindowDraggingAutoscroll : NSObject

@property (retain) UIView<OFUIWindowDraggingAutoscroll> *autoscrollView;
@property (retain, nonatomic) NSTimer *autoscrollTimer;
@property float autoscrollDistance;

- (id)init;
- (void)dealloc;
- (void)maybeStartAutoscrollForDraggingSession:(id)a0;
- (void)stopAutoscroll;
- (id)_hitAutoscrollViewInSuperview:(id)a0;
- (id)_hitAutoscrollViewWithDraggingSession:(id)a0;
- (void)_autoscrollTimerFired:(id)a0;

@end
