/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:55 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, NSString;

@interface PXTextBannerView : UIView {

	UIImageView* _backgroundView;
	UILabel* _textLabel;
	BOOL _destructiveText;
	NSString* _text;
	long long _textAlignment;

}

@property (nonatomic,copy) NSString * text;                                              //@synthesize text=_text - In the implementation block
@property (assign,getter=isDestructiveText,nonatomic) BOOL destructiveText;              //@synthesize destructiveText=_destructiveText - In the implementation block
@property (assign,nonatomic) long long textAlignment;                                    //@synthesize textAlignment=_textAlignment - In the implementation block
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)textAlignment;
-(void)_updateSubviews;
-(void)setDestructiveText:(BOOL)arg1 ;
-(BOOL)isDestructiveText;
@end

