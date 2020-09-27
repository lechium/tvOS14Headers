/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CSCoreSpeechServices : NSObject
+(id)getCoreSpeechXPCConnection;
+(void)installedVoiceTriggerAssetForLanguageCode:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)fetchRemoteVoiceTriggerAssetForLanguageCode:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)voiceTriggerJarvisLanguageList:(id)arg1 jarvisSelectedLanguage:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)getCoreSpeechServiceConnection;
+(void)voiceTriggerRTModelForVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 downloadedModels:(id)arg3 preinstalledModels:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)requestUpdatedSATAudio;
+(long long)getFirstPassRunningMode;
@end
