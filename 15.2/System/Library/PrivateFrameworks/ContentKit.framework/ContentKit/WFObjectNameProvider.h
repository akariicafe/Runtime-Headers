@class NSDictionary;

@interface WFObjectNameProvider : NSObject

@property (readonly, copy, nonatomic) NSDictionary *contents;

+ (id)sharedProvider;

- (void).cxx_destruct;
- (id)init;
- (id)nameForObject:(id)a0;

@end
