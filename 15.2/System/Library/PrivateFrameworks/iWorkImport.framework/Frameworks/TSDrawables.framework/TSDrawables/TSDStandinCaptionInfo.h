@interface TSDStandinCaptionInfo : TSPObject

+ (BOOL)needsObjectUUID;

- (id)copyWithContext:(id)a0;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromMessage:(const void *)a0 unarchiver:(id)a1;

@end
