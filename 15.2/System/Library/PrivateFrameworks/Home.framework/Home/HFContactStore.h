@class CNContactStore;

@interface HFContactStore : NSObject

@property (class, readonly, nonatomic) HFContactStore *defaultStore;

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) CNContactStore *backingStore;

- (void).cxx_destruct;
- (id)init;
- (id)contactForEmailAddress:(id)a0 withKeys:(id)a1;
- (id)contactForPhoneNumber:(id)a0 withKeys:(id)a1;
- (id)_meContactWithEmailAddress:(id)a0 keys:(id)a1;
- (id)_fallbackContactWithEmailAddress:(id)a0 phoneNumber:(id)a1;
- (id)contactForUserHandle:(id)a0 withKeys:(id)a1;

@end
