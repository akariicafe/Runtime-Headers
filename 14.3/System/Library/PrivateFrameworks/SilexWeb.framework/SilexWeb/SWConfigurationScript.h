@class NSString, WKUserScript;

@interface SWConfigurationScript : NSObject <SWScript>

@property (readonly, copy, nonatomic) NSString *configuration;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) WKUserScript *userScript;
@property (readonly, nonatomic) NSString *executableScript;
@property (readonly, nonatomic) BOOL queueable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;

@end
