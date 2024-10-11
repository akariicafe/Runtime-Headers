@class NSString;
@protocol SXPresentationAttributesProvider;

@interface SXLayoutInstructionFactory : NSObject <SXLayoutInstructionFactory>

@property (readonly, nonatomic) id<SXPresentationAttributesProvider> presentationAttributesProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createInstructions;
- (void).cxx_destruct;
- (id)initWithPresentationAttributesProvider:(id)a0;

@end
