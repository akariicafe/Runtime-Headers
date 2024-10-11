@interface MLFeatureProviderUtils : NSObject

+ (BOOL)canVectorizeAllFeaturesWithDescriptions:(id)a0;
+ (BOOL)canVectorizeFeatureWithDescription:(id)a0;
+ (id)_featureValuesForNames:(id)a0 providedBy:(id)a1 error:(id *)a2;
+ (id)providerWithSubsetOfFeaturesNamed:(id)a0 providedBy:(id)a1;
+ (id)lazyProviderWithFeaturesProvidedBy:(id)a0 addedToFeaturesProvidedBy:(id)a1;
+ (long long)_vectorizedSizeOfFeatureValues:(id)a0 error:(id *)a1;
+ (BOOL)_vectorizeWithoutSizeCheckFeatureValues:(id)a0 intoDoubleVector:(double *)a1 stride:(unsigned long long)a2 error:(id *)a3;
+ (BOOL)vectorizeFeaturesProvidedBy:(id)a0 featureNames:(id)a1 intoDoubleVector:(double *)a2 length:(unsigned long long)a3 stride:(unsigned long long)a4 error:(id *)a5;
+ (id)vectorizeFeaturesProvidedBy:(id)a0 featureNames:(id)a1 error:(id *)a2;

@end
