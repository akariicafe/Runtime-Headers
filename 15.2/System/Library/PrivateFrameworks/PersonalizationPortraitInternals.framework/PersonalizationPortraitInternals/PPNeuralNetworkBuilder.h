@class NSMutableData, NSMutableArray;

@interface PPNeuralNetworkBuilder : NSObject {
    unsigned long long _prevSize;
    unsigned long long _nlayers;
    NSMutableData *_descriptors;
    NSMutableArray *_weightsAndBiases;
    BOOL _haveOutputLayer;
    BOOL _done;
}

- (id)serialize;
- (void).cxx_destruct;
- (id)init;
- (id)initWithInputSize:(unsigned long long)a0;
- (void)addHiddenLayer:(unsigned long long)a0 weights:(const float *)a1 bias:(const float *)a2 activation:(unsigned char)a3 skip:(BOOL)a4;
- (void)addOutputLayer:(unsigned long long)a0 weights:(const float *)a1 bias:(const float *)a2 activation:(unsigned char)a3 softmax:(BOOL)a4;

@end
