@class NSArray, NSString, REHTTPServer, REHTTPFileCache, REHTMLPageBuilder;
@protocol REHTTPDebugServerDataSource;

@interface REHTTPDebugServer : NSObject <REHTTPServerDelegate> {
    REHTTPServer *_server;
    REHTMLPageBuilder *_pageBuilder;
    REHTTPFileCache *_cache;
    struct { unsigned char implementsProvideAvailableEngines : 1; unsigned char implementsHandleFileRequest : 1; } _dataSourceCallbacks;
}

@property (retain) NSArray *availableEngines;
@property (retain) NSString *processName;
@property (readonly, nonatomic) unsigned short port;
@property (readonly, weak, nonatomic) id<REHTTPDebugServerDataSource> dataSource;

- (void).cxx_destruct;
- (id)_pageMap;
- (id)_landingPage;
- (id)_pageTitle;
- (id)_createContentItemWithTitle:(id)a0 content:(id)a1;
- (void)_loadAvailableEngines:(id)a0;
- (id)_create404Element;
- (SEL)_serverMethod:(id)a0;
- (BOOL)_isReservedFilePath:(id)a0;
- (void)_loadPageForReservedPath:(id)a0 completion:(id /* block */)a1;
- (void)_handleFileRequest:(id)a0 completion:(id /* block */)a1;
- (id)_aboutPage;
- (id)_enginesPage;
- (void)_loadEngineListWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)_engineList;
- (id)_landPageFileName;
- (id)_radarLinkWithTitle:(id)a0;
- (void)_availableEngineInstancesForProcess:(id)a0 completion:(id /* block */)a1;
- (void)httpServer:(id)a0 handleRequest:(id)a1 completion:(id /* block */)a2;
- (id)initWithPort:(unsigned short)a0 dataSource:(id)a1;

@end
