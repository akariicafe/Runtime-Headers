@class NSString, WFContentItem, NSObject;
@protocol OS_dispatch_group;

@interface WFContentAlertButton : WFSelectableAlertButton

@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) WFContentItem *contentItem;
@property (readonly, nonatomic) BOOL hasContentSubtitle;
@property (nonatomic) BOOL hideSubtitle;

+ (void)processContentAlertButtonSubtitles:(id)a0;
+ (id)buttonWithContentItem:(id)a0 selected:(BOOL)a1 stickySelection:(BOOL)a2 handler:(id /* block */)a3;

- (void)start;
- (void).cxx_destruct;
- (void)getSubtitle:(id /* block */)a0;
- (BOOL)addSubtitleCompletionHandler:(id /* block */)a0;

@end
