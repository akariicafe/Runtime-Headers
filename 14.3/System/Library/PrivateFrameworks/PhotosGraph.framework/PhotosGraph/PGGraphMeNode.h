@interface PGGraphMeNode : PGGraphPersonNode

+ (id)filter;

- (void)enumeratePersonNodesWithRelationship:(unsigned long long)a0 matchingQuery:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)updateLocalIdentifier:(id)a0 isFavorite:(BOOL)a1 isUserCreated:(BOOL)a2;
- (void)_enumerateRelationshipWithLabel:(id)a0 matchingQuery:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (BOOL)_status:(unsigned long long)a0 fitsQuery:(unsigned long long)a1;
- (id)_relationshipLabelForRelationship:(unsigned long long)a0;
- (id)label;
- (void)_enumerateSocialGroupNodesForRelationshipLabel:(id)a0 usingBlock:(id /* block */)a1;
- (id)relationshipEdgesToPersonNode:(id)a0 matchingQuery:(unsigned long long)a1;
- (void)enumerateSocialGroupNodesWithRelationship:(unsigned long long)a0 usingBlock:(id /* block */)a1;

@end
