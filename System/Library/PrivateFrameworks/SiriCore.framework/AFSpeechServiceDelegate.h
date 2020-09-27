/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFSpeechServiceDelegate <NSObject>
@required
-(oneway void)speechServiceDidRecognizeTokens:(id)arg1;
-(oneway void)speechServiceDidProcessAudioDuration:(double)arg1;
-(oneway void)speechServiceDidRecognizeRawEagerRecognitionCandidate:(id)arg1;
-(oneway void)speechServiceDidRecognizePackage:(id)arg1;
-(oneway void)speechServiceDidFinishRecognitionWithStatistics:(id)arg1 error:(id)arg2;

@end
