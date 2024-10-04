@class NSData, NFTag;

@interface PKNFCTag : NSObject {
    NFTag *_underlyingTag;
}

@property (nonatomic) unsigned long long technology;
@property (copy, nonatomic) NSData *tagIdentifier;
@property (copy, nonatomic) NSData *manufacturerIdentifier;
@property (copy, nonatomic) NSData *manufacturerParameter;
@property (copy, nonatomic) NSData *systemCode;
@property (copy, nonatomic) NSData *UID;

- (id)initWithNFTag:(id)a0;
- (void).cxx_destruct;

@end
