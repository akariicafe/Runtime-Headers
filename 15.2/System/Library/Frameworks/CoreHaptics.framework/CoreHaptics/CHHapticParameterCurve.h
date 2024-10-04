@class NSString, NSArray;

@interface CHHapticParameterCurve : NSObject {
    NSArray *_controlPoints;
}

@property (readonly) NSString *parameterID;
@property double relativeTime;
@property (readonly) NSArray *controlPoints;

- (void).cxx_destruct;
- (id)init;
- (id)initWithParameterID:(id)a0 controlPoints:(id)a1 relativeTime:(double)a2;

@end
