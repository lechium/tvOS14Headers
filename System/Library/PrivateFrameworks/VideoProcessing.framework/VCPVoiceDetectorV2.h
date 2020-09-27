/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVoiceDetector.h>

@interface VCPVoiceDetectorV2 : VCPVoiceDetector {

	BOOL _voiceActivityNew;
	OpaqueAudioComponentInstanceRef _audioUnit;

}
-(id)init;
-(void)dealloc;
-(id)results;
-(int)processAudioSamples:(AudioBufferList*)arg1 timestamp:(AudioTimeStamp)arg2 ;
-(int)finalizeAnalysisAtTime:(const SCD_Struct_VC6*)arg1 ;
-(int)setupWithAudioStream:(const AudioStreamBasicDescription*)arg1 ;
-(int)loadModel;
@end
