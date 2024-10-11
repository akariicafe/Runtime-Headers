@class NSString;

@interface OS_axr_data : OS_object <OS_axr_data>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)copy;
- (void)dealloc;

@end
