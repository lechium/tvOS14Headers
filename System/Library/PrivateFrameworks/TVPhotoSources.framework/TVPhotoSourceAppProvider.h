/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:28 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVPhotoSources.framework/TVPhotoSources
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPhotoSources/TVPhotoSource.h>

@class TVPhotoSourceService;

@interface TVPhotoSourceAppProvider : TVPhotoSource {

	TVPhotoSourceService* _photoSourceService;

}

@property (nonatomic,retain) TVPhotoSourceService * photoSourceService;              //@synthesize photoSourceService=_photoSourceService - In the implementation block
-(id)sourceIdentifier;
-(id)sourceName;
-(void)fetchCollectionsWithCompletion:(/*^block*/id)arg1 ;
-(void)setPhotoSourceService:(TVPhotoSourceService *)arg1 ;
-(void)_fetchAssetsForCollectionWithIdentifier:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(TVPhotoSourceService *)photoSourceService;
-(void)fetchAssetsForCollectionWithIdentifier:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

