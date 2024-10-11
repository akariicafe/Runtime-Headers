@interface SBSwitcherScrollViewAttributes : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) double decelerationRate;
@property (nonatomic) BOOL scrollViewPagingEnabled;
@property (nonatomic) unsigned long long scrollAxis;
@property (nonatomic) struct CGSize { double width; double height; } interpageSpacingForPaging;
@property (nonatomic) struct CGPoint { double x; double y; } pagingOrigin;
@property (nonatomic) BOOL interpolatesDuringSwipeToKill;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_copyWithClass:(Class)a0;

@end
