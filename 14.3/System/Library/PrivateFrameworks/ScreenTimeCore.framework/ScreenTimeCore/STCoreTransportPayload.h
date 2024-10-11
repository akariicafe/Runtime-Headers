@class NSString, NSArray, NSData, STCoreOrganization;

@interface STCoreTransportPayload : NSManagedObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) STCoreOrganization *sourceOrganizationEnqueued;
@property (retain, nonatomic) STCoreOrganization *sourceOrganizationPending;
@property (retain, nonatomic) STCoreOrganization *sourceOrganizationRecent;
@property (copy, nonatomic) NSArray *destinations;
@property (copy, nonatomic) NSData *payloadData;

+ (id)fetchRequestForPayloadsOfType:(id)a0;
+ (id)fetchLastTransportPayloadInContext:(id)a0 ofType:(id)a1 error:(id *)a2;
+ (id)fetchTransportPayloadContext:(id)a0 withIdentifier:(id)a1 error:(id *)a2;

- (void)setDestinations:(id)a0;
- (id)destinations;
- (id)description;

@end
