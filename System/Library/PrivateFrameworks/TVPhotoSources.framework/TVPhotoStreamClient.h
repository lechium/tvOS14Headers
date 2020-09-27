/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:28 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVPhotoSources.framework/TVPhotoSources
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface TVPhotoStreamClient : NSObject {

	NSXPCConnection* _connection;

}
+(id)sharedInstance;
-(id)init;
-(void)fetchCollectionsWithCompletion:(/*^block*/id)arg1 ;
-(void)syncWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchAssetsForCollectionWithIdentifier:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchImageForAssetURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
