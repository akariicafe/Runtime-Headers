@class NSData;

@interface HMBLocalSQLContextRowBlock : HMFObject

@property (readonly, nonatomic) unsigned long long blockRow;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSData *optionsData;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithBlockRow:(unsigned long long)a0 type:(unsigned long long)a1 options:(id)a2;

@end
