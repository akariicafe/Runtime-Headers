@interface Safety.EmergencySOSStewieSpecifierDataSource : NSObject <HKCoreTelephonyClientDelegate> {
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ presentationContext;
    void /* unknown type, empty encoding */ specifiers;
    void /* unknown type, empty encoding */ stewieDemoProvider;
    void /* unknown type, empty encoding */ coreTelephonyClient;
    void /* unknown type, empty encoding */ _currentStewieSupport;
}

- (id)init;
- (void).cxx_destruct;
- (void)stewieSupportChanged:(id)a0;
- (void)stewieLearnMoreTapped;

@end
