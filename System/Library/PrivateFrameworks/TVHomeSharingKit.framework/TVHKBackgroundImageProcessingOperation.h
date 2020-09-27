/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:18 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <TVHomeSharingKit/TVHKAsynchronousOperation.h>

@class UIImage;

@interface TVHKBackgroundImageProcessingOperation : TVHKAsynchronousOperation {

	BOOL _generateBackdropImage;
	UIImage* _sourceImage;
	long long _blurStyle;
	UIImage* _backgroundImage;
	UIImage* _backdropImage;

}

@property (nonatomic,retain) UIImage * backgroundImage;                 //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * backdropImage;                   //@synthesize backdropImage=_backdropImage - In the implementation block
@property (nonatomic,readonly) UIImage * sourceImage;                   //@synthesize sourceImage=_sourceImage - In the implementation block
@property (nonatomic,readonly) long long blurStyle;                     //@synthesize blurStyle=_blurStyle - In the implementation block
@property (nonatomic,readonly) BOOL generateBackdropImage;              //@synthesize generateBackdropImage=_generateBackdropImage - In the implementation block
+(id)new;
+(id)_backdropImageFromImage:(id)arg1 blurStyle:(long long)arg2 backgroundImageSize:(CGSize)arg3 targetSize:(CGSize)arg4 ;
-(id)init;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(UIImage *)sourceImage;
-(void)executionDidBegin;
-(long long)blurStyle;
-(UIImage *)backdropImage;
-(void)setBackdropImage:(UIImage *)arg1 ;
-(void)_generateImages;
-(BOOL)generateBackdropImage;
-(void)_completeWithBackgroundImage:(id)arg1 backdropImage:(id)arg2 ;
-(id)initWithImage:(id)arg1 blurStyle:(long long)arg2 generateBackdropImage:(BOOL)arg3 ;
@end
