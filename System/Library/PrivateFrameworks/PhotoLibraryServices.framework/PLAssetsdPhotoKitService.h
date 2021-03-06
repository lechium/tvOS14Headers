/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>
#import <libobjc.A.dylib/PLPerformChangesRequestService.h>
#import <libobjc.A.dylib/PLAssetsdPhotoKitServiceProtocol.h>

@class PLAssetsdConnectionAuthorization, NSPersistentStoreCoordinator, NSString;

@interface PLAssetsdPhotoKitService : PLAbstractLibraryServicesManagerService <PLPerformChangesRequestService, PLAssetsdPhotoKitServiceProtocol> {

	PLAssetsdConnectionAuthorization* _connectionAuthorization;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)persistentStoreCoordinator;
-(void)applyChangesRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getUUIDsForCloudIdentifiers:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithLibraryServicesManager:(id)arg1 connectionAuthorization:(id)arg2 ;
-(id)clientDescription;
-(void)commitRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

