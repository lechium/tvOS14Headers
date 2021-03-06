/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface WebSimpleLayer : CALayer {

	BOOL _isRenderingInContext;

}

@property (nonatomic,readonly) BOOL isRenderingInContext;              //@synthesize isRenderingInContext=_isRenderingInContext - In the implementation block
-(void)display;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setNeedsDisplay;
-(id)actionForKey:(id)arg1 ;
-(void)renderInContext:(CGContextRef)arg1 ;
-(BOOL)isRenderingInContext;
@end

