@class NSString, NSUUID, NSSet, HMIFeedbackSession, NSData, NSMutableArray, NSDictionary;

@interface HMIFeedbackSubmitClipOperation : HMFOperation <HMFLogging>

@property (readonly) HMIFeedbackSession *feedbackSession;
@property (readonly) NSUUID *cameraProfileUUID;
@property (readonly) NSUUID *clipUUID;
@property (readonly) NSMutableArray *temporaryFileURLs;
@property (retain) NSSet *faceCrops;
@property (retain) NSData *assetData;
@property (retain) NSDictionary *serviceResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)main;
- (void).cxx_destruct;
- (id)feedbackServiceHost;
- (id)_temporaryFileURLWithUUID:(id)a0 extension:(id)a1 error:(id *)a2;
- (id)feedbackServiceURL;
- (id)_base64StringFromData:(id)a0;
- (BOOL)_attachEncryptedDataUsingKey:(id)a0 toPayload:(id)a1 error:(id *)a2;
- (id)_createPayloadWithServiceResult:(id)a0 error:(id *)a1;
- (void)_uploadPayloadData:(id)a0 uploadURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)_stripAudioTrackAndFacesFromAsset:(id)a0 completionHandler:(id /* block */)a1;
- (void)_downloadClipWithCameraProfileUUID:(id)a0 clipUUID:(id)a1 completionHandler:(id /* block */)a2;
- (void)_requestPreSignedURLWithClipUUID:(id)a0 completionHandler:(id /* block */)a1;
- (id)feedbackRequestURLForClipWithUUID:(id)a0;
- (void)_removeTemporaryFiles;
- (void)_submitClipWithCameraProfileUUID:(id)a0 clipUUID:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithFeedbackSession:(id)a0 cameraProfileUUID:(id)a1 clipUUID:(id)a2;
- (BOOL)_attachFaceCrops:(id)a0 toPayload:(id)a1 error:(id *)a2;

@end
