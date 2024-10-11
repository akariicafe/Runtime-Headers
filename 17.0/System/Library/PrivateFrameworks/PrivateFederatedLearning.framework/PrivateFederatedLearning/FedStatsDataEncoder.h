@class NSDictionary, NSArray;

@interface FedStatsDataEncoder : NSObject

@property (retain, nonatomic) NSDictionary *dataTypes;
@property (retain, nonatomic) NSArray *typeConfiguration;

+ (BOOL)encodeDataAndRecord:(id)a0 dataTypeContent:(id)a1 baseKey:(id)a2 errorOut:(id *)a3;
+ (BOOL)encodeDataArrayAndRecord:(id)a0 dataTypeContent:(id)a1 baseKey:(id)a2 errorOut:(id *)a3;
+ (id)createWithDataTypeContent:(id)a0 possibleError:(id *)a1;
+ (BOOL)encodeDataAndRecord:(id)a0 dataTypeContent:(id)a1 metadata:(id)a2 baseKey:(id)a3 errorOut:(id *)a4;
+ (id)encodeDataArray:(id)a0 dataTypeContent:(id)a1 resultType:(unsigned long long *)a2 errorOut:(id *)a3;
+ (BOOL)encodeDataArrayAndRecord:(id)a0 dataTypeContent:(id)a1 metadata:(id)a2 baseKey:(id)a3 errorOut:(id *)a4;
+ (BOOL)record:(id)a0 metadata:(id)a1 baseKey:(id)a2;

- (void).cxx_destruct;
- (id)decodeFromBitVector:(id)a0 possibleError:(id *)a1;
- (id)decodeFromBitVector:(id)a0 withType:(id)a1 possibleError:(id *)a2;
- (id)encodeToBitVector:(id)a0 possibleError:(id *)a1;
- (id)encodeToBitVector:(id)a0 withType:(id)a1 possibleError:(id *)a2;
- (id)encodeToIndex:(id)a0 error:(id *)a1;
- (id)encodeToIndex:(id)a0 withType:(id)a1 error:(id *)a2;
- (id)initWithDataTypes:(id)a0 combinationTypes:(id)a1;

@end
