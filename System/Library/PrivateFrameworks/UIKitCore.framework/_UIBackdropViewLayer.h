/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class _UIBackdropView;

@interface _UIBackdropViewLayer : CALayer {

	_UIBackdropView* _backdropView;

}

@property (assign,nonatomic) _UIBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
-(void)dealloc;
-(void)renderInContext:(CGContextRef)arg1 ;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
@end

