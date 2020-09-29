/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:12 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/_UIFloatingContentView.h>
#import <libobjc.A.dylib/PXAdjustableContentsView.h>

@class NSString;

@interface PXUIFloatingContentView : _UIFloatingContentView <PXAdjustableContentsView> {

	CGRect _contentsRect;

}

@property (assign,nonatomic) CGRect contentsRect;                   //@synthesize contentsRect=_contentsRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)contentsRect;
-(void)setContentsRect:(CGRect)arg1 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
@end

