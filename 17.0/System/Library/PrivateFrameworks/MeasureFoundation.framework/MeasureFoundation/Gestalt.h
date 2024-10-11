@interface Gestalt : NSObject

@property (class, readonly, nonatomic) BOOL internalInstall;
@property (class, readonly, nonatomic) BOOL hasAppleNeuralEngine;

+ (BOOL)jasperAvailable;
+ (id)stringAnswerToQuestion:(struct __CFString { } *)a0;

@end
