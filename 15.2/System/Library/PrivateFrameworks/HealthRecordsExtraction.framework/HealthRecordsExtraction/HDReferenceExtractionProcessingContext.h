@class NSArray, NSMutableSet, NSMapTable;

@interface HDReferenceExtractionProcessingContext : NSObject

@property (retain, nonatomic) NSArray *privateCompleteResources;
@property (retain, nonatomic) NSArray *privateIncompleteResources;
@property (retain, nonatomic) NSArray *privateUnresolvableReferences;
@property (retain, nonatomic) NSMutableSet *processedResources;
@property (retain, nonatomic) NSMutableSet *containedResourceIdentifiers;
@property (retain, nonatomic) NSMapTable *unresolvedReferences;
@property (retain, nonatomic) NSMapTable *resourcesWithUnresolvableReferences;
@property (readonly, nonatomic) NSArray *completeResources;
@property (readonly, nonatomic) NSArray *incompleteResources;
@property (readonly, nonatomic) NSArray *unresolvableReferences;

- (void)_reset;
- (void).cxx_destruct;
- (id)init;
- (void)recordProcessedResource:(id)a0;
- (void)recordUnresolvableReference:(id)a0 forResource:(id)a1 hint:(unsigned long long)a2;
- (void)recordContainedResource:(id)a0;
- (void)recordUnresolvedReference:(id)a0 forResource:(id)a1;
- (void)_processResources;

@end
