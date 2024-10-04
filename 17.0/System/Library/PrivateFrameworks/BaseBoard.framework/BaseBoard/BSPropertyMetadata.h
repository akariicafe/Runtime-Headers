@class NSString;

@interface BSPropertyMetadata : NSObject {
    char _type;
    NSString *_typeString;
    Class _classType;
    NSString *_getterName;
    NSString *_setterName;
    NSString *_name;
    NSString *_defaultKey;
    id _defaultValue;
    unsigned long long _options;
}

- (id)description;
- (void).cxx_destruct;

@end
