@class NSUUID;

@interface SBRotationDodgingModifierEvent : SBDodgingModifierEvent

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long fromOrientation;
@property (readonly, nonatomic) long long toOrientation;
@property (readonly, nonatomic) unsigned long long phase;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 fromOrientation:(long long)a1 toOrientation:(long long)a2 phase:(unsigned long long)a3;

@end
