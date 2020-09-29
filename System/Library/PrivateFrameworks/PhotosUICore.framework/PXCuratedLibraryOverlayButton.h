/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:04 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/PXGReusableView.h>

@class PXCuratedLibraryOverlayButtonConfiguration, UIVisualEffectView, UIView, UIImageView, UILabel, NSString;

@interface PXCuratedLibraryOverlayButton : UIControl <PXGReusableView> {

	PXCuratedLibraryOverlayButtonConfiguration* _userData;
	UIVisualEffectView* _effectView;
	UIView* _contentView;
	UIView* _solidBackgroundView;
	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	UILabel* _captionLabel;
	NSString* _axLabel;
	CGRect _clippingRect;

}

@property (nonatomic,retain) UIVisualEffectView * effectView;                                  //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                             //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * solidBackgroundView;                                     //@synthesize solidBackgroundView=_solidBackgroundView - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                                      //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * captionLabel;                                           //@synthesize captionLabel=_captionLabel - In the implementation block
@property (nonatomic,retain) NSString * axLabel;                                               //@synthesize axLabel=_axLabel - In the implementation block
@property (nonatomic,copy) PXCuratedLibraryOverlayButtonConfiguration * userData;              //@synthesize userData=_userData - In the implementation block
@property (assign,nonatomic) CGRect clippingRect;                                              //@synthesize clippingRect=_clippingRect - In the implementation block
+(CGSize)sizeWithConfiguration:(id)arg1 ;
+(id)defaultTitleColor;
+(void)_getSize:(out CGSize*)arg1 titleFrame:(out CGRect*)arg2 captionFrame:(out CGRect*)arg3 iconFrame:(out CGRect*)arg4 forConfiguration:(id)arg5 title:(id)arg6 ;
+(id)titleSizeCache;
+(id)buttonSizeCache;
+(id)roundedCornerMaskImage:(SCD_Struct_PX82)arg1 size:(CGSize)arg2 ;
+(CGSize)_sizeOfTitle:(id)arg1 withFont:(id)arg2 ;
+(id)defaultTitleFont;
-(id)description;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)contentView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)setUserData:(PXCuratedLibraryOverlayButtonConfiguration *)arg1 ;
-(PXCuratedLibraryOverlayButtonConfiguration *)userData;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UIImageView *)iconImageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIVisualEffectView *)effectView;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(void)_performAction:(id)arg1 ;
-(CGRect)clippingRect;
-(void)setClippingRect:(CGRect)arg1 ;
-(void)becomeReusable;
-(void)_setupViews;
-(void)_updateButtonWithConfiguration:(id)arg1 ;
-(void)_platformSpecificViewSetup;
-(void)_updateBackgroundView;
-(void)_updateEffectViewBackgroundStyle;
-(void)_updateEffectView;
-(UIView *)solidBackgroundView;
-(void)setSolidBackgroundView:(UIView *)arg1 ;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(UILabel *)captionLabel;
-(void)setCaptionLabel:(UILabel *)arg1 ;
-(NSString *)axLabel;
-(void)setAxLabel:(NSString *)arg1 ;
@end

