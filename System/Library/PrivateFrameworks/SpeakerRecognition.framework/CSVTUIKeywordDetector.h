/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:05 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSRTriggerPhraseDetectorNDAPI, CSAudioCircularBuffer;

@interface CSVTUIKeywordDetector : NSObject {

	SSRTriggerPhraseDetectorNDAPI* _keywordAnalyzer;
	float _lastKeywordScore;
	float _keywordThreshold;
	CSAudioCircularBuffer* _audioBuffer;
	unsigned long long _extraSamplesAtStart;

}
-(void)reset;
-(id)initWithAsset:(id)arg1 ;
-(id)analyze:(id)arg1 ;
-(unsigned long long)_sampleLengthFrom:(unsigned)arg1 To:(unsigned)arg2 ;
-(id)triggeredUtterance:(id)arg1 ;
@end

