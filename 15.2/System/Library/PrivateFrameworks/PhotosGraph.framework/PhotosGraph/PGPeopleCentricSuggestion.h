@class NSArray;

@interface PGPeopleCentricSuggestion : PGSingleAssetSuggestion {
    NSArray *_suggestedPersonLocalIdentifiers;
}

- (void).cxx_destruct;
- (id)initWithPersonLocalIdentifier:(id)a0 asset:(id)a1;
- (id)initWithPersonLocalIdentifiers:(id)a0 asset:(id)a1;
- (id)suggestedPersonLocalIdentifiers;

@end
