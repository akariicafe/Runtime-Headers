@class NSString, NSArray, MRDeviceInfo, NSError;

@interface MRExternalDeviceTransport : NSObject

@property (readonly, nonatomic) MRDeviceInfo *deviceInfo;
@property (readonly, nonatomic) NSString *uid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *hostname;
@property (readonly, nonatomic) long long port;
@property (readonly, nonatomic) BOOL requiresCustomPairing;
@property (nonatomic) BOOL shouldUseSystemAuthenticationPrompt;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) long long connectionType;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL supportsIdleDisconnection;
@property (readonly, nonatomic) BOOL supportsReconnection;
@property (readonly, nonatomic) NSArray *subscribedPlayerPaths;
@property (readonly, nonatomic) NSArray *allowedPlayerPaths;

- (void).cxx_destruct;
- (void)resetWithError:(id)a0;
- (id)createConnectionWithUserInfo:(id)a0;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)a0;
- (BOOL)shouldUseSystemAuthenticationPrompt;

@end
