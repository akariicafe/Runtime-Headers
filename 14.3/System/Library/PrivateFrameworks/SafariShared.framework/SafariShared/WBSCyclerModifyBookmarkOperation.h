@class NSString;

@interface WBSCyclerModifyBookmarkOperation : NSObject <WBSCyclerBookmarkOperation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)_changeTitleOfBookmark:(id)a0 withContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)_changeURLOfBookmark:(id)a0 withContext:(id)a1 completionHandler:(id /* block */)a2;

@end
