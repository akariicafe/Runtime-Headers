@class PXPhotosViewModel, PXContentFilterState;

@interface PXPhotosGridActionPerformer : PXActionPerformer

@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, nonatomic) long long libraryType;
@property (readonly, nonatomic) PXContentFilterState *currentFilterState;

+ (BOOL)canPerformActionType:(id)a0 withViewModel:(id)a1;

- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;
- (void).cxx_destruct;
- (id)initWithActionType:(id)a0;
- (id)initWithViewModel:(id)a0 actionType:(id)a1;

@end
