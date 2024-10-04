@class SUUIHeaderViewElement, NSArray, NSMutableArray;

@interface SUUITracklistViewElement : SUUIViewElement {
    NSMutableArray *_sections;
    NSMutableArray *_tracks;
}

@property (readonly, nonatomic) SUUIHeaderViewElement *header;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSArray *tracks;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (void)enumerateTracksUsingBlock:(id /* block */)a0;
- (long long)pageComponentType;

@end
