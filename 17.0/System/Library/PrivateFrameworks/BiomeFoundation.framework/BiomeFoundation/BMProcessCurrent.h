@class NSNumber;

@interface BMProcessCurrent : BMProcess {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _reliesOnLegacyDirectAccessLock;
    NSNumber *_reliesOnLegacyDirectAccess;
}

@property (readonly, nonatomic) BOOL isManaged;
@property (readonly, nonatomic) BOOL isRunningInUserContext;

- (BOOL)reliesOnDirectAccessForDomain:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)_initWithAuditToken:(struct { unsigned int x0[8]; })a0;

@end
