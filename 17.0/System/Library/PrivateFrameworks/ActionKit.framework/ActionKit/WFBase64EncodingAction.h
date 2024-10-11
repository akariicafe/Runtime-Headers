@interface WFBase64EncodingAction : WFAction

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)inputContentClasses;
- (id)outputContentClasses;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)base64EncodedStringItemFromFile:(id)a0 lineBreakMode:(id)a1;
- (id)itemFromBase64EncodedString:(id)a0 nameIfKnown:(id)a1;

@end
