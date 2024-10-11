@class NSNumber;

@interface WFNumberWrapper : NSObject

@property (readonly, nonatomic) NSNumber *number;

+ (id)wrapperWithNumber:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
