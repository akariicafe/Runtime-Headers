@class NSString;

@interface WFDateFormatVariableAggrandizement : WFVariableAggrandizement

@property (readonly, nonatomic) NSString *dateStyle;
@property (readonly, nonatomic) NSString *timeStyle;
@property (readonly, nonatomic) NSString *relativeDateStyle;
@property (readonly, nonatomic) NSString *customDateFormat;
@property (readonly, nonatomic) BOOL includesTimeForISO8601;

+ (id)defaultAggrandizement;

- (id)processedContentClasses:(id)a0;
- (void)applyToContentCollection:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithDateStyle:(id)a0 timeStyle:(id)a1 relativeDateStyle:(id)a2;
- (id)initWithDateStyle:(id)a0 timeStyle:(id)a1 relativeDateStyle:(id)a2 customDateFormat:(id)a3 includesTimeForISO8601:(BOOL)a4;
- (id)initWithRelativeDateStyle:(id)a0 timeStyle:(id)a1;
- (id)initWithRelativeTimeStyle;
- (id)initWithISO8601DateStyleAndTime:(BOOL)a0;
- (id)initWithRFC2822DateStyle;
- (id)initWithCustomDateFormat:(id)a0;

@end
