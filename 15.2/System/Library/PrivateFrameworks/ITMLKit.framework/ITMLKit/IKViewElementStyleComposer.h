@class IKViewElementStyle, IKStyleList;

@interface IKViewElementStyleComposer : NSObject

@property (readonly, nonatomic) BOOL requiresMediaQueryEvaluation;
@property (retain, nonatomic) IKViewElementStyle *composedSansDefaultStyle;
@property (retain, nonatomic) IKViewElementStyle *composedStyle;
@property (readonly, retain, nonatomic) IKViewElementStyleComposer *defaultStyleComposer;
@property (readonly, retain, nonatomic) IKViewElementStyleComposer *parentStyleComposer;
@property (readonly, retain, nonatomic) IKStyleList *styleList;
@property (readonly, retain, nonatomic) IKViewElementStyle *elementStyleOverrides;
@property (readonly, nonatomic, getter=isCompositionDone) BOOL compositionDone;

+ (id)styleComposerWithDefaultStyleComposer:(id)a0 parentStyleComposer:(id)a1 styleList:(id)a2 elementStyleOverrides:(id)a3;

- (void).cxx_destruct;
- (id)composedStyleWithMediaQueryEvaluator:(id)a0;
- (id)initWithDefaultStyleComposer:(id)a0 parentStyleComposer:(id)a1 styleList:(id)a2 elementStyleOverrides:(id)a3;
- (void)_composeWithMediaQueryEvaluator:(id)a0;
- (void)setNeedsRecomposition;
- (id)consolidatedDefaultStyleList;
- (id)composedSansDefaultStyleWithMediaQueryEvaluator:(id)a0;

@end
