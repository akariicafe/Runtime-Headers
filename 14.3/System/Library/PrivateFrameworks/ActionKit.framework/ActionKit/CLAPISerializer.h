@interface CLAPISerializer : NSObject

+ (id)webItemTypeStringForType:(long long)a0;
+ (id)accountWithEmail:(id)a0 password:(id)a1 acceptTerms:(BOOL)a2;
+ (id)itemWithName:(id)a0;
+ (id)itemWithPrivate:(BOOL)a0;
+ (id)itemForRestore;
+ (id)bookmarkWithURL:(id)a0 name:(id)a1;
+ (id)bookmarkWithURL:(id)a0 name:(id)a1 private:(BOOL)a2;
+ (id)receiptWithBase64String:(id)a0;
+ (id)JSONDataFromDictionary:(id)a0;
+ (id)JSONDataFromArray:(id)a0;

@end
