/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIImage;


@protocol TVPMusicNowPlayingImage <NSObject,NSCopying>
@property (assign,nonatomic) CGSize desiredImageSize; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) UIImage * image; 
@required
-(UIImage *)image;
-(BOOL)isLoading;
-(CGSize)desiredImageSize;
-(void)loadWithCompletionHandler:(/*^block*/id)arg1;
-(void)setDesiredImageSize:(CGSize)arg1;

@end
