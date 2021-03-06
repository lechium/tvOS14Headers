/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SCNImageSource.h>

@class CALayer, UIView, UIWindow;

@interface SCNUIKitSource : SCNImageSource {

	id _uiView;
	id _uiWindow;
	CALayer* _uiWindowLayer;
	BOOL _isOpaque;
	BOOL _windowPreparing;

}

@property (nonatomic,retain) UIView * uiView;                  //@synthesize uiView=_uiView - In the implementation block
@property (nonatomic,retain) UIWindow * uiWindow;              //@synthesize uiWindow=_uiWindow - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isOpaque;
-(id)textureSource;
-(BOOL)supportsMetal;
-(void)setUiView:(UIView *)arg1 ;
-(void)setUiWindow:(UIWindow *)arg1 ;
-(UIView *)uiView;
-(id)prepareWindowIfNeeded;
-(UIWindow *)uiWindow;
@end

