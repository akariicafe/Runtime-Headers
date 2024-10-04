@interface HAP2AccessoryServerEncodingThreadBTLERequest : HAPBTLERequest

@property (readonly, nonatomic) unsigned char threadRequestType;
@property (readonly, nonatomic) id requestedValue;
@property (readonly, nonatomic) BOOL expectsResponseBody;
@property (readonly, nonatomic) long long writeOptions;

+ (id)attributeDatabaseRequest;
+ (id)readRequestForCharacteristic:(id)a0;
+ (id)writeRequestForCharacteristic:(id)a0 value:(id)a1 authorizationData:(id)a2 options:(long long)a3 error:(id *)a4;
+ (id)prepareWriteRequestForCharacteristic:(id)a0 value:(id)a1 authorizationData:(id)a2 options:(long long)a3 error:(id *)a4;
+ (id)executeWriteRequestForCharacteristic:(id)a0 value:(id)a1 options:(long long)a2 error:(id *)a3;
+ (id)notificationRequestForCharacteristic:(id)a0 threadRequestType:(unsigned char)a1 enforcePDUBodyLength:(BOOL)a2;

- (void).cxx_destruct;

@end
