@class NSString, NSUUID, NSData, NSDate, NSOrderedSet;

@interface DRSRequestMO : NSManagedObject

@property (copy, nonatomic) NSString *build;
@property (copy, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *contextDictionaryData;
@property (nonatomic) short decisionServerDecision;
@property (copy, nonatomic) NSString *errorDescription;
@property (nonatomic) BOOL hasBeenCountedByTelemetry;
@property (nonatomic) BOOL isExpedited;
@property (copy, nonatomic) NSString *issueCategory;
@property (copy, nonatomic) NSString *issueDescription;
@property (copy, nonatomic) NSDate *requestDate;
@property (copy, nonatomic) NSUUID *requestID;
@property (nonatomic) long long requestMCT;
@property (nonatomic) long long requestState;
@property (copy, nonatomic) NSString *teamID;
@property (nonatomic) short uploadAttemptCount;
@property (retain, nonatomic) NSOrderedSet *logs;

+ (id)fetchRequest;

@end
