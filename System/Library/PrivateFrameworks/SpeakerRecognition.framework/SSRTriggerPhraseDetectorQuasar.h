/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:05 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _EARSyncSpeechRecognizer, NSString;

@interface SSRTriggerPhraseDetectorQuasar : NSObject {

	_EARSyncSpeechRecognizer* _syncRecognizer;
	NSString* _locale;

}
-(void)reset;
-(id)endAudio;
-(id)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(id)initWithLocale:(id)arg1 configPath:(id)arg2 resourcePath:(id)arg3 ;
@end
