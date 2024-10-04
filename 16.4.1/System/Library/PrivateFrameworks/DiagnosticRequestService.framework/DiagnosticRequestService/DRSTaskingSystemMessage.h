@class NSString, NSUUID, NSDate;

@interface DRSTaskingSystemMessage : NSObject <DRJSONRepresentable>

@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSUUID *messageUUID;
@property (readonly, nonatomic) NSDate *dateReceived;
@property (readonly, nonatomic) NSDate *dateBroadcast;
@property (readonly, nonatomic) NSString *messageType;

+ (id)messageType;
+ (BOOL)isJSONDictForClass:(id)a0;

- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_versionIsSupported:(id)a0;
- (id)jsonDictRepresentation;
- (BOOL)_isEqualToMessage:(id)a0;
- (id)_mutableJSONDictRepresentation;
- (id)_versionFromJSONDict:(id)a0;
- (id)initWithJSONDict:(id)a0;
- (id)initWithVersion:(id)a0 messageUUID:(id)a1 dateBroadcast:(id)a2 dateReceived:(id)a3;

@end
