@class NSString, BSServiceConnectionEndpoint;
@protocol CNUIUserActionUserActivityOpener, CNUIUserActionURLOpener, CNUIUserActionCurator, CNUIUserActionRecorder, CNUIUserActionDialRequestOpener;

@interface CNUIUserActionContext : NSObject <CNUIUserActionContext>

@property (retain, nonatomic) id<CNUIUserActionURLOpener> urlOpener;
@property (retain, nonatomic) id<CNUIUserActionUserActivityOpener> userActivityOpener;
@property (retain, nonatomic) id<CNUIUserActionDialRequestOpener> dialRequestOpener;
@property (retain, nonatomic) id<CNUIUserActionRecorder> actionRecorder;
@property (retain, nonatomic) id<CNUIUserActionCurator> actionCurator;
@property (copy, nonatomic) NSString *channelIdentifier;
@property (copy, nonatomic) BSServiceConnectionEndpoint *connectionEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextWithExtensionContext:(id)a0;
+ (id)defaultContext;
+ (id)makeDefaultContext;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0 applicationWorkspace:(id)a1;

@end
