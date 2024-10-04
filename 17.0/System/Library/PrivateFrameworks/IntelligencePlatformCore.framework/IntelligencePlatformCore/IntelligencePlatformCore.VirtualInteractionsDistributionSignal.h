@class NSSet;

@interface IntelligencePlatformCore.VirtualInteractionsDistributionSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ motionStateActivityIntervalProvider;
    void /* unknown type, empty encoding */ distributionProvider;
    void /* unknown type, empty encoding */ thirtyMinutesInSeconds;
    void /* unknown type, empty encoding */ fiveMinutesInSeconds;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
