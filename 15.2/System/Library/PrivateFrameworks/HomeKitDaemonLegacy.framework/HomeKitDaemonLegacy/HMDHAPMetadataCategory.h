@class NSNumber, NSString;

@interface HMDHAPMetadataCategory : HMFObject

@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) NSString *uuidStr;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *catDescription;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)a0 uuid:(id)a1 name:(id)a2 description:(id)a3;

@end
