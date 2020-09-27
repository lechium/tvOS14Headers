/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/VSDeviceTTSCoreDelegate.h>
#import <libobjc.A.dylib/VSSpeechSpeakableProtocol.h>

@protocol VSSpeechServiceDelegate;
@class VSSpeechRequest, NSString, VSInstrumentMetrics, VSDeviceTTSCore, VSAudioPlaybackService, NSError, NSCondition, VSAudioData, NSMutableArray, NSDate;

@interface VSSiriInlineTTSStreamTask : NSOperation <VSDeviceTTSCoreDelegate, VSSpeechSpeakableProtocol> {

	id<VSSpeechServiceDelegate> _delegate;
	VSSpeechRequest* _request;
	NSString* _streamID;
	VSInstrumentMetrics* _instrumentMetrics;
	VSDeviceTTSCore* _deviceTTSCore;
	VSAudioPlaybackService* _playbackServices;
	NSError* _error;
	NSCondition* _refreshTimeoutCondition;
	VSAudioData* _serverAudio;
	NSMutableArray* _finalTimingInfo;
	double _bufferDurationLimit;
	double _timeoutValue;
	NSDate* _playbackBeginDate;

}

@property (nonatomic,retain) VSSpeechRequest * request;                                //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSString * streamID;                                      //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,retain) VSInstrumentMetrics * instrumentMetrics;                  //@synthesize instrumentMetrics=_instrumentMetrics - In the implementation block
@property (nonatomic,retain) VSDeviceTTSCore * deviceTTSCore;                          //@synthesize deviceTTSCore=_deviceTTSCore - In the implementation block
@property (nonatomic,retain) VSAudioPlaybackService * playbackServices;                //@synthesize playbackServices=_playbackServices - In the implementation block
@property (nonatomic,retain) NSError * error;                                          //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSCondition * refreshTimeoutCondition;                    //@synthesize refreshTimeoutCondition=_refreshTimeoutCondition - In the implementation block
@property (nonatomic,retain) VSAudioData * serverAudio;                                //@synthesize serverAudio=_serverAudio - In the implementation block
@property (nonatomic,retain) NSMutableArray * finalTimingInfo;                         //@synthesize finalTimingInfo=_finalTimingInfo - In the implementation block
@property (assign,nonatomic) double bufferDurationLimit;                               //@synthesize bufferDurationLimit=_bufferDurationLimit - In the implementation block
@property (assign,nonatomic) double timeoutValue;                                      //@synthesize timeoutValue=_timeoutValue - In the implementation block
@property (nonatomic,retain) NSDate * playbackBeginDate;                               //@synthesize playbackBeginDate=_playbackBeginDate - In the implementation block
@property (assign,nonatomic,__weak) id<VSSpeechServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<VSSpeechServiceDelegate>)delegate;
-(void)setDelegate:(id<VSSpeechServiceDelegate>)arg1 ;
-(NSError *)error;
-(VSSpeechRequest *)request;
-(void)cancel;
-(void)resume;
-(void)suspend;
-(void)setError:(NSError *)arg1 ;
-(void)main;
-(void)setRequest:(VSSpeechRequest *)arg1 ;
-(NSString *)streamID;
-(void)setStreamID:(NSString *)arg1 ;
-(BOOL)isSpeaking;
-(double)timeoutValue;
-(void)setTimeoutValue:(double)arg1 ;
-(void)startPlayback;
-(id)voiceKey;
-(void)setInstrumentMetrics:(VSInstrumentMetrics *)arg1 ;
-(VSInstrumentMetrics *)instrumentMetrics;
-(void)reportTimingInfo;
-(void)reportInstrumentMetrics;
-(void)reportFinish;
-(void)reportSpeechStart;
-(id)taskHash;
-(id)audioPowerProvider;
-(VSAudioData *)serverAudio;
-(void)setServerAudio:(VSAudioData *)arg1 ;
-(void)synthesisCore:(id)arg1 didReceiveAudio:(id)arg2 ;
-(void)synthesisCore:(id)arg1 didReceiveWordTimingInfo:(id)arg2 ;
-(id)initWithRequest:(id)arg1 withStreamID:(id)arg2 ;
-(double)bufferDurationLimit;
-(void)setBufferDurationLimit:(double)arg1 ;
-(NSCondition *)refreshTimeoutCondition;
-(void)setRefreshTimeoutCondition:(NSCondition *)arg1 ;
-(void)handleBegin:(id)arg1 ;
-(void)handleChunk:(id)arg1 ;
-(void)handleEnd:(id)arg1 ;
-(void)setPlaybackServices:(VSAudioPlaybackService *)arg1 ;
-(VSAudioPlaybackService *)playbackServices;
-(void)signalNewDataWithError:(id)arg1 ;
-(void)setPlaybackBeginDate:(NSDate *)arg1 ;
-(NSDate *)playbackBeginDate;
-(void)handleStreamNotification:(id)arg1 ;
-(BOOL)waitForNewData:(double)arg1 ;
-(VSDeviceTTSCore *)deviceTTSCore;
-(NSMutableArray *)finalTimingInfo;
-(void)setDeviceTTSCore:(VSDeviceTTSCore *)arg1 ;
-(void)setFinalTimingInfo:(NSMutableArray *)arg1 ;
@end
