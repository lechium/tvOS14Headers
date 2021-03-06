/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLClientAuthorization.h>

@class NSString, NSSet, NSNumber;

@interface PLAssetsdConnectionAuthorization : NSObject <PLClientAuthorization> {

	SCD_Struct_PL34 _auditToken;
	NSSet* _photoKitEntitlements;
	NSNumber* _photosAccessAllowed;
	NSNumber* _photosAddAccessAllowed;
	BOOL _libraryUpgradeAuthorized;
	BOOL _directDatabaseAccessAuthorized;
	BOOL _directDatabaseWriteAuthorized;
	NSString* _fetchFilterIdentifier;
	BOOL _photoKitEntitled;
	BOOL _cloudInternalEntitled;
	BOOL _clientLimitedLibraryCapable;
	int _clientProcessIdentifier;
	NSString* _trustedCallerBundleID;
	NSString* _trustedCallerDisplayName;
	NSString* _trustedCallerPhotoLibraryUsageDescription;

}

@property (nonatomic,readonly) NSString * trustedCallerBundleID;                                                   //@synthesize trustedCallerBundleID=_trustedCallerBundleID - In the implementation block
@property (nonatomic,readonly) NSString * fetchFilterIdentifier;                                                   //@synthesize fetchFilterIdentifier=_fetchFilterIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * trustedCallerDisplayName;                                                //@synthesize trustedCallerDisplayName=_trustedCallerDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * trustedCallerPhotoLibraryUsageDescription;                               //@synthesize trustedCallerPhotoLibraryUsageDescription=_trustedCallerPhotoLibraryUsageDescription - In the implementation block
@property (nonatomic,readonly) int clientProcessIdentifier;                                                        //@synthesize clientProcessIdentifier=_clientProcessIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL photoKitEntitled;                                                              //@synthesize photoKitEntitled=_photoKitEntitled - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PL34 clientAuditToken; 
@property (nonatomic,readonly) BOOL directDatabaseAccessAuthorized; 
@property (nonatomic,readonly) BOOL directDatabaseWriteAuthorized; 
@property (nonatomic,readonly) BOOL cloudInternalEntitled;                                                         //@synthesize cloudInternalEntitled=_cloudInternalEntitled - In the implementation block
@property (nonatomic,readonly) BOOL limitedLibraryMode; 
@property (getter=isClientLimitedLibraryCapable,nonatomic,readonly) BOOL clientLimitedLibraryCapable;              //@synthesize clientLimitedLibraryCapable=_clientLimitedLibraryCapable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(int)clientProcessIdentifier;
-(id)initWithConnection:(id)arg1 ;
-(BOOL)directDatabaseWriteAuthorized;
-(BOOL)cloudInternalEntitled;
-(NSString *)trustedCallerBundleID;
-(BOOL)limitedLibraryMode;
-(BOOL)directDatabaseAccessAuthorized;
-(SCD_Struct_PL34)clientAuditToken;
-(void)handleInvalidation;
-(BOOL)isClientAuthorizedForTCCServicePhotos;
-(BOOL)isClientAuthorizedForTCCServicePhotosAdd;
-(NSString *)fetchFilterIdentifier;
-(BOOL)isClientInFullLibraryMode;
-(BOOL)isClientInLimitedLibraryMode;
-(BOOL)photoKitEntitled;
-(BOOL)isPhotosClient;
-(void)setClientLimitedLibraryCapable:(BOOL)arg1 ;
-(BOOL)photoKitEntitledFor:(id)arg1 ;
-(NSString *)trustedCallerDisplayName;
-(NSString *)trustedCallerPhotoLibraryUsageDescription;
-(BOOL)isClientLimitedLibraryCapable;
-(BOOL)isClientInRestrictedMode;
-(BOOL)isClientAuthorizedForLibraryUpgrade;
-(void)setupFromConnection:(id)arg1 ;
-(void)_trackCAConnectionEvent;
-(BOOL)_shouldTrackEventForBundle:(id)arg1 ;
@end

