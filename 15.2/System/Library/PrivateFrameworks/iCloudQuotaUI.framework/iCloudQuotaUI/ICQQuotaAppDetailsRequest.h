@class NSArray;

@interface ICQQuotaAppDetailsRequest : ICQUsageQuotaRequest {
    NSArray *_bundleIds;
}

@property (retain, nonatomic) NSArray *bundleIDs;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithAccount:(id)a0 accountStore:(id)a1 bundleIDs:(id)a2 quotaInfo:(id)a3;

@end
