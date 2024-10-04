@class NSString, PKEntitlementWhitelist, PDDeviceRegistrationServiceCoordinator;

@interface PDDeviceRegistrationService : PDXPCService <PDDeviceRegistrationServiceExportedInterface> {
    PKEntitlementWhitelist *_whitelist;
}

@property (retain, nonatomic) PDDeviceRegistrationServiceCoordinator *deviceRegistrationServiceCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
