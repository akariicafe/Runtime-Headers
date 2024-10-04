@class NSUUID, NSArray, HKObjectAuthorizationPromptSessionMetadata;

@interface _HDObjectAuthorizationRequest : NSObject {
    id /* block */ _completion;
    NSUUID *_identifier;
    NSArray *_samples;
    HKObjectAuthorizationPromptSessionMetadata *_metadata;
    NSArray *_authorizationRecords;
    NSUUID *_sessionIdentifier;
}

- (void).cxx_destruct;

@end
