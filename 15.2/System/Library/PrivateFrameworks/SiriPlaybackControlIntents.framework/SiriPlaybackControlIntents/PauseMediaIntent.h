@class NSArray, NSNumber;

@interface PauseMediaIntent : INIntent

@property (nonatomic, copy) NSArray *devices;
@property (nonatomic, copy) NSArray *deviceContext;
@property (nonatomic, retain) NSNumber *isDirectInvocation;
@property (nonatomic) long long mediaType;
@property (nonatomic, copy) NSArray *deviceQueries;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
