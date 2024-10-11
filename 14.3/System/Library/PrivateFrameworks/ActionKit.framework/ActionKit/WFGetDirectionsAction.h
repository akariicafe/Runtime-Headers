@class NSString;

@interface WFGetDirectionsAction : WFAction <WFDynamicEnumerationDataSource, WFParameterEventObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)directionsModeFromString:(id)a0;
+ (id)localizedNameForDirectionsModeString:(id)a0;

- (id)appIdentifier;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (void)parameterAttributesDidChange:(id)a0;
- (id)possibleStatesForEnumeration:(id)a0;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (id)supportedDirectionsModesForAppName:(id)a0;
- (void)getStartAddressWithCompletionHandler:(id /* block */)a0;
- (void)openMapsLink:(id)a0 inAppNamed:(id)a1;
- (void)getMapsURLForMapsLink:(id)a0 appName:(id)a1 completionHandler:(id /* block */)a2;
- (void)openMapsURL:(id)a0 withAppIdentifier:(id)a1;

@end
