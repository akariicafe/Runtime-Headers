@class NSSet, MSOID;

@interface MSCMSSMIMECapabilitiesAttribute : NSObject <MSCMSAttributeCoder>

@property (readonly) NSSet *capabilities;
@property (readonly, retain) MSOID *attributeType;

- (id)initWithCapabilities:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAttribute:(id)a0 error:(id *)a1;
- (id)copyAttributeData:(id *)a0;
- (id)encodeAttributeWithError:(id *)a0;

@end
