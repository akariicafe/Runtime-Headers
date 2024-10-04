@class NSString, GEOMapServiceTraits;
@protocol GEOMapServiceSearchCapabilitiesTicket;

@interface _MKSearchFieldOfflinePlaceholderTicket : NSObject <MKMapServiceSearchFieldOfflinePlaceholderTicket> {
    id<GEOMapServiceSearchCapabilitiesTicket> _ticket;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
