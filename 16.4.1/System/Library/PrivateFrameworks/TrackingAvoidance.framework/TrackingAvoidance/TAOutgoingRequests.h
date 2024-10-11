@class NSString, NSDictionary, NSDate;

@interface TAOutgoingRequests : NSObject

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSDictionary *additionalInformation;
@property (readonly, copy, nonatomic) NSDate *date;

- (id)descriptionDictionary;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRequestKey:(id)a0 additionalInformation:(id)a1 date:(id)a2;

@end
