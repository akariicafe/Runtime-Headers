@class NSString;

@interface MapsSuggestionsFirstUnlockBase : MapsSuggestionsBaseTrigger <MapsSuggestionsFirstUnlockProtocol>

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasDeviceBeenUnlocked;
- (id)initWithName:(id)a0;
- (void)triggerFired:(id)a0;

@end
