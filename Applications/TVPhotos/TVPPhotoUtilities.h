//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVPPhotoUtilities : NSObject
{
}

+ (id)_vibrantEffectView;	// IMP=0x000000010003d7c0
+ (id)_photoCollectionLabelWithText:(id)arg1;	// IMP=0x000000010003d6e8
+ (id)formattedDateRangeForMomentClusterStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x000000010003d450
+ (id)formattedDateStringForMomentStartDate:(id)arg1;	// IMP=0x000000010003d318
+ (id)formattedLocationInfoForLocationNames:(id)arg1;	// IMP=0x000000010003d03c
+ (id)sharedPhotoStreamCollectionViewWithDataSource:(id)arg1 delegate:(id)arg2 itemSize:(struct CGSize)arg3 contentInset:(struct UIEdgeInsets)arg4 frame:(struct CGRect)arg5;	// IMP=0x000000010003ce78
+ (id)photosLaunchLoadingView:(id)arg1 parentBounds:(struct CGRect)arg2 spinnerMargin:(double)arg3;	// IMP=0x000000010003cb9c
+ (id)vibrantLabelWithText:(id)arg1;	// IMP=0x000000010003cae0
+ (id)getPhotoBannerButtonWithTitle:(id)arg1;	// IMP=0x000000010003c9d4
+ (id)getFormattedAssetCountStringForPhotoCount:(long long)arg1 videoCount:(long long)arg2;	// IMP=0x000000010003c9bc
+ (struct CGRect)getFrameForCommentsLabel:(struct CGRect)arg1 textSize:(struct CGSize)arg2;	// IMP=0x000000010003c97c
+ (struct CGSize)getAttributedTextSize:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;	// IMP=0x000000010003c8c4

@end
