/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:55 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UIColor;

@interface PXRoundedCornerOverlayView : UIImageView {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	SCD_Struct_PX37 _needsUpdateFlags;
	BOOL _continuousCorners;
	double _cornerRadius;
	unsigned long long _cornersToRound;
	UIColor* _overlayColor;
	double _displayScale;

}

@property (nonatomic,readonly) double cornerRadius;                            //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) unsigned long long cornersToRound;              //@synthesize cornersToRound=_cornersToRound - In the implementation block
@property (nonatomic,readonly) BOOL continuousCorners;                         //@synthesize continuousCorners=_continuousCorners - In the implementation block
@property (nonatomic,readonly) UIColor * overlayColor;                         //@synthesize overlayColor=_overlayColor - In the implementation block
@property (nonatomic,readonly) double displayScale;                            //@synthesize displayScale=_displayScale - In the implementation block
-(BOOL)continuousCorners;
-(void)setContinuousCorners:(BOOL)arg1 ;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_needsUpdate;
-(void)_updateIfNeeded;
-(void)traitCollectionDidChange:(id)arg1 ;
-(double)displayScale;
-(void)_setNeedsUpdate;
-(void)_invalidateImage;
-(void)setDisplayScale:(double)arg1 ;
-(id)mutableChangeObject;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)setCornersToRound:(unsigned long long)arg1 ;
-(void)setOverlayColor:(UIColor *)arg1 ;
-(void)_updateImageIfNeeded;
-(unsigned long long)cornersToRound;
-(UIColor *)overlayColor;
@end

