@class NSString, NSArray;

@interface VUIStackedImageNamedLayerStack : NSObject <UINamedLayerStack, NSCopying> {
    struct CGImage { } *_flattenedImage;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *layers;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double scale;
@property (nonatomic) struct CGImage { } *flattenedImage;
@property (retain, nonatomic) id radiosityImage;
@property (nonatomic) struct CGSize { double width; double height; } radiosityImageScale;
@property (nonatomic) BOOL flatImageContainsCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
