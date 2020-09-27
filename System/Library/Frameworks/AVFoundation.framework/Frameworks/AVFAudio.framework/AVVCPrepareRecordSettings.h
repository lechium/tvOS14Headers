/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface AVVCPrepareRecordSettings : NSObject {

	BOOL _meteringEnabled;
	unsigned long long _streamID;
	NSDictionary* _avAudioSettings;
	double _recordBufferDuration;

}

@property (assign,nonatomic) unsigned long long streamID;                 //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,retain) NSDictionary * avAudioSettings;              //@synthesize avAudioSettings=_avAudioSettings - In the implementation block
@property (assign,nonatomic) double recordBufferDuration;                 //@synthesize recordBufferDuration=_recordBufferDuration - In the implementation block
@property (assign,nonatomic) BOOL meteringEnabled;                        //@synthesize meteringEnabled=_meteringEnabled - In the implementation block
-(void)dealloc;
-(void)setRecordBufferDuration:(double)arg1 ;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(unsigned long long)streamID;
-(NSDictionary *)avAudioSettings;
-(double)recordBufferDuration;
-(id)initWithStreamID:(unsigned long long)arg1 settings:(id)arg2 bufferDuration:(double)arg3 ;
-(void)setStreamID:(unsigned long long)arg1 ;
-(void)setAvAudioSettings:(NSDictionary *)arg1 ;
-(BOOL)meteringEnabled;
@end
