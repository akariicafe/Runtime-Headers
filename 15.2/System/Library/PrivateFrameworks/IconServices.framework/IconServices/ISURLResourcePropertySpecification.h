@class NSArray, NSSet;

@interface ISURLResourcePropertySpecification : NSObject

@property (readonly) NSArray *otherProperties;
@property (readonly) NSArray *iconInitWithURLProperties;
@property (readonly) NSSet *allowedMissingProperties;
@property (readonly) NSArray *generalProperties;
@property (readonly) NSArray *applicationProperties;
@property (readonly) NSArray *volumeProperties;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)iconInitWithURLProperties;

@end
