@class NSString, NSArray;

@interface HKOverlayContextSection : NSObject <HKDisplayTypeContextItemSection>

@property (readonly, nonatomic) NSString *localizedSectionTitle;
@property (readonly, nonatomic) NSArray *overlayContextItems;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSectionTitle:(id)a0 overlayContextItems:(id)a1;

@end
