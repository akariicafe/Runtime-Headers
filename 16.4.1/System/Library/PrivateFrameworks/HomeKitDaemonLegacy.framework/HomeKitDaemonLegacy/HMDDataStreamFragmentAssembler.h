@class NSString, NSMutableData, NSNumber, HMDDataStreamFragment;

@interface HMDDataStreamFragmentAssembler : HMFObject

@property (readonly, copy) NSString *type;
@property (readonly, copy) NSMutableData *data;
@property (copy) NSNumber *currentChunkSequenceNumber;
@property (copy) HMDDataStreamFragment *assembledFragment;
@property (readonly, copy) NSNumber *sequenceNumber;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)addFragmentChunk:(id)a0 error:(id *)a1;
- (id)initWithSequenceNumber:(id)a0 type:(id)a1;

@end
