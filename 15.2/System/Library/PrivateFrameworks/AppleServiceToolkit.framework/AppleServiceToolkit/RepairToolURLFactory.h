@class NSString, NSArray;

@interface RepairToolURLFactory : NSObject <NSURLRequestFactory>

@property (retain, nonatomic) NSString *encryptionKey;
@property (retain, nonatomic) NSArray *requestItems;
@property (nonatomic) int currentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithRequestItems:(id)a0;

@end
