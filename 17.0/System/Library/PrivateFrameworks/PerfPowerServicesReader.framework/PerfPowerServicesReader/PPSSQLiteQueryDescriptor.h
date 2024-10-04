@class NSArray, PPSSQLitePredicate, PPSSQLiteEntity;

@interface PPSSQLiteQueryDescriptor : NSObject <NSCopying>

@property (retain, nonatomic) PPSSQLiteEntity *entity;
@property (copy, nonatomic) PPSSQLitePredicate *predicate;
@property (copy, nonatomic) NSArray *groupByProperties;
@property (copy, nonatomic) NSArray *orderByProperties;
@property (copy, nonatomic) NSArray *orderByDirections;
@property (nonatomic) unsigned long long limitCount;
@property (nonatomic) unsigned long long offsetCount;
@property (nonatomic) BOOL returnsDistinctEntities;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEntity:(id)a0 predicate:(id)a1;
- (id)_sqlForSelectWithProperties:(id)a0;
- (id)initWithEntity:(id)a0 predicate:(id)a1 limitCount:(unsigned long long)a2 offsetCount:(unsigned long long)a3;

@end
