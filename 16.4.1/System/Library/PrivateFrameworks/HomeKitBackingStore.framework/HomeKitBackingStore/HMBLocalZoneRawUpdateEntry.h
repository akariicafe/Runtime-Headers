@class NSData, HMBModel;

@interface HMBLocalZoneRawUpdateEntry : HMFObject

@property (retain, nonatomic) NSData *encoded;
@property (retain, nonatomic) HMBModel *model;

- (id)initWithModel:(id)a0 encoded:(id)a1;
- (void).cxx_destruct;

@end
