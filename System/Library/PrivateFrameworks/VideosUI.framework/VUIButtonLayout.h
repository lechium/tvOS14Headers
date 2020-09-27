/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, TVImageLayout, NSShadow;

@interface VUIButtonLayout : TVViewLayout {

	BOOL _blurEnabled;
	unsigned long long _type;
	unsigned long long _titleStyle;
	double _cornerRadius;
	VUITextLayout* _titleLayout;
	TVImageLayout* _imageLayout;
	NSShadow* _shadow;
	CGPoint _contentMotionTranslation;

}

@property (nonatomic,readonly) unsigned long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long titleStyle;                    //@synthesize titleStyle=_titleStyle - In the implementation block
@property (nonatomic,readonly) double cornerRadius;                              //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) VUITextLayout * titleLayout;                        //@synthesize titleLayout=_titleLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * imageLayout;                        //@synthesize imageLayout=_imageLayout - In the implementation block
@property (assign,getter=isBlurEnabled,nonatomic) BOOL blurEnabled;              //@synthesize blurEnabled=_blurEnabled - In the implementation block
@property (nonatomic,retain) NSShadow * shadow;                                  //@synthesize shadow=_shadow - In the implementation block
@property (nonatomic,readonly) CGPoint contentMotionTranslation;                 //@synthesize contentMotionTranslation=_contentMotionTranslation - In the implementation block
+(id)standardTitleLayoutWithStyle:(unsigned long long)arg1 ;
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 type:(unsigned long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(double)cornerRadius;
-(NSShadow *)shadow;
-(unsigned long long)titleStyle;
-(void)setShadow:(NSShadow *)arg1 ;
-(BOOL)isBlurEnabled;
-(void)setBlurEnabled:(BOOL)arg1 ;
-(void)setImageLayout:(TVImageLayout *)arg1 ;
-(TVImageLayout *)imageLayout;
-(VUITextLayout *)titleLayout;
-(void)setTitleLayout:(VUITextLayout *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 titleStyle:(unsigned long long)arg2 ;
-(void)_configurePrimaryButton;
-(void)_configureTextualButton;
-(CGPoint)contentMotionTranslation;
@end
