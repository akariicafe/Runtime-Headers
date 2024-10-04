@class NSString, NSUUID;

@interface RPRSDDeviceInfo_Internal : NSObject {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ uuid;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) long long hash;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
