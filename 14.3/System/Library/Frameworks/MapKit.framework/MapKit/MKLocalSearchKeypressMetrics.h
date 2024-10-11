@class NSString, NSArray;

@interface MKLocalSearchKeypressMetrics : NSObject

@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, copy, nonatomic) NSArray *queryTokens;
@property (readonly, nonatomic) NSArray *suggestionEntries;

- (void).cxx_destruct;
- (void)submitWithStatus:(unsigned long long)a0;
- (id)initWithQuery:(id)a0 queryTokens:(id)a1 suggestionEntries:(id)a2;

@end
