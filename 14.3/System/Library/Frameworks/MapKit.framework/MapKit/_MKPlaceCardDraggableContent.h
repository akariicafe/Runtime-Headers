@class UIView;
@protocol NSItemProviderWriting;

@interface _MKPlaceCardDraggableContent : NSObject

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) id<NSItemProviderWriting> draggableContent;
@property (nonatomic, getter=isHeader) BOOL header;
@property (nonatomic) int analyticsTarget;

- (void).cxx_destruct;

@end
