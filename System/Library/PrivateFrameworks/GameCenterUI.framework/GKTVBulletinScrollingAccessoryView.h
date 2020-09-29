/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:17 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface GKTVBulletinScrollingAccessoryView : UIView {

	long long _style;
	BOOL _animating;
	UILabel* _label1;
	UILabel* _label2;

}

@property (nonatomic,readonly) long long style;                              //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) UILabel * label1;                             //@synthesize label1=_label1 - In the implementation block
@property (nonatomic,readonly) UILabel * label2;                             //@synthesize label2=_label2 - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;              //@synthesize animating=_animating - In the implementation block
+(id)caption2Font;
-(id)initWithCoder:(id)arg1 ;
-(long long)style;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)isAnimating;
-(void)_setupConstraints;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(UILabel *)label1;
-(UILabel *)label2;
@end

