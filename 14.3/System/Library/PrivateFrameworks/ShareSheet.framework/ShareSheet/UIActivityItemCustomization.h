@class NSString;

@interface UIActivityItemCustomization : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL enabled;

+ (id)switchCustomizationWithTitle:(id)a0 identifier:(id)a1 value:(BOOL)a2 valueChangedHandler:(id /* block */)a3;
+ (id)pickerCustomizationWithTitle:(id)a0 identifier:(id)a1 options:(id)a2 selectedOptionIndex:(long long)a3 valueChangedHandler:(id /* block */)a4;
+ (id)actionCustomizationWithTitle:(id)a0 identifier:(id)a1 handler:(id /* block */)a2;

- (id)_initWithTitle:(id)a0 identifier:(id)a1;
- (void).cxx_destruct;

@end
