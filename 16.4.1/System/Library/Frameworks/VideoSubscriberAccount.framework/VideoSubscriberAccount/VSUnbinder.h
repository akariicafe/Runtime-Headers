@class NSMapTable;

@interface VSUnbinder : NSObject

@property (nonatomic, getter=isInvalid) BOOL invalid;
@property (retain, nonatomic) NSMapTable *bindingsByBinder;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)binder:(id)a0 didEstablishBinding:(id)a1;
- (void)binder:(id)a0 didTearDownBinding:(id)a1;

@end
