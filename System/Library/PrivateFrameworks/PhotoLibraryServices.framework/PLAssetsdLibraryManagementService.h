/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLAssetsdLibraryManagementServiceProtocol.h>

@class PLAssetsdConnectionAuthorization, PLPhotoLibraryBundleController, NSString;

@interface PLAssetsdLibraryManagementService : NSObject <PLAssetsdLibraryManagementServiceProtocol> {

	PLAssetsdConnectionAuthorization* _connectionAuthorization;
	PLPhotoLibraryBundleController* _bundleController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getPhotoLibraryURLsWithReply:(/*^block*/id)arg1 ;
-(void)setSystemPhotoLibraryURL:(id)arg1 sandboxExtension:(id)arg2 options:(unsigned short)arg3 reply:(/*^block*/id)arg4 ;
-(void)getActivePhotoLibrariesWithReply:(/*^block*/id)arg1 ;
-(void)closeAndDeletePhotoLibraryAtURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithConnectionAuthorization:(id)arg1 bundleController:(id)arg2 ;
@end

