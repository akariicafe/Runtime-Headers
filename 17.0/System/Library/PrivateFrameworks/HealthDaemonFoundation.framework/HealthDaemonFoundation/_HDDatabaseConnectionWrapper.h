@class NSObject;
@protocol OS_dispatch_group;

@interface _HDDatabaseConnectionWrapper : NSObject {
    id _connection;
    NSObject<OS_dispatch_group> *_flushGroup;
    unsigned long long _generation;
    unsigned long long _threadID;
    unsigned long long _options;
}

- (void).cxx_destruct;

@end
