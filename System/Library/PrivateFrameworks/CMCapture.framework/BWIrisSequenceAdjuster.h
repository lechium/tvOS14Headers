/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:42 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class NSMutableArray, BWMotionDataPreserver;

@interface BWIrisSequenceAdjuster : NSObject {

	NSMutableArray* _discontinuities;
	SCD_Struct_BW36 _firstIrisAudioOffset;
	NSMutableArray* _interleavingQueues;
	SCD_Struct_BW36 _nextAdjustedVideoTime;
	unsigned* _mediaTypes;
	NSMutableArray* _timeSkews;
	SCD_Struct_BW36 _masterMovieOriginalStartTime;
	SCD_Struct_BW36 _previewFrameDuration;
	SCD_Struct_BW36 _lastVideoAdjustedTime;
	BWMotionDataPreserver* _motionDataPreserver;
	int _audioOffsetForOriginalStillImageTimeMaximumFrameLatency;

}

@property (assign,nonatomic) int audioOffsetForOriginalStillImageTimeMaximumFrameLatency;              //@synthesize audioOffsetForOriginalStillImageTimeMaximumFrameLatency=_audioOffsetForOriginalStillImageTimeMaximumFrameLatency - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW36 masterMovieOriginalStartTime; 
@property (readonly) BOOL readyToReleaseAudio; 
+(void)initialize;
-(void)dealloc;
-(void)reset;
-(id)initWithMediaTypes:(id)arg1 visMotionMetadataPreloadingEnabled:(BOOL)arg2 ;
-(void)enqueueVideoBufferTime:(SCD_Struct_BW36)arg1 nativeTime:(SCD_Struct_BW36)arg2 isBracketFrame:(BOOL)arg3 isSISFrame:(BOOL)arg4 ;
-(void)adjustMovieInfoTimes:(id)arg1 ;
-(BOOL)readyToReleaseAudio;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1 forMediaTypeWithIndex:(long long)arg2 ;
-(SCD_Struct_BW36)audioOffsetForOriginalStillImageTime:(SCD_Struct_BW36)arg1 ;
-(opaqueCMSampleBufferRef)dequeueAndRetainAdjustedSampleBufferForMediaTypeWithIndex:(long long)arg1 ;
-(SCD_Struct_BW36)adjustedTimeForStillImageTime:(SCD_Struct_BW36)arg1 ;
-(int)audioOffsetForOriginalStillImageTimeMaximumFrameLatency;
-(void)setMasterMovieOriginalStartTime:(SCD_Struct_BW36)arg1 ;
-(SCD_Struct_BW36)_adjustedTimeForAudioBufferWithTime:(SCD_Struct_BW36)arg1 ;
-(SCD_Struct_BW36)_adjustedTimeForVideoBufferWithTime:(SCD_Struct_BW36)arg1 ;
-(SCD_Struct_BW36)_audioOffsetForOriginalStillImageTime:(SCD_Struct_BW36)arg1 adjustedStillImageTime:(SCD_Struct_BW36)arg2 ;
-(SCD_Struct_BW36)_adjustedTimeForMetadataBufferWithTime:(SCD_Struct_BW36)arg1 ;
-(SCD_Struct_BW36)adjustedTimeForTime:(SCD_Struct_BW36)arg1 ;
-(BOOL)_getPreviousTimeSkewOut:(id*)arg1 andNextTimeSkewOut:(id*)arg2 forTime:(SCD_Struct_BW36)arg3 ;
-(long long)_indexOfTime:(SCD_Struct_BW36)arg1 ;
-(SCD_Struct_BW36)_originalDurationForVideoBufferWithTime:(SCD_Struct_BW36)arg1 ;
-(void)_adjustTimesInAudioInterleavingQueues;
-(SCD_Struct_BW36)masterMovieOriginalStartTime;
-(id)_timeSkewsDescription;
-(void)setAudioOffsetForOriginalStillImageTimeMaximumFrameLatency:(int)arg1 ;
@end

