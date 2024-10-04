@interface FKUtility : NSObject

+ (id)_nameFormatter;
+ (BOOL)isRomanString:(id)a0;
+ (BOOL)shouldAllowAddingFriendWithRecordID:(int)a0 withFriendListManager:(id)a1 addressBook:(void *)a2 personValueCache:(id)a3;
+ (BOOL)personHasLinkages:(void *)a0;
+ (id)initialsForPerson:(void *)a0;
+ (id)initialForString:(id)a0;
+ (id)compressPhoneNumberString:(id)a0;
+ (id)hashFromData:(id)a0;

@end
