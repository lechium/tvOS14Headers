/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:57 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXActionPerformer.h>

@class PHCollectionList, PHFetchResult, PHAssetCollection;

@interface PXCollectionListActionPerformer : PXActionPerformer {

	PHCollectionList* _collectionList;
	PHFetchResult* _parentCollectionListFetchResult;
	PHAssetCollection* _createdAssetCollection;
	unsigned long long _collectionActionType;

}

@property (assign,nonatomic) unsigned long long collectionActionType;                        //@synthesize collectionActionType=_collectionActionType - In the implementation block
@property (nonatomic,retain) PHAssetCollection * createdAssetCollection;                     //@synthesize createdAssetCollection=_createdAssetCollection - In the implementation block
@property (nonatomic,readonly) PHCollectionList * collectionList;                            //@synthesize collectionList=_collectionList - In the implementation block
@property (nonatomic,readonly) PHFetchResult * parentCollectionListFetchResult;              //@synthesize parentCollectionListFetchResult=_parentCollectionListFetchResult - In the implementation block
+(BOOL)canPerformActionForCollectionList:(id)arg1 ;
-(PHCollectionList *)collectionList;
-(void)performUserInteractionTask;
-(id)initWithActionType:(id)arg1 collectionList:(id)arg2 ;
-(id)initWithActionType:(id)arg1 collectionList:(id)arg2 fetchResult:(id)arg3 ;
-(void)handleCreateAlbum;
-(void)presentSetupUIForAlbumCreationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)handleCreateFolder;
-(void)handleCreateSmartAlbum;
-(void)handleCreateSharedAlbum;
-(void)createAlbumWithAssets:(id)arg1 albumTitle:(id)arg2 ;
-(long long)_albumInsertionIndex;
-(void)_albumCreationDidBegin;
-(PHFetchResult *)parentCollectionListFetchResult;
-(PHAssetCollection *)createdAssetCollection;
-(void)setCreatedAssetCollection:(PHAssetCollection *)arg1 ;
-(unsigned long long)collectionActionType;
-(void)setCollectionActionType:(unsigned long long)arg1 ;
@end

