/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:20 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _TtC12GameCenterUI16DynamicTypeLabel, NSDate, _TtC12GameCenterUI16AchievementBadge;

@interface GameCenterUI.AchievementCard : UIView {

	 theme;
	 style;
	 metrics;
	 $__lazy_storage_$_highlightView;
	 isHighlighted;
	 backgroundView;
	 gradient;
	 border;
	 badge;
	 titleLabel;
	 subtitleLabel;
	 alwaysShowShadow;
	 backgroundEffectsGroup;
	 wantsFixedContentSizeCategory;

}

@property (readonly,nonatomic) BOOL canBecomeFocused; 
@property (readonly,nonatomic) _TtC12GameCenterUI16DynamicTypeLabel * accessibilityTitleLabel; 
@property (readonly,nonatomic) _TtC12GameCenterUI16DynamicTypeLabel * accessibilitySubtitleLabel; 
@property (readonly,nonatomic) NSDate * accessibilityAchievementCompletedDate; 
@property (readonly,nonatomic) _TtC12GameCenterUI16AchievementBadge * accessibilityBadge; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_dynamicUserInterfaceTraitDidChange;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(JUMeasurements)measurementsWithFitting:(CGSize)arg1 in:(id)arg2 ;
-(_TtC12GameCenterUI16DynamicTypeLabel *)accessibilityTitleLabel;
-(_TtC12GameCenterUI16DynamicTypeLabel *)accessibilitySubtitleLabel;
-(NSDate *)accessibilityAchievementCompletedDate;
-(_TtC12GameCenterUI16AchievementBadge *)accessibilityBadge;
@end
