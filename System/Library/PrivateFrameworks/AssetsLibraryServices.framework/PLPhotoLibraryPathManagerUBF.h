/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetsLibraryServices/PLPhotoLibraryPathManagerCore.h>

@class NSString, NSFileManager;

@interface PLPhotoLibraryPathManagerUBF : PLPhotoLibraryPathManagerCore {

	NSString* _databaseDirectory;
	NSString* _searchDatabaseDirectory;
	NSString* _originalsDirectory;
	NSString* _privateDirectory;
	NSString* _privateCacheDirectory;
	NSString* _resourcesDirectory;
	NSString* _journalsDirectory;
	NSString* _rendersDirectory;
	NSString* _derivativesDirectory;
	NSString* _derivativesThumbsDirectory;
	NSString* _derivativesMasterThumbsDirectory;
	NSString* _resourcesCPLDataDirectory;
	NSString* _resourcesPhotoStreamsDataDirectory;
	NSString* _resourcesPhotoCloudSharingDirectory;
	NSString* _resourcesPhotoCloudSharingDataDirectory;
	NSString* _resourcesPhotoCloudSharingMetadataDirectory;
	NSString* _resourcesPhotoCloudSharingCacheDirectory;
	NSString* _resourcesProjectsDataDirectory;
	NSString* _resourcesProjectsLegacyDirectory;
	NSString* _resourcesMomentSharedDirectory;
	NSString* _externalDirectory;
	NSFileManager* _fm;

}
+(id)systemLibraryPathManager;
-(id)initWithLibraryURL:(id)arg1 ;
-(id)basePrivateDirectoryPath;
-(id)_externalDirectoryWithBundleIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)convertPhotoLibraryPathType:(unsigned char)arg1 ;
-(id)addToPath:(id)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)photosDatabasePath;
-(id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)pathsForClientAccess:(id)arg1 ;
-(id)pathsForPermissionCheck;
-(id)pathsForExternalWriters;
-(BOOL)createPathsForNewLibrariesWithError:(id*)arg1 ;
-(id)corePathsWithError:(id*)arg1 directDatabaseAccess:(BOOL)arg2 limitedLibrary:(BOOL)arg3 ;
-(id)extendedPathsWithError:(id*)arg1 ;
-(id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)privateCacheDirectoryWithSubType:(unsigned char)arg1 ;
-(id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)pathToAssetsToAlbumsMapping;
-(id)syncInfoPath;
-(id)baseDirectoryForBundleScope:(unsigned char)arg1 ;
-(id)urlWithIdentifier:(id)arg1 ;
-(id)readOnlyUrlWithIdentifier:(id)arg1 ;
-(void)setExtendedAttributesWithIdentifier:(id)arg1 ;
-(void)setExtendedAttributesWithIdentifier:(id)arg1 andURL:(id)arg2 ;
-(void)obtainAccessAndWaitWithFileWithIdentifier:(id)arg1 mode:(unsigned char)arg2 toURLWithHandler:(/*^block*/id)arg3 ;
@end
