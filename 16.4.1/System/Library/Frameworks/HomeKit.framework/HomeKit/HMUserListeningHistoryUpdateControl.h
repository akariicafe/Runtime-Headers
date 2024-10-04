@class NSArray, NSMutableSet;

@interface HMUserListeningHistoryUpdateControl : NSObject <NSCopying, NSMutableCopying> {
    NSMutableSet *_internalAccessories;
}

@property (readonly, copy) NSArray *accessories;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccessories:(id)a0;

@end
