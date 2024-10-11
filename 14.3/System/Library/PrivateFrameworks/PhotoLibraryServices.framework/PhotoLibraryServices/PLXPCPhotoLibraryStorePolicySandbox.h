@class NSString;

@interface PLXPCPhotoLibraryStorePolicySandbox : NSObject <PLXPCPhotoLibraryStorePolicy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldUseXPCStoreForDatabasePath:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1;
- (BOOL)hasSandboxAccessForPath:(id)a0;

@end
