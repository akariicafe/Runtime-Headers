@class NSString, NSNumber;

@interface STUIAskForTimeRequestResponse : NSObject <NSCopying>

@property (nonatomic) unsigned long long usageType;
@property (readonly, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *budgetedIdentifier;
@property (retain, nonatomic) NSNumber *requestingUserDSID;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestResponse:(id)a0;

@end
