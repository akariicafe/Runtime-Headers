@interface WFSwitchPosterAction : WFAction

- (id)disabledOnPlatforms;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)missingPosterError;
- (id)noInputError;
- (void)switchToPosterAndFinish:(id)a0;

@end
