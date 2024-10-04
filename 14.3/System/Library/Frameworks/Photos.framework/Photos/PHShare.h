@class NSURL, NSString, NSDate;

@interface PHShare : NSObject <PHShare> {
    NSString *_singletonPhotoLibraryPath;
}

@property (readonly, nonatomic) unsigned short status;
@property (readonly, nonatomic) short publicPermission;
@property (readonly, nonatomic) unsigned short trashedState;
@property (readonly, nonatomic) short publishState;
@property (readonly, nonatomic) NSURL *shareURL;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *expiryDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)acceptShareWithUUID:(id)a0 photoLibrary:(id)a1 completion:(id /* block */)a2;
+ (void)publishShareWithUUID:(id)a0 photoLibrary:(id)a1 completion:(id /* block */)a2;
+ (id)PHShareErrorFromError:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
