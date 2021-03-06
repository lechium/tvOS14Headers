/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIContentSizeCategoryAdjusting.h>

@class UILabel, NSMapTable, NSLayoutConstraint, _UIDatePickerLinkedLabelStorage, UILayoutGuide, NSArray, UIFont, UIColor, NSString;

@interface _UIDatePickerLinkedLabel : UIView <UIContentSizeCategoryAdjusting> {

	SCD_Struct_UI29 _flags;
	UILabel* _renderingLabel;
	CGSize _lastSize;
	NSMapTable* _longestPossibleTitle;
	NSMapTable* _longestPossibleWidth;
	NSLayoutConstraint* _renderLabelXConstraint;
	_UIDatePickerLinkedLabelStorage* _storage;
	UILayoutGuide* _contentLayoutGuide;
	NSArray* _titles;
	NSArray* _possibleTitles;

}

@property (nonatomic,retain) _UIDatePickerLinkedLabelStorage * storage;              //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * contentLayoutGuide;                   //@synthesize contentLayoutGuide=_contentLayoutGuide - In the implementation block
@property (nonatomic,retain) NSArray * titles;                                       //@synthesize titles=_titles - In the implementation block
@property (nonatomic,retain) NSArray * possibleTitles;                               //@synthesize possibleTitles=_possibleTitles - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_UIDatePickerLinkedLabelStorage *)storage;
-(void)setStorage:(_UIDatePickerLinkedLabelStorage *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)titles;
-(void)setTitles:(NSArray *)arg1 ;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)setPossibleTitles:(NSArray *)arg1 ;
-(NSArray *)possibleTitles;
-(void)setTextAlignment:(long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(void)setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2 ;
-(void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2 ;
-(long long)textAlignment;
-(UILayoutGuide *)contentLayoutGuide;
-(BOOL)adjustsFontForContentSizeCategory;
-(void)_setNeedsStorageSync;
-(void)_storageSyncIfNecessary;
-(id)_longestPossibleTitleForPriority:(unsigned long long)arg1 width:(double*)arg2 ;
-(void)_storageSync;
-(void)_invalidatePossibleTitleCaches;
-(void)_updateAlignmentConstraint;
@end

