@class NSString;

@interface PUStoryUISwiftFactory : NSObject <PXStoryUISwiftFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)thumbnailActionPerformerWithModel:(id)a0;
+ (id)viewControllerWithConfiguration:(id)a0 contentViewController:(out id *)a1;


@end
