@class UIViewFloatAnimatableProperty;

@interface VKPointAnimatableProperty : NSObject

@property (readonly, nonatomic) UIViewFloatAnimatableProperty *x;
@property (readonly, nonatomic) UIViewFloatAnimatableProperty *y;
@property (nonatomic) struct CGPoint { double x0; double x1; } value;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } presentationValue;

- (void).cxx_destruct;
- (id)init;

@end
