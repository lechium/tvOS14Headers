/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:27 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, NSString, UILabel;

@interface _TVDigitView : UIView {

	BOOL _secure;
	UIVisualEffectView* _visualEffectView;
	NSString* _text;
	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (assign,getter=isSecure,nonatomic) BOOL secure;                        //@synthesize secure=_secure - In the implementation block
@property (nonatomic,copy) NSString * text;                                      //@synthesize text=_text - In the implementation block
-(void)setSecure:(BOOL)arg1 ;
-(BOOL)isSecure;
-(void)reset;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(UIVisualEffectView *)visualEffectView;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
@end

