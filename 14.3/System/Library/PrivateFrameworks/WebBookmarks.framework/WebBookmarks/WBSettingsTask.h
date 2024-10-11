@class WBWebsiteDataRecord;

@interface WBSettingsTask : NSObject

@property (readonly, nonatomic) long long taskType;
@property (readonly, nonatomic) WBWebsiteDataRecord *websiteDataRecord;

+ (id)taskForDeletingIndividualWebsiteDataWithRecord:(id)a0;
+ (id)taskWithType:(long long)a0;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 websiteDataRecord:(id)a1;

@end
