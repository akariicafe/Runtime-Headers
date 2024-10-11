@class TSKAnnotationAuthor, NSDate;

@interface TSWPChangeSession : TSPObject {
    unsigned int _sessionUID;
    TSKAnnotationAuthor *_author;
    NSDate *_date;
}

@property (nonatomic) unsigned int sessionUID;
@property (retain, nonatomic) TSKAnnotationAuthor *author;
@property (retain, nonatomic) NSDate *date;

+ (BOOL)needsObjectUUID;

- (BOOL)isEqualToSession:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;

@end
