/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:33 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, CAShapeLayer;

@interface TVPProgressBarShapeView : UIView {

	unsigned long long _roundedCorners;
	UIColor* _fillColor;
	CAShapeLayer* _borderLayer;
	CAShapeLayer* _fillLayer;
	CAShapeLayer* _fillMask;
	CGPoint _fillRange;

}

@property (nonatomic,readonly) CAShapeLayer * borderLayer;                   //@synthesize borderLayer=_borderLayer - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * fillLayer;                     //@synthesize fillLayer=_fillLayer - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * fillMask;                      //@synthesize fillMask=_fillMask - In the implementation block
@property (assign,nonatomic) unsigned long long roundedCorners;              //@synthesize roundedCorners=_roundedCorners - In the implementation block
@property (assign,nonatomic) double borderWidth; 
@property (nonatomic,retain) UIColor * fillColor;                            //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) CGPoint fillRange;                              //@synthesize fillRange=_fillRange - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)fillColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(double)borderWidth;
-(void)setBorderWidth:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_commonInit;
-(void)layoutSubviews;
-(void)setRoundedCorners:(unsigned long long)arg1 ;
-(void)setFillRange:(CGPoint)arg1 ;
-(void)_updateShapes;
-(void)_updateMask;
-(CAShapeLayer *)borderLayer;
-(CAShapeLayer *)fillLayer;
-(unsigned long long)roundedCorners;
-(CGPoint)fillRange;
-(CAShapeLayer *)fillMask;
@end
