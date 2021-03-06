/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:12 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXDisplayAssetVideoContentProvider.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@class PHFetchResult, PHAsset, PXPhotoKitUIMediaProvider, NSString;

@interface PXPhotoKitVideoContentProvider : PXDisplayAssetVideoContentProvider <PXPhotoLibraryUIChangeObserver> {

	PHFetchResult* _fetchResult;
	BOOL _wantsCustomCompositor;

}

@property (nonatomic,readonly) PHAsset * asset; 
@property (nonatomic,readonly) PXPhotoKitUIMediaProvider * mediaProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 ;
-(BOOL)needsPostprocessing;
-(void)postprocessPlayerItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
@end

