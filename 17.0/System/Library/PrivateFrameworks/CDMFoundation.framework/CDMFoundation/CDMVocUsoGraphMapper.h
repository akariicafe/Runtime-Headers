@interface CDMVocUsoGraphMapper : NSObject

+ (id)settingVocLabel;
+ (id)buildAppNameUSOGraphWithIdentifier:(id)a0 withSemantic:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4 withTokenCount:(unsigned int)a5;
+ (id)buildAttachmentTypeUSOGraph:(id)a0 withSemantic:(id)a1 withStartCharIndex:(unsigned int)a2 withEndCharIndex:(unsigned int)a3;
+ (id)buildContactTypeUSOGraphWithIdentifier:(id)a0 withSemantic:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4 withTokenCount:(unsigned int)a5;
+ (id)buildDecimalRegexUSOGraphWithIdentifier:(id)a0 withInput:(id)a1 withStartCharIndex:(unsigned int)a2 withEndCharIndex:(unsigned int)a3;
+ (id)buildDeviceCategoryUSOGraphWithIdentifier:(id)a0 withSemantic:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4 withTokenCount:(unsigned int)a5;
+ (id)buildEmailAddressRegexUSOGraphWithIdentifier:(id)a0 withInput:(id)a1 withStartCharIndex:(unsigned int)a2 withEndCharIndex:(unsigned int)a3;
+ (id)buildEmailContactUSOGraphWithIdentifier:(id)a0 withSemantic:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4 withTokenCount:(unsigned int)a5;
+ (id)buildEmergencyPhoneNumberUSOGraphWithIdentifier:(id)a0 withSemantic:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4 withTokenCount:(unsigned int)a5;
+ (id)buildEmergencyPhonePersonUSOGraphWithIdentifier:(id)a0 withSemantic:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4 withTokenCount:(unsigned int)a5;
+ (struct unique_ptr<siri::ontology::UsoEntitySpan, std::default_delete<siri::ontology::UsoEntitySpan>> { struct __compressed_pair<siri::ontology::UsoEntitySpan *, std::default_delete<siri::ontology::UsoEntitySpan>> { struct UsoEntitySpan *x0; } x0; })buildEntitySpanWithSemantic:(id)a0 withVocLabel:(id)a1 withStartIndex:(unsigned int)a2 withEndIndex:(unsigned int)a3 withTokenCount:(unsigned int)a4;
+ (id)buildFractionNumberUSOGraphWithIdentifier:(id)a0 withFractionSemantic:(id)a1 withStartCharIndex:(unsigned int)a2 withEndCharIndex:(unsigned int)a3;
+ (struct unique_ptr<siri::ontology::UsoIdentifier, std::default_delete<siri::ontology::UsoIdentifier>> { struct __compressed_pair<siri::ontology::UsoIdentifier *, std::default_delete<siri::ontology::UsoIdentifier>> { struct UsoIdentifier *x0; } x0; })buildIdentifierWithSemantic:(id)a0 withVocLabel:(id)a1;
+ (id)buildIntegerRegexUSOGraphWithIdentifier:(id)a0 withInput:(id)a1 withStartCharIndex:(unsigned int)a2 withEndCharIndex:(unsigned int)a3;
+ (id)buildPersonRelationshipUSOGraphWithIdentifier:(id)a0 withSemantic:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4 withTokenCount:(unsigned int)a5;
+ (id)buildPhoneContactUSOGraphWithIdentifier:(id)a0 withSemantic:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4 withTokenCount:(unsigned int)a5;
+ (id)buildPhoneNumberRegexUSOGraphWithIdentifier:(id)a0 withInput:(id)a1 withStartCharIndex:(unsigned int)a2 withEndCharIndex:(unsigned int)a3;
+ (id)buildRootUSOGraphWithStartCharIndex:(unsigned int)a0 withEndCharIndex:(unsigned int)a1;
+ (id)buildSettingUSOGraphWithIdentifier:(id)a0 withSemantic:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4 withTokenCount:(unsigned int)a5;
+ (id)buildSmsAttributesUSOGraph:(id)a0 withFractionSemantic:(id)a1 withStartCharIndex:(unsigned int)a2 withEndCharIndex:(unsigned int)a3;
+ (id)buildVocUSOGraphForHandsFreeListPosition:(id)a0 withSemantic:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4;
+ (id)buildVocUSOGraphForRegexOrdinal:(unsigned int)a0 withVocLabel:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4;
+ (id)buildVocUSOGraphWithVocLabel:(id)a0 withSemantic:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4;
+ (id)buildVocUSOGraphWithVocLabel:(id)a0 withSemantic:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4 withTokenCount:(unsigned int)a5;
+ (id)emergencyPhoneNumberSemantic;
+ (id)emergencyPhonePersonSemantic;
+ (id)listPositionSemantic;
+ (id)ordinalsSemantic;

@end
