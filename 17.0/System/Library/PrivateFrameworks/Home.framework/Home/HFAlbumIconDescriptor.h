@class NSData, NSString;

@interface HFAlbumIconDescriptor : NSObject <HFIconDescriptor>

@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL shouldForceLTR;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImageData:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)iconDescriptorByMergingWithIconDescriptor:(id)a0;

@end
