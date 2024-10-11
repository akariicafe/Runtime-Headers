@class NSString;

@interface IntentsApp : NSObject

@property (readonly, copy, nonatomic) NSString *appID;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL accessGranted;

- (void).cxx_destruct;
- (id)initWithAppId:(id)a0 displayName:(id)a1 accessGranted:(BOOL)a2;
- (long long)compareWithIntentsApp:(id)a0;

@end
