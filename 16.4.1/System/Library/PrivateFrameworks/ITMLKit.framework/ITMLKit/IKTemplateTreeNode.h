@class NSString, IKViewElementStyle, NSDictionary, IKViewElementStyleComposer;

@interface IKTemplateTreeNode : NSObject <NSCopying>

@property (readonly, weak, nonatomic) IKTemplateTreeNode *parentNode;
@property (readonly, copy, nonatomic) NSString *nodeName;
@property (readonly, copy, nonatomic) IKViewElementStyle *styleOverrides;
@property (copy, nonatomic) NSDictionary *childNodes;
@property (retain, nonatomic) IKViewElementStyleComposer *styleComposer;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithNodeName:(id)a0 styleOverrides:(id)a1 parentNode:(id)a2;

@end
