@protocol MTLDevice;

@interface MPSKeyedUnarchiver : NSKeyedUnarchiver <MPSDeviceProvider> {
    id<MTLDevice> _device;
}

+ (id)unarchiveObjectWithData:(id)a0 device:(id)a1;
+ (id)unarchiveObjectWithFile:(id)a0 device:(id)a1;
+ (id)unarchiveTopLevelObjectWithData:(id)a0 device:(id)a1 error:(id *)a2;
+ (id)unarchivedObjectOfClass:(Class)a0 fromData:(id)a1 device:(id)a2 error:(id *)a3;
+ (id)unarchivedObjectOfClasses:(id)a0 fromData:(id)a1 device:(id)a2 error:(id *)a3;

- (void)dealloc;
- (id)initWithDevice:(id)a0;
- (id)initForReadingFromData:(id)a0 device:(id)a1 error:(id *)a2;
- (id)initForReadingWithData:(id)a0 device:(id)a1;
- (id)mpsMTLDevice;

@end
