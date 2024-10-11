@class NSArray;

@interface MTLFunctionReflection : NSObject

@property (readonly) NSArray *arguments;
@property (readonly) unsigned long long primitiveKind;
@property (readonly) NSArray *tags;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

@end
