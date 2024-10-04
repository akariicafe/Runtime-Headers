@class SBSHomeScreenService, NSString;
@protocol SBSHomeScreenServiceLayoutObserver;

@interface SBSHomeScreenServiceHomeScreenLayoutObservationAssertion : NSObject <BSInvalidatable>

@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (weak, nonatomic) SBSHomeScreenService *service;
@property (readonly, weak, nonatomic) id<SBSHomeScreenServiceLayoutObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
