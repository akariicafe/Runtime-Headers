@class FTPronGuessResponse, FTCancelRequest, FTFinishAudio, FTAudioPacket, NSObject, FTStartPronGuessRequest;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutableApgPronGuessMessage : FTApgPronGuessMessage

@property (nonatomic) long long session_message_type;
@property (copy, nonatomic) FTStartPronGuessRequest *session_messageAsFTStartPronGuessRequest;
@property (copy, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property (copy, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property (copy, nonatomic) FTCancelRequest *session_messageAsFTCancelRequest;
@property (copy, nonatomic) FTPronGuessResponse *session_messageAsFTPronGuessResponse;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *session_message;

+ (Class)session_message_mutableClassForType:(long long)a0;
+ (long long)session_message_typeForMutableObject:(id)a0;
+ (long long)session_message_typeForObject:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)setSession_message:(id)a0;

@end
