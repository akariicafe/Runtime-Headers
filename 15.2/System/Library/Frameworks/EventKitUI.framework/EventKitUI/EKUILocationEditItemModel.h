@class EKUILocationRowModel, NSString, NSMutableDictionary, NSMutableArray;

@interface EKUILocationEditItemModel : NSObject

@property (retain, nonatomic) NSMutableArray *rowModels;
@property (retain, nonatomic) NSMutableDictionary *conferenceRoomInfos;
@property (nonatomic) BOOL sourceSupportsAvailabilityRequests;
@property (readonly, nonatomic) BOOL hasVirtualConference;
@property (readonly, nonatomic) BOOL hasMapLocation;
@property (readonly, nonatomic) BOOL displaysPlaceholder;
@property (readonly, nonatomic) NSString *placeholderCellText;
@property (readonly, nonatomic) EKUILocationRowModel *virtualConferenceRowModel;
@property (readonly, nonatomic) EKUILocationRowModel *mapLocationRowModel;

- (void).cxx_destruct;
- (id)init;
- (void)rebuild:(id)a0;
- (void)reset;
- (void)reorderRowModels;
- (void)updateAvailabilityInformation:(id)a0;
- (id)_conferenceRoomNameForLocation:(id)a0;
- (id)_participantForConferenceRoomName:(id)a0 event:(id)a1;
- (BOOL)rowModelRepresentsConferenceRoom:(id)a0 onEvent:(id)a1;
- (void)removeRowModelAtIndex:(unsigned long long)a0 event:(id)a1;
- (void)_removeConferenceAttendeeOnEvent:(id)a0 forRowModel:(id)a1;
- (void)_updateConferenceDataOnEvent:(id)a0 forNewLocation:(id)a1;
- (void)_updateLocationsOnEvent:(id)a0;
- (void)removeConferenceRoomAttendeeIfNeeded:(id)a0 event:(id)a1;
- (long long)indexOfPredictedLocation;
- (void)refreshConferenceRoomCell:(id)a0;
- (id)_rowModelForCell:(id)a0;
- (void)removeRowModel:(id)a0 event:(id)a1;
- (void)updateRowModel:(id)a0 withMapLocation:(id)a1 event:(id)a2;
- (void)updateRowModel:(id)a0 withVirtualConference:(id)a1 event:(id)a2;
- (void)updateRowModel:(id)a0 withConferenceRoom:(id)a1 editItem:(id)a2;
- (BOOL)shouldDisplayRowModelWithConferenceCell:(id)a0 event:(id)a1;

@end
