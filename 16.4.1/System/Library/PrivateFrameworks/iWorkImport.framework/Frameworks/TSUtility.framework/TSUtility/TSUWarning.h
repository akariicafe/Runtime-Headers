@class NSString, NSDictionary;

@interface TSUWarning : NSObject

@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) long long severity;
@property (readonly, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *detailMessage;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (id)warningWithMessage:(id)a0;
+ (id)warningWithKind:(long long)a0 message:(id)a1;
+ (id)fontWarningWithMessage:(id)a0 fontNames:(id)a1;
+ (id)warningWithMessage:(id)a0 affectedObject:(id)a1;
+ (id)warningWithMessage:(id)a0 affectedObjects:(id)a1;
+ (id)mediaUploadWarningWithMessage:(id)a0 data:(id)a1 isFromUploader:(BOOL)a2;
+ (id)missingMediaWarningWithMessage:(id)a0 data:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)affectedObjects;
- (BOOL)isFontWarning;
- (void)setAffectedObjects:(id)a0;
- (void)addAffectedObjects:(id)a0;
- (id)initWithKind:(long long)a0 message:(id)a1;
- (BOOL)isUploaderWarning;

@end
