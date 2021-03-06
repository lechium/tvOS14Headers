/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:59 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXAssetsSectionConfigurator.h>

@class PXDayAssetsSectionHeaderLayoutSpec, PXAssetsSectionBodyAllPhotosGridLayoutSpec, PXDayAssetsSectionBodyLayoutSpec;

@interface PXDayAssetsSectionConfigurator : PXAssetsSectionConfigurator {

	PXDayAssetsSectionHeaderLayoutSpec* _floatingHeaderSpec;
	PXAssetsSectionBodyAllPhotosGridLayoutSpec* _allPhotosGridBodySpec;
	PXDayAssetsSectionBodyLayoutSpec* _daysBodySpec;

}
-(id)headerSpecForHeaderStyle:(long long)arg1 assetSectionLayout:(id)arg2 ;
-(void)configureAssetSectionLayout:(id)arg1 ;
-(CGSize)estimatedSizeOfSectionForAssetCollection:(id)arg1 isCurated:(BOOL)arg2 numberOfAssets:(long long)arg3 referenceSize:(CGSize)arg4 ;
-(id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2 ;
-(id)_bodySpecForBodyStyle:(long long)arg1 zoomLevel:(long long)arg2 ;
-(void)_getHeaderAndBodyStylesForAssetCollection:(id)arg1 isCurated:(BOOL)arg2 zoomLevel:(long long)arg3 headerStyle:(long long*)arg4 bodyStyle:(long long*)arg5 ;
-(void)_configureSelectAllButtonOfSectionLayout:(id)arg1 ;
@end

