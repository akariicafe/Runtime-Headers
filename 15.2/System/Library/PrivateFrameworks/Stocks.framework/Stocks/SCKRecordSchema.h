@class NSString, NSArray;

@interface SCKRecordSchema : NSObject

@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, copy, nonatomic) NSArray *fieldNames;
@property (readonly, copy, nonatomic) NSArray *fieldSchemas;

- (BOOL)isValidRecord:(id)a0;
- (id)schemaForFieldName:(id)a0;
- (id)initWithRecordType:(id)a0 fieldSchemas:(id)a1;
- (void).cxx_destruct;

@end
