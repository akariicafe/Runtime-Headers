@class NSString;
@protocol PKNFCTagReaderSessionDelegate;

@interface PKNFCTagReaderSession : PKPaymentSession <NFReaderSessionDelegate>

@property (weak, nonatomic) id<PKNFCTagReaderSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endSession;
- (void)startPolling;
- (void)readerSession:(id)a0 didDetectTags:(id)a1;
- (void)readerSessionDidEndUnexpectedly:(id)a0 reason:(id)a1;
- (void)readNDEFMessageFromTag:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithInternalSession:(id)a0 targetQueue:(id)a1;
- (void)stopPolling;

@end
