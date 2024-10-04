@class NSArray, NSString;

@interface AVCScreenCaptureConfiguration : NSObject

@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int frameRate;
@property (nonatomic) BOOL isWindowed;
@property (nonatomic) unsigned int screenCaptureDisplayID;
@property (nonatomic) BOOL isCursorCaptured;
@property (copy, nonatomic) NSArray *excludedApplicationBundleIDs;
@property (nonatomic) BOOL shouldRunInProcess;
@property (nonatomic) unsigned int selectiveSharingPort;
@property (copy, nonatomic) NSString *selectiveScreenUUID;

- (id)init;
- (void)dealloc;
- (id)initWithHeight:(unsigned int)a0 width:(unsigned int)a1 framerate:(unsigned int)a2 screenCaptureDisplayID:(unsigned int)a3;

@end
