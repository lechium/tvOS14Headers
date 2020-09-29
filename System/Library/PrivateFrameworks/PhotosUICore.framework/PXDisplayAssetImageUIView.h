/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:58 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXDisplayAssetUIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class UIImageView, NSString;

@interface PXDisplayAssetImageUIView : PXDisplayAssetUIView <PXChangeObserver> {

	UIImageView* _imageView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contentView;
-(long long)playbackStyle;
-(double)loadingProgress;
-(void)imageDidChange;
-(void)imageProgressDidChange;
-(void)placeholderImageFiltersDidChange;
-(void)contentsRectDidChange;
-(BOOL)isDisplayingFullQualityContent;
-(void)isDisplayingFullQualityContentDidChange;
-(void)_updateImageViewFilters;
@end
