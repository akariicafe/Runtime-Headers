@class NSString, PBCodable;

@interface FSFCurareInteractionAsProto : NSObject <FSFCurareInteraction> {
    PBCodable *_content;
    NSString *_interactionId;
    unsigned int _dataVersion;
    NSString *_jsonStr;
}

@property (readonly, nonatomic) NSString *interactionId;
@property (readonly, nonatomic) unsigned int dataVersion;

+ (id)deserialize:(id)a0 dataVersion:(unsigned int)a1 interactionId:(id)a2;

- (id)serialize;
- (void).cxx_destruct;
- (id)json;
- (id)initWithProto:(id)a0 interactionId:(id)a1 dataVersion:(unsigned int)a2;
- (id)initWithProto:(id)a0 interactionId:(id)a1 dataVersion:(unsigned int)a2 jsonStr:(id)a3;

@end
