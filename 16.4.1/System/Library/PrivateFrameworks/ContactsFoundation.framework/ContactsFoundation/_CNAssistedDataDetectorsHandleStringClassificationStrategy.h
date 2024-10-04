@class NSString;
@protocol _CNHandleStringClassificationStrategy;

@interface _CNAssistedDataDetectorsHandleStringClassificationStrategy : NSObject <_CNHandleStringClassificationStrategy> {
    id<_CNHandleStringClassificationStrategy> _strategy;
    id<_CNHandleStringClassificationStrategy> _assistingStrategy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStrategy:(id)a0;
- (id)init;
- (unsigned long long)classificationOfHandleString:(id)a0;
- (void).cxx_destruct;
- (void)makeAssistingStrategyIfNecessary;

@end
