/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:27 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Memories/FMSongRendition.h>

@class NSArray;

@interface FlexLegacySongRendition : FMSongRendition {

	NSArray* _segments;
	long long _durationOfUsedOutro;
	long long _durationOfFullOutro;

}

@property (nonatomic,retain) NSArray * segments;                         //@synthesize segments=_segments - In the implementation block
@property (assign,nonatomic) long long durationOfUsedOutro;              //@synthesize durationOfUsedOutro=_durationOfUsedOutro - In the implementation block
@property (assign,nonatomic) long long durationOfFullOutro;              //@synthesize durationOfFullOutro=_durationOfFullOutro - In the implementation block
+(long long)_durationOfOutroForPlaylist:(id)arg1 onlyUsedDuration:(BOOL)arg2 ;
-(NSArray *)segments;
-(void)setSegments:(NSArray *)arg1 ;
-(id)_buildOutroFadeoutMixParams;
-(void)setDurationOfUsedOutro:(long long)arg1 ;
-(void)setDurationOfFullOutro:(long long)arg1 ;
-(void)_buildTracksFromSegments:(id)arg1 ;
-(long long)durationOfUsedOutro;
-(long long)durationOfFullOutro;
-(id)initWithSong:(id)arg1 segments:(id)arg2 withOptions:(id)arg3 ;
@end

