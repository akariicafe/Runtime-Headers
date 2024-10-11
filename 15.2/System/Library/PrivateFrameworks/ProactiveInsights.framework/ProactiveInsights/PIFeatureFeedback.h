@class PIFeatureFeedbackStream;

@interface PIFeatureFeedback : NSObject

@property (readonly, nonatomic) PIFeatureFeedbackStream *stream;

+ (BOOL)recordFeatureFeedback:(id)a0 clientIdentifier:(id)a1 type:(unsigned long long)a2 date:(id)a3;

- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0;
- (BOOL)recordFeatureFeedback:(id)a0 type:(unsigned long long)a1 date:(id)a2;

@end
