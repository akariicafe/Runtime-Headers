@class NSDictionary, NSArray;
@protocol MTEventDataProviderDelegate;

@interface MTEventDataProvider : MTObject

@property (retain, nonatomic) NSDictionary *knownFieldMethods;
@property (retain) NSArray *additionalData;
@property (weak, nonatomic) id<MTEventDataProviderDelegate> delegate;

- (void)addFields:(id)a0;
- (void).cxx_destruct;
- (id)knownFields;
- (id)processMetricsData:(id)a0 performanceData:(id)a1;
- (id)flattenAdditionalData;
- (void)addFieldsWithDictionary:(id)a0;
- (void)addFieldsWithPromise:(id)a0;
- (id)knownFieldMethodsForKnownFields:(id)a0;
- (SEL)knownFieldAccessorForFieldName:(id)a0;
- (void)addFieldsWithBlock:(id /* block */)a0;

@end
