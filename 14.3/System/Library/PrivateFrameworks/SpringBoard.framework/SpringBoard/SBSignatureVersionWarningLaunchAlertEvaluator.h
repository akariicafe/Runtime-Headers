@class NSString;

@interface SBSignatureVersionWarningLaunchAlertEvaluator : NSObject <SBApplicationLaunchAlertEvaluator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)shouldShowLaunchAlertForApplication:(id)a0;

@end
