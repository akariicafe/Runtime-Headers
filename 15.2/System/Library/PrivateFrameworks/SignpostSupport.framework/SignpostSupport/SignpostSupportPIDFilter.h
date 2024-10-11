@class NSSet, NSPredicate;

@interface SignpostSupportPIDFilter : NSObject <SignpostPredicateProducer>

@property (readonly, nonatomic) unsigned long long _compoundPredicateType;
@property (readonly, nonatomic) BOOL _wantsNotEqual;
@property (readonly, nonatomic) NSSet *pidSet;
@property (readonly, nonatomic) NSPredicate *predicateEquivalent;

- (void).cxx_destruct;
- (id)init;
- (BOOL)_wantsNotSubsystem;
- (BOOL)passesPIDNumber:(id)a0;
- (void)addPIDNumber:(id)a0;
- (void)addPIDNumberSet:(id)a0;

@end
