@class NSString, DAMailAccount, MFMessageLibrary, NSObject;
@protocol OS_os_log;

@interface MFDADelivery : MFMailDelivery <EFLoggable> {
    DAMailAccount *_DAMailAccount;
    MFMessageLibrary *_library;
    NSString *_folderID;
    NSString *_accountID;
    NSString *_originalMessageID;
    NSString *_originalLongID;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setDAMailAccount:(id)a0;
- (id)newMessageWriter;
- (void)_updateBasedOnOriginalMessage:(id)a0;
- (id)deliverSynchronously;

@end
