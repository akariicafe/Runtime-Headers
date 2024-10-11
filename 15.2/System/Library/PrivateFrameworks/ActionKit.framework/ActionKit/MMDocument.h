@class NSString, NSMutableArray;

@interface MMDocument : NSObject

@property (copy, nonatomic) NSMutableArray *elements;
@property (readonly, copy, nonatomic) NSString *markdown;

+ (id)documentWithMarkdown:(id)a0;

- (void)addElement:(id)a0;
- (void).cxx_destruct;
- (id)initWithMarkdown:(id)a0;

@end
