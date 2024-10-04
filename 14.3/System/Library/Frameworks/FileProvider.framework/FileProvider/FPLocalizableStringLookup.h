@class NSString, NSBundle;

@interface FPLocalizableStringLookup : NSObject

@property (retain, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) id cfBundle;
@property (copy, nonatomic) NSString *tableName;

- (id)localizedStringForKey:(id)a0;
- (void).cxx_destruct;

@end
