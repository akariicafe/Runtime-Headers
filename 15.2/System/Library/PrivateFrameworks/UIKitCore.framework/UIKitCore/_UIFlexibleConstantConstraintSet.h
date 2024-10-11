@class NSLayoutConstraint;

@interface _UIFlexibleConstantConstraintSet : _UIConstantConstraintSet {
    NSLayoutConstraint *_minConstraint;
    NSLayoutConstraint *_maxConstraint;
    NSLayoutConstraint *_equalityConstraint;
    BOOL _equalityConstraintPrefersMin;
}

@property (nonatomic) double minConstant;
@property (nonatomic) double maxConstant;
@property (nonatomic) double equalityConstant;

+ (id)constraintSetWithCollapsableConstantPreferredEqualityConstraint:(id)a0 equalityPriority:(unsigned long long)a1;
+ (id)constraintSetWithRequiredEqualityConstraint:(id)a0;

- (id)_otherInequalityConstraint;
- (id)_initWithEqualityConstraint:(id)a0 equalityPriority:(unsigned long long)a1 prefersMin:(BOOL)a2;
- (void).cxx_destruct;
- (BOOL)_equalityConstraintIsRequired;
- (void)_updateInequalityConstants;
- (id)_preferredInequalityConstraint;

@end
