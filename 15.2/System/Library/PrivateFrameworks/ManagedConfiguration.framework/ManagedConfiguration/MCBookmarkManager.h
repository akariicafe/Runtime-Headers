@class NSArray, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MCBookmarkManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSArray *memberQueueCurrentUserBookmarks;
@property (retain, nonatomic) NSDictionary *memberQueueStashedBookmarksByLabel;
@property (nonatomic) int notificationToken;
@property (copy, nonatomic) NSArray *userBookmarks;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)memberQueueRereadBookmarks;
- (void)memberQueueSetUserBookmarks:(id)a0;
- (void)unstashUserBookmarksFromLabel:(id)a0;
- (void)memberQueueSetStashedUserBookmarksByLabel:(id)a0;
- (void)memberQueueStashUserBookmarksWithLabel:(id)a0 newUserBookmarks:(id)a1;
- (void)stashUserBookmarksWithLabel:(id)a0 newUserBookmarks:(id)a1;

@end
