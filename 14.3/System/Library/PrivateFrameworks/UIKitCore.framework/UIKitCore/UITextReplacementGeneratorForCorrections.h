@class UITextChecker, TIKeyboardCandidate;

@interface UITextReplacementGeneratorForCorrections : UITextReplacementGenerator {
    BOOL _showRevertingAutocorrectionInPredictionView;
}

@property (retain, nonatomic) UITextChecker *textChecker;
@property (retain, nonatomic) TIKeyboardCandidate *autocorrectionRecord;
@property (nonatomic) BOOL forceHistoryReplacement;
@property (nonatomic) unsigned long long maxEditDistance;
@property (nonatomic) unsigned long long maxCountAfterAutocorrectionGuesses;
@property (nonatomic) BOOL forceAutocorrectionGuesses;
@property (nonatomic) unsigned long long maxCountAfterSpellingGuesses;
@property (nonatomic) BOOL forceSpellingGuesses;

- (id)init;
- (BOOL)isStringToReplaceMisspelled;
- (void).cxx_destruct;
- (BOOL)isStringMisspelled:(id)a0;
- (id)addReplacementRevertingAutocorrectionToReplacements:(id)a0;
- (void)addPreviouslySuggestedAutocorrectionToReplacements:(id)a0;
- (void)addAutocorrectionGuessesToReplacements:(id)a0;
- (void)addSpellingGuessesForString:(id)a0 ToReplacements:(id)a1;
- (id)replacements;

@end
