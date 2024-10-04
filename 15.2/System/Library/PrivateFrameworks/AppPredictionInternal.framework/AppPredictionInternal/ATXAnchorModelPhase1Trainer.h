@class NSString, ATXAnchor, ATXAnchorModelDataStoreWrapper, ATXAnchorModelHyperParameters;
@protocol ATXPETEventTracker2Protocol;

@interface ATXAnchorModelPhase1Trainer : NSObject <ATXAnchorModelPhase1TrainerProtocol> {
    ATXAnchor *_anchor;
    ATXAnchorModelDataStoreWrapper *_storeWrapper;
    ATXAnchorModelHyperParameters *_hyperParameters;
    id<ATXPETEventTracker2Protocol> _tracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)initForAnchor:(id)a0;
- (id)trainPhase1;
- (id)initForAnchor:(id)a0 anchorModelDataStoreWrapper:(id)a1 hyperParameters:(id)a2 tracker:(id)a3;
- (id)selectedPredictionCandidates;
- (id)uniqueCandidateIdsThatOccurredAfterAnchor;
- (BOOL)candidateSatisfiesAllThresholds:(id)a0 trainingResult:(id)a1;
- (void)_logPredictionsFilteredDuringPhase1WithCandidateIdsToConsider:(id)a0 selectedCandidates:(id)a1;
- (BOOL)candidateUniqueAnchorOccurrencesIsAtLeastMinimum:(long long)a0 candidateId:(id)a1 trainingResult:(id)a2;
- (double)classConditionalProbabilityOfAnchorForCandidate:(id)a0;
- (double)posteriorProbabilityConditionedOnAnchorForCandidate:(id)a0;
- (double)standardDeviationOfSecondsAfterAnchorForFirstOccurrenceOfCandidateId:(id)a0;
- (double)anchorPopularityForCandidate:(id)a0;
- (double)globalPopularityForCandidate:(id)a0;
- (BOOL)classConditionalProbabilityOfAnchorIsAtLeastMinimum:(double)a0 candidateId:(id)a1 trainingResult:(id)a2;
- (BOOL)posteriorProbabilityConditionedOnAnchorIsAtLeastMinimum:(double)a0 candidateId:(id)a1 trainingResult:(id)a2;
- (double)standardDeviationOfNumbers:(id)a0;

@end
