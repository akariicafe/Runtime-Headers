@class NSNumber, NSDate;

@interface HDEnhancedFTMSData : HDHealthServiceCharacteristic <HDDatumRendering> {
    NSNumber *_instantaneousSpeed;
    NSNumber *_averageSpeed;
}

@property (readonly, nonatomic) NSDate *updateTime;

+ (id)uuid;
+ (id)_buildWithBinaryValue:(id)a0 error:(id *)a1;

- (id)description;
- (void).cxx_destruct;
- (id)generateDatums:(id)a0;
- (id)getBinaryValueWithError:(id *)a0;

@end
