@class NSString, SAGKSpeakableAnswer;

@interface SAGKDirectAnswer : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *answer;
@property (copy, nonatomic) NSString *confidenceLevel;
@property (retain, nonatomic) SAGKSpeakableAnswer *speakableAnswer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)directAnswer;
+ (id)directAnswerWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
