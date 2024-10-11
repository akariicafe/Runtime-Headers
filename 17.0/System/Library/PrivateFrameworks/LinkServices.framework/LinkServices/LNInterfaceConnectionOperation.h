@protocol LNConnectionHostInterface;

@interface LNInterfaceConnectionOperation : LNConnectionOperation

@property (readonly, nonatomic) id<LNConnectionHostInterface> connectionInterface;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 connectionInterface:(id)a1 priority:(long long)a2 queue:(id)a3 activity:(id /* block */)a4;

@end
