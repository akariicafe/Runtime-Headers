@class NSTimeZone, NSString, NSArray, HFEventBuilder;
@protocol HFTimeEventBuilder;

@interface HFEventTrigggerBuilderTimeInterface : HFEventTriggerBuilderInterface <HFConcreteTimeTriggerBuilderLikeObject>

@property (readonly, weak, nonatomic) NSString *name;
@property (retain, nonatomic) HFEventBuilder<HFTimeEventBuilder> *eventBuilder;
@property (copy, nonatomic) NSArray *recurrences;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)triggerEnabledStateDidChange:(BOOL)a0;
- (void)copyCurrentStateFromTriggerBuilder:(id)a0;

@end
