@class NSString, NSArray, NSData, NSMutableDictionary;

@interface ICDelegationPlayInfoRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSData *playerAnisetteMID;
@property (copy, nonatomic) NSString *playerDeviceGUID;
@property (copy, nonatomic) NSString *playerUserAgent;
@property (copy, nonatomic) NSArray *tokenRequests;
@property (readonly, copy, nonatomic) NSMutableDictionary *propertyListRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
