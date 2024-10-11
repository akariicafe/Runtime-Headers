@class NSString;
@protocol CKConversationSearchCellDelegate;

@interface CKConversationListSearchCell : CKConversationListStandardCell <CKConversationSearchCellProtocol>

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (weak, nonatomic) id<CKConversationSearchCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)annotatedResultStringWithSearchText:(id)a0 resultText:(id)a1 primaryTextColor:(id)a2 primaryFont:(id)a3 annotatedTextColor:(id)a4 annotatedFont:(id)a5;

- (void)layoutSubviews;
- (id)fromLabel;
- (void)configureWithQueryResult:(id)a0 searchText:(id)a1;
- (double)leadingLayoutMargin;
- (void)prepareForReuse;

@end
