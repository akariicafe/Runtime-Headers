@class NSSet, NSMutableDictionary, NSDictionary, PGGraph, NSMutableArray;

@interface PGGraphRelationshipProcessor : NSObject

@property (readonly, nonatomic) unsigned long long runOptions;
@property (retain, nonatomic) NSMutableArray *analyzersToRun;
@property (retain, nonatomic) NSMutableDictionary *relationshipAnalyzerPropertiesByPersonLocalIdentifier;
@property (retain, nonatomic) NSMutableDictionary *partnerScoreByPersonLocalIdentifier;
@property (retain, nonatomic) NSMutableDictionary *parentScoreByPersonLocalIdentifier;
@property (retain, nonatomic) NSMutableDictionary *childScoreByPersonLocalIdentifier;
@property (retain, nonatomic) NSMutableDictionary *familyScoreByPersonLocalIdentifier;
@property (retain, nonatomic) NSMutableDictionary *coworkerScoreByPersonLocalIdentifier;
@property (retain, nonatomic) NSMutableDictionary *friendScoreByPersonLocalIdentifier;
@property (readonly, nonatomic) NSSet *personNodes;
@property (readonly, nonatomic) NSSet *contactIdentifiers;
@property (readonly, nonatomic) NSDictionary *personIdentifierByContactIdentifier;
@property (readonly, nonatomic) NSSet *momentNodes;
@property (readonly, nonatomic) PGGraph *graph;
@property (readonly, nonatomic) unsigned long long numberOfSignals;

- (void).cxx_destruct;
- (id)initWithPersonNodes:(id)a0 runOptions:(unsigned long long)a1;
- (void)_extractSignalsFromRunOptions;
- (void)runRelationshipAnalysisWithProgressBlock:(id /* block */)a0;
- (void)enumerateInferredRelationshipsUsingBlock:(id /* block */)a0;
- (void)_aggregateScores;
- (void)_enumerateInferredPartnerUsingBlock:(id /* block */)a0;
- (void)_enumerateInferredRelationshipMembersFromScores:(id)a0 cumulativeThreshold:(double)a1 minimumConfidence:(double)a2 usingBlock:(id /* block */)a3;
- (id)_socialGroupNodesIncludingPersonLocalIdentifiers:(id)a0 minimumMatches:(unsigned long long)a1 amongSocialGroupNodes:(id)a2;
- (void)_enumerateInferredFamilyMembersUsingBlock:(id /* block */)a0;
- (void)_enumerateInferredParentsUsingBlock:(id /* block */)a0;
- (void)_enumerateInferredChildrenUsingBlock:(id /* block */)a0;
- (void)_enumerateInferredFriendsUsingBlock:(id /* block */)a0;
- (void)_enumerateInferredCoworkersUsingBlock:(id /* block */)a0;
- (id)personLocalIdentifierForContactIdentifier:(id)a0;
- (id)relationshipAnalyzerPropertiesForPersonLocalIdentifier:(id)a0;

@end
