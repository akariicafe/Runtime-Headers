@class NSString;

@interface SUScriptMenuItem : SUScriptObject {
    BOOL _enabled;
    NSString *_title;
    id _userInfo;
}

@property BOOL enabled;
@property (retain) NSString *title;
@property (retain) id userInfo;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dealloc;
- (id)init;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)_sendDidChange;

@end
