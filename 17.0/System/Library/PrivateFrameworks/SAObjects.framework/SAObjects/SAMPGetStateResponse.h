@class NSString, SAMPMediaItem, NSNumber;

@interface SAMPGetStateResponse : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *hashedGroupID;
@property (retain, nonatomic) SAMPMediaItem *listeningToItem;
@property (copy, nonatomic) NSNumber *listeningToMusicApplication;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) int state;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getStateResponse;
+ (id)getStateResponseWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
