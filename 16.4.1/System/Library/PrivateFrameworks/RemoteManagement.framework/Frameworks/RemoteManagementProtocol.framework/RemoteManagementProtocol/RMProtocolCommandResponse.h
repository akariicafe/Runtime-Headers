@class NSString, RMProtocolCommandResponse_Command;

@interface RMProtocolCommandResponse : RMModelPayloadBase

@property (copy, nonatomic) NSString *responseCommandToken;
@property (copy, nonatomic) RMProtocolCommandResponse_Command *responseCommand;

+ (id)requestWithCommandToken:(id)a0 command:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
