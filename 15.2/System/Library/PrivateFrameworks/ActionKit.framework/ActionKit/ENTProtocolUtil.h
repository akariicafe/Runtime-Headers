@interface ENTProtocolUtil : NSObject

+ (void)skipType:(int)a0 onProtocol:(id)a1;
+ (id)_readValueForField:(id)a0 fromProtocol:(id)a1;
+ (void)readFromProtocol:(id)a0 ontoObject:(id)a1;
+ (void)_writeValue:(id)a0 forField:(id)a1 toProtocol:(id)a2;
+ (id)readMessage:(id)a0 fromProtocol:(id)a1 withResponseTypes:(id)a2;
+ (void)writeObject:(id)a0 ontoProtocol:(id)a1;
+ (void)sendMessage:(id)a0 toProtocol:(id)a1 withArguments:(id)a2;

@end
