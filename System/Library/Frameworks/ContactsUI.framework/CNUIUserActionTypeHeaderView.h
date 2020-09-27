/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UIImageView, UILabel, UIView, NSLayoutConstraint;

@interface CNUIUserActionTypeHeaderView : UITableViewHeaderFooterView {

	BOOL _highlighted;
	BOOL _expanded;
	UIImageView* _actionTypeImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _accessoryImageView;
	UIView* _divider;
	NSLayoutConstraint* _dividerHeightConstraint;

}

@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                     //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                           //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,retain) UIView * divider;                                          //@synthesize divider=_divider - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * dividerHeightConstraint;              //@synthesize dividerHeightConstraint=_dividerHeightConstraint - In the implementation block
@property (nonatomic,retain) UIImageView * actionTypeImageView;                         //@synthesize actionTypeImageView=_actionTypeImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                   //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * accessoryImageView;                          //@synthesize accessoryImageView=_accessoryImageView - In the implementation block
+(id)regularBackgroundColor;
+(id)dividerRegularBackgroundColor;
+(id)regularExpandControlTitle;
+(id)subtitleColor;
+(id)highlightedBackgroundColor;
+(id)expandedBackgroundColor;
+(id)dividerExpandedBackgroundColor;
+(id)expandedExpandControlTitle;
-(void)prepareForReuse;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(UILabel *)titleLabel;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)updateVisualStateAnimated:(BOOL)arg1 ;
-(BOOL)isExpanded;
-(UIView *)divider;
-(UIImageView *)accessoryImageView;
-(void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setShowsAccessory:(BOOL)arg1 ;
-(UIImageView *)actionTypeImageView;
-(void)setActionTypeImageView:(UIImageView *)arg1 ;
-(void)setAccessoryImageView:(UIImageView *)arg1 ;
-(void)setDivider:(UIView *)arg1 ;
-(NSLayoutConstraint *)dividerHeightConstraint;
-(void)setDividerHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end
