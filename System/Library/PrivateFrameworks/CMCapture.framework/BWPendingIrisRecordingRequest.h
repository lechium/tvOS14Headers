/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:43 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FigCaptureMovieFileRecordingSettings, BWIrisMovieInfo;

@interface BWPendingIrisRecordingRequest : NSObject <NSCopying> {

	FigCaptureMovieFileRecordingSettings* _settings;
	long long _enqueuedHostTime;
	SCD_Struct_BW36 _momentCaptureMovieRecordingMasterEndTime;
	BOOL _pairedRequestCreated;
	BWIrisMovieInfo* _irisMovieInfo;

}

@property (nonatomic,readonly) FigCaptureMovieFileRecordingSettings * settings;                     //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) long long enqueuedHostTime;                                            //@synthesize enqueuedHostTime=_enqueuedHostTime - In the implementation block
@property (nonatomic,retain) BWIrisMovieInfo * irisMovieInfo;                                       //@synthesize irisMovieInfo=_irisMovieInfo - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW36 momentCaptureMovieRecordingMasterEndTime;              //@synthesize momentCaptureMovieRecordingMasterEndTime=_momentCaptureMovieRecordingMasterEndTime - In the implementation block
@property (assign,getter=isPairedRequestCreated,nonatomic) BOOL pairedRequestCreated;               //@synthesize pairedRequestCreated=_pairedRequestCreated - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
+(id)irisRecordingRequestWithFigCaptureMovieFileRecordingSettings:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(BOOL)isEmpty;
-(FigCaptureMovieFileRecordingSettings *)settings;
-(void)setMomentCaptureMovieRecordingMasterEndTime:(SCD_Struct_BW36)arg1 ;
-(SCD_Struct_BW36)momentCaptureMovieRecordingMasterEndTime;
-(id)_initWithFigCaptureMovieFileRecordingSettings:(id)arg1 ;
-(long long)enqueuedHostTime;
-(BWIrisMovieInfo *)irisMovieInfo;
-(BOOL)isPairedRequestCreated;
-(void)setIrisMovieInfo:(BWIrisMovieInfo *)arg1 ;
-(void)setPairedRequestCreated:(BOOL)arg1 ;
-(void)setEnqueuedHostTime:(long long)arg1 ;
@end

