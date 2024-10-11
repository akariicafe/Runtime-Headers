@class NSArray;

@interface IDSCTAdapterCache : NSObject

@property (nonatomic) unsigned long long dualSIMEnabled;
@property (nonatomic) unsigned long long isAnySIMUsable;
@property (nonatomic) unsigned long long isAnySIMInserted;
@property (nonatomic) unsigned long long supportsIdentification;
@property (nonatomic) unsigned long long doesAnySIMSupportsSimultaneousVoiceAndDataRightNow;
@property (retain, nonatomic) NSArray *sims;

- (id)debugDescription;
- (void).cxx_destruct;

@end
