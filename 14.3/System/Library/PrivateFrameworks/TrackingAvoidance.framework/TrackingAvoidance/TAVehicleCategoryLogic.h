@interface TAVehicleCategoryLogic : NSObject

+ (id)accumulatedTAVehicleCategoryHistoryFromVehicleStateNotificationInTAStore:(id)a0 since:(id)a1 to:(id)a2;
+ (id)accumulatedTAVehicleCategoryHistoryFromGeoNavigationNotificationInTAStore:(id)a0 since:(id)a1 to:(id)a2;
+ (id)extractPrivateVehicleHintsFromTAStore:(id)a0 since:(id)a1 to:(id)a2;

@end
