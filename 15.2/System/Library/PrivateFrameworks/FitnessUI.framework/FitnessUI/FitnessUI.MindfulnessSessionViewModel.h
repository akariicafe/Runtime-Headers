@class NSDictionary, NSString;

@interface FitnessUI.MindfulnessSessionViewModel : NSObject {
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ startDate;
    void /* unknown type, empty encoding */ endDate;
    void /* unknown type, empty encoding */ duration;
    void /* unknown type, empty encoding */ metadata;
    void /* unknown type, empty encoding */ sourceRevision;
}

@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;

@end
