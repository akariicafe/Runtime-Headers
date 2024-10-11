@class NSString, _UICanvasUserActivityManager;

@interface _UISceneUserActivityBSActionsHandler : NSObject <_UISceneBSActionHandler> {
    _UICanvasUserActivityManager *_canvasUserActivityManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_respondToActions:(id)a0 forFBSScene:(id)a1 inUIScene:(id)a2 fromTransitionContext:(id)a3;
- (id)_launchOptionsFromActions:(id)a0 forFBSScene:(id)a1 uiSceneSession:(id)a2 transitionContext:(id)a3;

@end
