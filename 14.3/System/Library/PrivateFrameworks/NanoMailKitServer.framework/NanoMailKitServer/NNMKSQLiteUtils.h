@interface NNMKSQLiteUtils : NSObject

+ (void)bindUnsignedInteger:(unsigned long long)a0 intoStatement:(struct sqlite3_stmt { } *)a1 paramIndex:(int)a2;
+ (void)bindBool:(BOOL)a0 intoStatement:(struct sqlite3_stmt { } *)a1 paramIndex:(int)a2;
+ (void)bindDouble:(double)a0 intoStatement:(struct sqlite3_stmt { } *)a1 paramIndex:(int)a2;
+ (void)bindDate:(id)a0 intoStatement:(struct sqlite3_stmt { } *)a1 paramIndex:(int)a2;
+ (void)bindString:(id)a0 intoStatement:(struct sqlite3_stmt { } *)a1 paramIndex:(int)a2;
+ (BOOL)isResponseOkFromPreparedStatementExecution:(int)a0;
+ (void)closeExecutedPreparedStatement:(struct sqlite3_stmt { } *)a0;
+ (id)dateFromStatement:(struct sqlite3_stmt { } *)a0 columnIndex:(int)a1;
+ (unsigned long long)unsignedIntegerFromStatement:(struct sqlite3_stmt { } *)a0 columnIndex:(int)a1;
+ (id)stringFromStatement:(struct sqlite3_stmt { } *)a0 columnIndex:(int)a1;
+ (void)bindInteger:(long long)a0 intoStatement:(struct sqlite3_stmt { } *)a1 paramIndex:(int)a2;
+ (unsigned long long)integerFromStatement:(struct sqlite3_stmt { } *)a0 columnIndex:(int)a1;
+ (BOOL)boolFromStatement:(struct sqlite3_stmt { } *)a0 columnIndex:(int)a1;
+ (double)doubleFromStatement:(struct sqlite3_stmt { } *)a0 columnIndex:(int)a1;
+ (void)bindData:(id)a0 intoStatement:(struct sqlite3_stmt { } *)a1 paramIndex:(int)a2;
+ (id)dataFromStatement:(struct sqlite3_stmt { } *)a0 columnIndex:(int)a1;

@end
