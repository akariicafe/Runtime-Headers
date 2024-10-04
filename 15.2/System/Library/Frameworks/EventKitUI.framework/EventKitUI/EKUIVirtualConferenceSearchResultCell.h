@class EKVirtualConferenceRoomType, EKVirtualConference;

@interface EKUIVirtualConferenceSearchResultCell : EKUILocationSearchResultCell {
    EKVirtualConferenceRoomType *_currentRoomType;
    EKVirtualConference *_currentCustomVirtualConference;
}

+ (id)_boldTitleFont;

- (void).cxx_destruct;
- (void)updateWithRoomType:(id)a0;
- (void)updateWithCustomVirtualConference:(id)a0;

@end
