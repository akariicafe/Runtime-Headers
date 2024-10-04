@class HAPAudioCodecSampleRateWrapper, NSString, HAPAudioCodecBitRateWrapper, HAPTLVUnsignedNumberValue;

@interface HAPAudioStreamCodecParameters : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPTLVUnsignedNumberValue *numAudioChannels;
@property (retain, nonatomic) HAPAudioCodecBitRateWrapper *bitRate;
@property (retain, nonatomic) HAPAudioCodecSampleRateWrapper *sampleRate;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *packetTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithNumAudioChannels:(id)a0 bitRate:(id)a1 sampleRate:(id)a2 packetTime:(id)a3;
- (id)serializeWithError:(id *)a0;

@end
