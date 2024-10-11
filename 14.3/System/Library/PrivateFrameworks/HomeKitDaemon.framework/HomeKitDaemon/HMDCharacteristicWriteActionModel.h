@class NSString, NSNumber;

@interface HMDCharacteristicWriteActionModel : HMDActionModel

@property (retain, nonatomic) NSString *accessory;
@property (retain, nonatomic) NSNumber *serviceID;
@property (retain, nonatomic) NSNumber *characteristicID;
@property (retain, nonatomic) id targetValue;

+ (id)properties;

- (id)dependentUUIDs;
- (void)loadModelWithActionInformation:(id)a0;

@end
