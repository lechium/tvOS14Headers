/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:51 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeadBoardUI/HeadBoardUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, HBUITopShelfImageView;

@interface HBUITopShelfParadeStandardTitleView : UIView {

	UILabel* _titleLabel;
	UILabel* _contextTitleLabel;
	HBUITopShelfImageView* _contextImageView;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * contextTitleLabel;                           //@synthesize contextTitleLabel=_contextTitleLabel - In the implementation block
@property (nonatomic,readonly) HBUITopShelfImageView * contextImageView;              //@synthesize contextImageView=_contextImageView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(UILabel *)contextTitleLabel;
-(HBUITopShelfImageView *)contextImageView;
@end
