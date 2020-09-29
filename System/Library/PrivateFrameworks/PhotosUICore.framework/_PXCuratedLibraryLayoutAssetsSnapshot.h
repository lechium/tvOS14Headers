/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:03 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXAssetsDataSource, NSDictionary;

@interface _PXCuratedLibraryLayoutAssetsSnapshot : NSObject {

	PXAssetsDataSource* _dataSource;
	NSDictionary* _spriteSnapshotIndexByAssetIdentifier;
	long long _spriteSnapshotsCount;
	long long _spriteSnapshotsCapacity;
	SCD_Struct_PX100* _spriteSnapshots;
	long long _zoomLevel;
	CGPoint _offset;
	CGRect _visibleRect;
	CGRect _fullyVisibleRect;

}

@property (assign,nonatomic) CGPoint offset;                                     //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain) id<NSCopying> dominantAssetIdentifier; 
@property (nonatomic,readonly) long long zoomLevel;                              //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,readonly) CGRect visibleRect;                               //@synthesize visibleRect=_visibleRect - In the implementation block
@property (nonatomic,readonly) CGRect fullyVisibleRect;                          //@synthesize fullyVisibleRect=_fullyVisibleRect - In the implementation block
-(void)dealloc;
-(CGPoint)offset;
-(void)setOffset:(CGPoint)arg1 ;
-(CGRect)visibleRect;
-(id)initWithLayout:(id)arg1 ;
-(long long)zoomLevel;
-(CGRect)fullyVisibleRect;
-(SCD_Struct_PX100)spriteSnapshotForAssetWithIdentifier:(id)arg1 ;
-(void)enumerateAssetInfoForGeometries:(const SCD_Struct_PX11*)arg1 styles:(const SCD_Struct_PX83*)arg2 infos:(const SCD_Struct_PX15*)arg3 count:(unsigned)arg4 options:(unsigned long long)arg5 usingBlock:(/*^block*/id)arg6 ;
-(void)setDominantAssetIdentifier:(id<NSCopying>)arg1 ;
-(void)enumerateAssetIdentifiersUsingBlock:(/*^block*/id)arg1 ;
-(id<NSCopying>)dominantAssetIdentifier;
-(long long)_addSpriteSnapshot:(SCD_Struct_PX100)arg1 ;
-(id)assetIdentifierForAssetReference:(id)arg1 ;
@end

