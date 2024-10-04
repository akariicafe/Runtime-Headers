@class NSString, HDFHIRExtensionElement;

@interface HDFHIRExtensionElementResult : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, copy, nonatomic) HDFHIRExtensionElement *extensionElement;
@property (readonly, nonatomic) BOOL isModifierExtension;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithExtensionElement:(id)a0 keyPath:(id)a1 isModifierExtension:(BOOL)a2;

@end
