/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVUIKit/TVLockupHeaderFooterView.h>

@class _TVVibrantLabel;

@interface _TVCaptionButtonFooterView : TVLockupHeaderFooterView {

	_TVVibrantLabel* _titleVibrantLabel;
	_TVVibrantLabel* _subtitleVibrantLabel;

}

@property (nonatomic,retain) _TVVibrantLabel * titleVibrantLabel;                 //@synthesize titleVibrantLabel=_titleVibrantLabel - In the implementation block
@property (nonatomic,retain) _TVVibrantLabel * subtitleVibrantLabel;              //@synthesize subtitleVibrantLabel=_subtitleVibrantLabel - In the implementation block
+(id)titleLabelWithText:(id)arg1 ;
+(id)subtitleLabelWithText:(id)arg1 ;
+(id)_vibrantLabelForLabel:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(void)setSubtitleLabel:(id)arg1 ;
-(void)setTitleLabel:(id)arg1 ;
-(void)updateAppearanceForLockupViewState:(unsigned long long)arg1 ;
-(void)_updateTitleVibrantLabel;
-(void)_updateSubtitleVibrantLabel;
-(_TVVibrantLabel *)titleVibrantLabel;
-(_TVVibrantLabel *)subtitleVibrantLabel;
-(void)setTitleVibrantLabel:(_TVVibrantLabel *)arg1 ;
-(void)_addVibrantLabel:(id)arg1 underLabel:(id)arg2 ;
-(void)setSubtitleVibrantLabel:(_TVVibrantLabel *)arg1 ;
@end

