@interface _PASEntitlement : NSObject

+ (BOOL)taskWithAuditToken:(struct { unsigned int x0[8]; })a0 hasTrueBooleanEntitlement:(id)a1 logHandle:(id)a2;
+ (BOOL)_trueBooleanEntitlementCheckWithSecTask:(struct __SecTask { } *)a0 entitlement:(id)a1 logHandle:(id)a2;
+ (BOOL)hasTrueBooleanEntitlement:(id)a0 logHandle:(id)a1;

@end
