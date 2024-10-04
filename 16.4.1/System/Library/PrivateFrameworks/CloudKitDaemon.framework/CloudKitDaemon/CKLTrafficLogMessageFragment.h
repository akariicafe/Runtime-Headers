@class NSString;

@interface CKLTrafficLogMessageFragment : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) long long seqNum;
@property (readonly, nonatomic) NSString *dataString;

- (id)initWithMessage:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
