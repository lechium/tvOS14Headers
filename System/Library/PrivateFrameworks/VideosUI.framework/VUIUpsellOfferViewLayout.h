/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, VUIAppleTVChannelLogoLayout, VUIButtonLayout;

@interface VUIUpsellOfferViewLayout : TVViewLayout {

	VUITextLayout* _titleTextLayout;
	VUITextLayout* _descriptionTextLayout;
	double _cornerRadius;
	long long _blurEffectStyle;
	long long _darkBlurEffectStyle;
	VUIAppleTVChannelLogoLayout* _channelLogoLayout;
	VUITextLayout* _disclaimerTextLayout;
	VUIButtonLayout* _buttonLayout;

}

@property (nonatomic,readonly) VUITextLayout * titleTextLayout;                              //@synthesize titleTextLayout=_titleTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * descriptionTextLayout;                        //@synthesize descriptionTextLayout=_descriptionTextLayout - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                            //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) long long blurEffectStyle;                                      //@synthesize blurEffectStyle=_blurEffectStyle - In the implementation block
@property (assign,nonatomic) long long darkBlurEffectStyle;                                  //@synthesize darkBlurEffectStyle=_darkBlurEffectStyle - In the implementation block
@property (nonatomic,readonly) VUIAppleTVChannelLogoLayout * channelLogoLayout;              //@synthesize channelLogoLayout=_channelLogoLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * disclaimerTextLayout;                         //@synthesize disclaimerTextLayout=_disclaimerTextLayout - In the implementation block
@property (nonatomic,readonly) VUIButtonLayout * buttonLayout;                               //@synthesize buttonLayout=_buttonLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(UIEdgeInsets)safeAreaInsets;
-(void)setBlurEffectStyle:(long long)arg1 ;
-(long long)blurEffectStyle;
-(VUITextLayout *)titleTextLayout;
-(VUITextLayout *)descriptionTextLayout;
-(VUITextLayout *)disclaimerTextLayout;
-(VUIAppleTVChannelLogoLayout *)channelLogoLayout;
-(VUIButtonLayout *)buttonLayout;
-(long long)darkBlurEffectStyle;
-(void)_configureLayout;
-(void)setDarkBlurEffectStyle:(long long)arg1 ;
-(double)titleTopMarginPhone;
-(double)titleTopMarginPad;
-(double)descriptionTopMargin;
@end

