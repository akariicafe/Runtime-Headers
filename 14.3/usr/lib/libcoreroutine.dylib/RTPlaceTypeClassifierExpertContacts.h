@class RTContactsManager, RTMapsSupportManager, RTDistanceCalculator, RTLearnedLocationStore, NSString, RTMapServiceManager;

@interface RTPlaceTypeClassifierExpertContacts : NSObject <RTPlaceTypeProvider>

@property (retain, nonatomic) RTContactsManager *contactsManager;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTMapsSupportManager *mapsSupportManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)classifyWithError:(id *)a0;
- (id)initWithContactsManager:(id)a0 distanceCalculator:(id)a1 learnedLocationStore:(id)a2 mapServiceManager:(id)a3 mapsSupportManager:(id)a4;
- (id)_meCardContactWithError:(id *)a0;
- (id)_postalAddressMapItemsOfContact:(id)a0 error:(id *)a1;
- (id)_correctedMapItemsFromUserWithError:(id *)a0;

@end
