/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:07 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIFont, NSString, PXAnimatedCounter, UILabel, NSLayoutConstraint;

@interface PXAnimatedLabel : UIView {

	UIFont* _font;
	NSString* _text;
	PXAnimatedCounter* _counter;
	UILabel* _label;
	NSLayoutConstraint* _counterWidthConstraint;

}

@property (retain) PXAnimatedCounter * counter;                                //@synthesize counter=_counter - In the implementation block
@property (retain) UILabel * label;                                            //@synthesize label=_label - In the implementation block
@property (readonly) NSLayoutConstraint * counterWidthConstraint;              //@synthesize counterWidthConstraint=_counterWidthConstraint - In the implementation block
@property (nonatomic,retain) UIFont * font;                                    //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) NSString * text;                                  //@synthesize text=_text - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(PXAnimatedCounter *)counter;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setCounter:(PXAnimatedCounter *)arg1 ;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)commonInit;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)setText:(id)arg1 withAnimationStyle:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_updateConstraintsForText;
-(NSLayoutConstraint *)counterWidthConstraint;
@end

