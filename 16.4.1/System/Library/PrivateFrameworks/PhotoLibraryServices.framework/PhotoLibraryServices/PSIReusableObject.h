@interface PSIReusableObject : NSObject {
    BOOL _isPreparedForReuse;
    BOOL _isPreparingFromStatement;
}

@property (readonly, nonatomic) BOOL isPreparedFromStatement;

- (void)prepareForReuse;
- (id)init;
- (void)didPrepareFromStatement:(struct sqlite3_stmt { } *)a0;
- (void)prepareFromStatement:(struct sqlite3_stmt { } *)a0;

@end
