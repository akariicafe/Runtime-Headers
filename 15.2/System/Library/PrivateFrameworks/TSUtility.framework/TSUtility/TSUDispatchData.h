@class NSObject;
@protocol OS_dispatch_data;

@interface TSUDispatchData : NSObject {
    NSObject<OS_dispatch_data> *_data;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_data> *fragmentedData;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *defragmentedData;
@property (readonly, nonatomic) unsigned long long fragmentsCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *data;
@property (readonly, nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long maxFragmentsCount;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)append:(id)a0;

@end
