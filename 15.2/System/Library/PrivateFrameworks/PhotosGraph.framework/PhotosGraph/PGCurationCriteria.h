@class PGCurationIndexSetTrait, PGCurationContentOrAestheticScoreTrait, PGCurationCropScoreTrait, PGCurationPartOfDayTrait, PGCurationSetTrait;

@interface PGCurationCriteria : NSObject

@property (nonatomic) double minimumAssetsRatio;
@property (readonly, nonatomic) unsigned long long client;
@property (nonatomic) unsigned long long faceFilter;
@property (nonatomic) BOOL filterUtilityAssets;
@property (retain, nonatomic) PGCurationIndexSetTrait *scenesTrait;
@property (retain, nonatomic) PGCurationIndexSetTrait *compulsoryScenesTrait;
@property (retain, nonatomic) PGCurationSetTrait *peopleTrait;
@property (retain, nonatomic) PGCurationSetTrait *socialGroupTrait;
@property (retain, nonatomic) PGCurationPartOfDayTrait *partOfDayTrait;
@property (retain, nonatomic) PGCurationContentOrAestheticScoreTrait *contentOrAestheticScoreTrait;
@property (retain, nonatomic) PGCurationCropScoreTrait *cropScoreTrait;

- (void).cxx_destruct;
- (id)initWithMinimumAssetsRatio:(double)a0 client:(unsigned long long)a1;
- (BOOL)isPassingForAsset:(id)a0 score:(double *)a1;
- (id)passingAssetsInAssets:(id)a0;
- (BOOL)passesForItem:(id)a0 score:(double *)a1;
- (BOOL)passesForItem:(id)a0 score:(double *)a1 graph:(id)a2 reasonString:(id *)a3;
- (BOOL)_passesForItem:(id)a0 score:(double *)a1 graph:(id)a2 reasonString:(id *)a3;
- (double)_scoreForSceneClassifications:(id)a0 withScenesTrait:(id)a1 traitFailed:(BOOL *)a2;
- (id)niceDescriptionWithGraph:(id)a0;
- (id)peopleTraitStringWithGraph:(id)a0;

@end
