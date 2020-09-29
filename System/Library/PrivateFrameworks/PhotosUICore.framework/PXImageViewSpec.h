/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:06 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXViewSpec.h>

@class NSArray;

@interface PXImageViewSpec : PXViewSpec {

	BOOL _shouldEnableFocus;
	NSArray* _overlaySpecs;
	long long _roundedCornersMode;

}

@property (nonatomic,copy) NSArray * overlaySpecs;                                        //@synthesize overlaySpecs=_overlaySpecs - In the implementation block
@property (assign,nonatomic) BOOL shouldEnableFocus;                                      //@synthesize shouldEnableFocus=_shouldEnableFocus - In the implementation block
@property (assign,nonatomic) long long roundedCornersMode;                                //@synthesize roundedCornersMode=_roundedCornersMode - In the implementation block
@property (nonatomic,readonly) CGPoint floatingContentMotionRotation; 
@property (nonatomic,readonly) CGPoint floatingContentMotionTranslation; 
@property (nonatomic,readonly) double floatingUnfocusedShadowOpacity; 
@property (nonatomic,readonly) double floatingShadowOpacity; 
@property (nonatomic,readonly) double floatingUnfocusedShadowRadius; 
@property (nonatomic,readonly) double floatingShadowRadius; 
@property (nonatomic,readonly) double floatingUnfocusedShadowVerticalOffset; 
@property (nonatomic,readonly) CGSize floatingUnfocusedShadowExpansion; 
@property (nonatomic,readonly) double focusedSizeIncrease; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(CGPoint)floatingContentMotionRotation;
-(CGPoint)floatingContentMotionTranslation;
-(double)floatingUnfocusedShadowOpacity;
-(double)floatingShadowOpacity;
-(double)floatingUnfocusedShadowRadius;
-(double)floatingShadowRadius;
-(double)floatingUnfocusedShadowVerticalOffset;
-(CGSize)floatingUnfocusedShadowExpansion;
-(double)focusedSizeIncrease;
-(NSArray *)overlaySpecs;
-(void)setOverlaySpecs:(NSArray *)arg1 ;
-(BOOL)shouldEnableFocus;
-(void)setShouldEnableFocus:(BOOL)arg1 ;
-(long long)roundedCornersMode;
-(void)setRoundedCornersMode:(long long)arg1 ;
@end

