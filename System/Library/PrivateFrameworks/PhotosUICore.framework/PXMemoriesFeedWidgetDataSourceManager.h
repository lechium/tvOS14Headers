/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:02 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXMemoriesFeedDataSourceManagerBase.h>

@interface PXMemoriesFeedWidgetDataSourceManager : PXMemoriesFeedDataSourceManagerBase {

	BOOL _onlyFavorites;
	unsigned long long _maxCount;

}

@property (assign,nonatomic) unsigned long long maxCount;              //@synthesize maxCount=_maxCount - In the implementation block
@property (assign,nonatomic) BOOL onlyFavorites;                       //@synthesize onlyFavorites=_onlyFavorites - In the implementation block
-(unsigned long long)maxCount;
-(void)setMaxCount:(unsigned long long)arg1 ;
-(id)fetchOptions;
-(void)startGeneratingMemories;
-(void)generateAdditionalEntriesIfPossible;
-(void)handleIncrementalFetchResultChange:(id)arg1 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)arg2 ;
-(void)handleNonIncrementalFetchResultChange:(id)arg1 ;
-(void)handleChangedKeyAssetsForMemories:(id)arg1 ;
-(unsigned long long)_extendedMaxCount;
-(id)_generateEntryFromMemories:(id)arg1 ;
-(void)_regenerateMemoriesWithChange:(id)arg1 ;
-(BOOL)onlyFavorites;
-(void)setOnlyFavorites:(BOOL)arg1 ;
@end

