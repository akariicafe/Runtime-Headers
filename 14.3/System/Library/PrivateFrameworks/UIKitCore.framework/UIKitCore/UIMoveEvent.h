@interface UIMoveEvent : UIEvent

@property (nonatomic, setter=_setMoveDirection:) long long _moveDirection;
@property (nonatomic, setter=_setFocusHeading:) unsigned long long _focusHeading;

- (void)_sendEventToResponder:(id)a0;
- (long long)type;

@end
