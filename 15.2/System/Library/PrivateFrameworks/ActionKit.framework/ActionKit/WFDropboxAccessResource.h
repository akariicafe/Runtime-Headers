@class NSArray;

@interface WFDropboxAccessResource : WFAccountAccessResource

@property (readonly, copy, nonatomic) NSArray *accounts;

- (Class)accountClass;
- (id)initWithDefinition:(id)a0;
- (void)makeAvailableWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)associatedAppIdentifier;

@end
