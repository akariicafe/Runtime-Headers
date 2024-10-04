@class NSString, EDFormula, EFTableData;
@protocol EFHelper;

@interface EFormula : NSObject {
    id<EFHelper> mHelper;
    void *mYylex;
    Class mFormulaClass;
    EDFormula *mFormula;
    EFTableData *mTableData;
    NSString *mErrMsg;
}

+ (id)singletonEFormula;
+ (id)stringToFormula:(id)a0 formulaHelper:(id)a1 formulaClass:(Class)a2;

- (id)tableData;
- (void)setTableData:(id)a0;
- (unsigned long long)resolveName:(const char *)a0;
- (void)dealloc;
- (unsigned long long)resolveFirstSheet:(id)a0 lastSheet:(id)a1;
- (void)setFormula:(id)a0;
- (void)setFormulaClass:(Class)a0;
- (void)setFormulaHelper:(id)a0;
- (id)stringToTokens:(id)a0;
- (id)formulaHelper;
- (Class)formulaClass;
- (unsigned long long)resolveSheet:(const char *)a0 isCurrentSheet:(BOOL *)a1;
- (id)resolveTable:(const char *)a0 sheetIndex:(unsigned long long *)a1;

@end
