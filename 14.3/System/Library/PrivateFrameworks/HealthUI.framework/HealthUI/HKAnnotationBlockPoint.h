@class NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKAnnotationBlockPoint : NSObject <HKGraphSeriesBlockCoordinate>

@property (readonly, nonatomic) struct CGPoint { double x; double y; } point;
@property (readonly, nonatomic) long long pointType;
@property (readonly, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly, nonatomic) double startXValue;
@property (readonly, nonatomic) double endXValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
