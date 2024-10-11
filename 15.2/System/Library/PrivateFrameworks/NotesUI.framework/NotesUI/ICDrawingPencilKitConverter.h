@class NSMapTable, NSArray, NSOperationQueue, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ICDrawingPencilKitConverter : NSObject

@property (retain, nonatomic) NSOperationQueue *converterQueue;
@property (retain, nonatomic) NSMapTable *lastOperationForAttachmentID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *convertDispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *canAutoUpdateDispatchQueue;
@property (retain, nonatomic) NSMutableArray *mutableFailedSketches;
@property (nonatomic) BOOL isThrowaway;
@property (readonly, nonatomic) NSArray *failedSketches;

+ (id)sharedConverter;
+ (BOOL)canUpdateFullscreenSketchAttachment:(id)a0;
+ (BOOL)canUpdateInlineDrawingAttachment:(id)a0;
+ (id)newThrowawayConverter;
+ (unsigned long long)countOfUpdatableDrawingsInNote:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)convertAllSketchesWithProgress:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)convertAllSketchesInNote:(id)a0;
- (id)convertSketchAttachment:(id)a0 toInlineDrawingAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inNote:(id)a2;
- (id)convertSketch:(id)a0;
- (BOOL)compareDrawingAttachment:(id)a0 withConvertedDrawing:(id)a1;
- (void)convertDrawingsInNote:(id)a0 waitUntilFinished:(BOOL)a1;
- (BOOL)shouldConvertAllDrawingsIfNeeded;
- (BOOL)shouldAutoConvertNote:(id)a0;
- (id)addOperationForAttachment:(id)a0 automatic:(BOOL)a1;
- (void)canAutoUpdateDrawingsInAccount:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)countOfDrawingsNeedingConversionInNote:(id)a0;
- (void)convertAllSketchesWithProgress:(id)a0;
- (id)updateInlineDrawingAttachment:(id)a0;
- (void)convertDrawingsInNote:(id)a0 inWindow:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)convertAllDrawingsIfNeeded;
- (void)convertDrawingsInNoteIfNeeded:(id)a0;
- (void)operationComplete:(id)a0;

@end
