/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureOutput.h>

@protocol AVCaptureFileOutputDelegate;
@class AVCaptureFileOutputInternal, NSURL;

@interface AVCaptureFileOutput : AVCaptureOutput {

	AVCaptureFileOutputInternal* _fileOutputInternal;
	id<AVCaptureFileOutputDelegate> _delegate;

}

@property (assign,nonatomic) id<AVCaptureFileOutputDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * outputFileURL; 
@property (getter=isRecording,nonatomic,readonly) BOOL recording; 
@property (getter=isRecordingPaused,nonatomic,readonly) BOOL recordingPaused; 
@property (nonatomic,readonly) SCD_Struct_AV0 recordedDuration; 
@property (nonatomic,readonly) long long recordedFileSize; 
@property (assign,nonatomic) SCD_Struct_AV0 maxRecordedDuration; 
@property (assign,nonatomic) long long maxRecordedFileSize; 
@property (assign,nonatomic) long long minFreeDiskSpaceLimit; 
+(void)initialize;
-(void)dealloc;
-(id<AVCaptureFileOutputDelegate>)delegate;
-(void)setDelegate:(id<AVCaptureFileOutputDelegate>)arg1 ;
-(void)stopRecording;
-(BOOL)isRecording;
-(NSURL *)outputFileURL;
-(SCD_Struct_AV0)maxRecordedDuration;
-(long long)maxRecordedFileSize;
-(long long)minFreeDiskSpaceLimit;
-(BOOL)pausesRecordingOnInterruption;
-(id)initSubclass;
-(void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2 ;
-(BOOL)isRecordingPaused;
-(void)pauseRecording;
-(void)resumeRecording;
-(void)setPausesRecordingOnInterruption:(BOOL)arg1 ;
-(SCD_Struct_AV0)recordedDuration;
-(long long)recordedFileSize;
-(void)setMaxRecordedDuration:(SCD_Struct_AV0)arg1 ;
-(void)setMaxRecordedFileSize:(long long)arg1 ;
-(void)setMinFreeDiskSpaceLimit:(long long)arg1 ;
@end
