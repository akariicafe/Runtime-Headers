@class NSPredicate, VSOptional, NSArray;

@interface VSKeychainFetchRequest : NSObject <NSCopying>

@property (retain, nonatomic) VSOptional *itemKind;
@property (copy, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic) BOOL includesDataValues;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
