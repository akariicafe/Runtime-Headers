@interface _TtC19AppStoreKitInternalP33_7BE152A6E9112DDB85E95517955C27A519NqmlStringGenerator : NSObject <ASKNQMLParser> {
    void /* unknown type, empty encoding */ parser;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ orderedListTracker;
    void /* unknown type, empty encoding */ accumulator;
    void /* unknown type, empty encoding */ attributeStack;
    void /* unknown type, empty encoding */ didParseEverything;
    void /* unknown type, empty encoding */ foregroundColor;
}

- (void)parserDidEndDocument:(id)a0;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)parserDidStartDocument:(id)a0;
- (void)parser:(id)a0 didEndElement:(unsigned long long)a1;
- (void)parser:(id)a0 didEndListOfStyle:(unsigned long long)a1;
- (void)parser:(id)a0 didFindCharacters:(id)a1;
- (void)parser:(id)a0 didStartElement:(unsigned long long)a1 attributes:(id)a2;
- (void)parser:(id)a0 didStartListOfStyle:(unsigned long long)a1;
- (void)parserDidEndListElement:(id)a0;
- (void)parserDidFindNewline:(id)a0;
- (void)parserDidStartListElement:(id)a0;

@end
