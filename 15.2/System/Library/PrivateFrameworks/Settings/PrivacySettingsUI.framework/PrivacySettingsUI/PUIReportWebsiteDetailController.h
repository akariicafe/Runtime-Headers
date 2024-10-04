@class NSString, NSArray, PSSpecifier;

@interface PUIReportWebsiteDetailController : PSListController

@property (retain, nonatomic) NSString *context;
@property (retain, nonatomic) PSSpecifier *domainHeader;
@property (retain, nonatomic) NSArray *domainRows;
@property (retain, nonatomic) NSArray *domainRowsAwaitingDisplay;
@property (retain, nonatomic) PSSpecifier *appHeader;
@property (retain, nonatomic) NSArray *appRows;
@property (retain, nonatomic) NSArray *appRowsAwaitingDisplay;

- (id)specifiers;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (id)valueForSpecifier:(id)a0;
- (void)dataDidChange;
- (id)domainsSpecifiersFromResults:(id)a0;
- (void)reloadAsyncSpecifiers;
- (id)appSpecifiersFromResults:(id)a0;
- (id)timeStringForDate:(id)a0;
- (id)iconForContext:(id)a0;

@end
