/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISBehavior.h>

@interface ISLivePhotoSeekBehavior : ISBehavior {

	BOOL _isSeeking;
	BOOL _needsSeek;
	BOOL _needsTransitionToVideo;
	/*^block*/id _seekCompletionHandler;
	SCD_Struct_IS1 _seekTime;

}

@property (assign,nonatomic) SCD_Struct_IS1 seekTime;              //@synthesize seekTime=_seekTime - In the implementation block
@property (nonatomic,copy) id seekCompletionHandler;               //@synthesize seekCompletionHandler=_seekCompletionHandler - In the implementation block
-(SCD_Struct_IS1)seekTime;
-(void)setSeekTime:(SCD_Struct_IS1)arg1 ;
-(long long)behaviorType;
-(void)activeDidChange;
-(void)setSeekCompletionHandler:(id)arg1 ;
-(id)initWithInitialLayoutInfo:(id)arg1 seekTime:(SCD_Struct_IS1)arg2 ;
-(void)_seekIfNeeded;
-(void)_callSeekCompletionHandler:(BOOL)arg1 ;
-(void)_handleDidSeekToSeekTime:(BOOL)arg1 ;
-(id)seekCompletionHandler;
@end

