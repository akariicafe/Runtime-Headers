@class NSNumber, NSSet;

@interface PLAccountingQualificationEventEntry : PLAccountingEventEntry

@property (readonly, nonatomic) NSNumber *qualificationID;
@property (readonly, nonatomic) NSSet *childNodeIDs;
@property (readonly, nonatomic) NSSet *childNodeNames;

+ (void)load;

- (void).cxx_destruct;
- (id)subEntryKey;
- (int)instanceDirectionality;
- (BOOL)isEqualContentsWithEvent:(id)a0;
- (BOOL)isEmptyEvent;
- (id)initWithQualificationID:(id)a0 withChildNodeIDs:(id)a1 withRange:(id)a2;
- (id)initWithQualificationID:(id)a0 withChildNodeNames:(id)a1 withRange:(id)a2;

@end
