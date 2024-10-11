@interface USOEntityNode : USOGraphNode {
    void *_usoEntityNode;
}

- (void)addIdentifierWithValue:(id)a0 appBundleId:(id)a1 namespaceString:(id)a2 probability:(struct optional<double> { union { char x0; double x1; } x0; BOOL x1; })a3 nluComponent:(struct optional<siri::ontology::UsoIdentifier::NluComponent> { union { char x0; int x1; } x0; BOOL x1; })a4;
- (void)addUtteranceAlignmentWithAsrIndex:(unsigned int)a0 StartIndex:(unsigned int)a1 endIndex:(unsigned int)a2 startUnicodeScalarIndex:(unsigned int)a3 endUnicodeScalarIndex:(unsigned int)a4;
- (id)initWithCppEntityNode:(void *)a0;
- (void)addIdentifierWithValue:(id)a0 appBundleId:(id)a1 namespaceString:(id)a2;

@end
