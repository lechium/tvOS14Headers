/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFBLERecorderReplayDelegate;
@class NSMutableArray;

@interface SFBLERecorder : NSObject {

	NSMutableArray* _recordings;
	unsigned long long _replayIndex;
	long long _payloadType;
	id<SFBLERecorderReplayDelegate> _replayDelegate;

}

@property (nonatomic,readonly) long long payloadType;                                            //@synthesize payloadType=_payloadType - In the implementation block
@property (assign,nonatomic,__weak) id<SFBLERecorderReplayDelegate> replayDelegate;              //@synthesize replayDelegate=_replayDelegate - In the implementation block
-(long long)payloadType;
-(id)initWithPayloadType:(long long)arg1 ;
-(id)initWithRecordingURL:(id)arg1 ;
-(BOOL)recordDevice:(id)arg1 data:(id)arg2 rssi:(id)arg3 info:(id)arg4 error:(id*)arg5 ;
-(BOOL)replayNextRecording;
-(BOOL)saveToDirectory:(id)arg1 ;
-(id<SFBLERecorderReplayDelegate>)replayDelegate;
-(void)setReplayDelegate:(id<SFBLERecorderReplayDelegate>)arg1 ;
@end
