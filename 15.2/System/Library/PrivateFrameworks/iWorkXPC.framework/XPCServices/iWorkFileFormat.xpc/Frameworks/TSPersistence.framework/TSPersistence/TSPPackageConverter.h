@class NSURL, TSUExtendedAttributeCollection, TSPPackage;
@protocol TSPFileCoordinatorDelegate;

@interface TSPPackageConverter : NSObject {
    id<TSPFileCoordinatorDelegate> _fileCoordinatorDelegate;
    TSUExtendedAttributeCollection *_extendedAttributeCollection;
}

@property (readonly, nonatomic) TSPPackage *package;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) long long packageType;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isPasswordProtected;

+ (id)newPackageConverterWithURL:(id)a0 preserveExtendedAttributes:(BOOL)a1 error:(id *)a2;
+ (BOOL)convertDocumentAtURL:(id)a0 toPackageType:(long long)a1 removeEntriesMatchingFilter:(id)a2 error:(id *)a3;
+ (id)newPackageConverterWithURL:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)init;
- (BOOL)checkPassword:(id)a0;
- (BOOL)writeToURL:(id)a0 packageType:(long long)a1 removeEntriesMatchingFilter:(id)a2 error:(id *)a3;
- (id)initWithURL:(id)a0 package:(id)a1 fileCoordinatorDelegate:(id)a2 preserveExtendedAttributes:(BOOL)a3 error:(id *)a4;
- (BOOL)path:(id)a0 matchesFilter:(id)a1;
- (BOOL)enumeratePackageEntriesWithZipArchive:(id)a0 needsReadChannel:(BOOL)a1 accessor:(id /* block */)a2;
- (unsigned long long)progressTotalUnitCountWithZipArchive:(id)a0;
- (id)newWriteChannelAtPath:(id)a0 lastModificationDate:(id)a1 size:(unsigned long long)a2 CRC:(unsigned int)a3 packageWriter:(id)a4 error:(id *)a5;
- (BOOL)isDataPath:(id)a0;
- (BOOL)isObjectArchivePath:(id)a0;
- (BOOL)isDocumentPropertiesPath:(id)a0;
- (BOOL)hasEntriesMatchingFilter:(id)a0;

@end
