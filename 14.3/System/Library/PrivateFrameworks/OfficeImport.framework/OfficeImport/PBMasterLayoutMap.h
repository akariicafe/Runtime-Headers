@class NSMutableDictionary;

@interface PBMasterLayoutMap : NSObject {
    NSMutableDictionary *mMasterIdToMasterInfoMap;
    NSMutableDictionary *mTitleIdToMasterIdMap;
}

+ (id)masterLayoutMap;

- (id)init;
- (void).cxx_destruct;
- (id)slideLayoutForSlideHolder:(id)a0;
- (id)masterInfoForMasterId:(int)a0;
- (int)masterIdForTitleId:(int)a0;
- (id)masterInfoForSlideHolder:(id)a0;
- (void)setMasterInfo:(id)a0 forMasterId:(int)a1;
- (id)allMasterIds;
- (void)setMasterId:(int)a0 forTitleId:(int)a1;

@end
