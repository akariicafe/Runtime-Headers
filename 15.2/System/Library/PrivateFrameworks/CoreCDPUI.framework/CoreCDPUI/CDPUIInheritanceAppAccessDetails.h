@class NSString, UIImage;

@interface CDPUIInheritanceAppAccessDetails : NSObject

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *appName;
@property (readonly, nonatomic) UIImage *appIcon;
@property (copy, nonatomic) NSString *accessString;

- (id)initWithBundleID:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 accessString:(id)a1;
- (void)_prepareIcon;

@end
