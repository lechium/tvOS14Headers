/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VSVoiceAsset, MAAsset, NSString;

@interface VSVoiceAssetSelection : NSObject {

	VSVoiceAsset* _voiceData;
	MAAsset* _asset;
	NSString* _builtInVoicePath;
	NSString* _voicePath;

}

@property (retain) VSVoiceAsset * voiceData;                    //@synthesize voiceData=_voiceData - In the implementation block
@property (retain) MAAsset * asset;                             //@synthesize asset=_asset - In the implementation block
@property (retain) NSString * builtInVoicePath;                 //@synthesize builtInVoicePath=_builtInVoicePath - In the implementation block
@property (nonatomic,retain) NSString * voicePath;              //@synthesize voicePath=_voicePath - In the implementation block
-(unsigned long long)size;
-(id)key;
-(BOOL)isInstalled;
-(BOOL)isDownloading;
-(MAAsset *)asset;
-(void)setAsset:(MAAsset *)arg1 ;
-(VSVoiceAsset *)voiceData;
-(id)descriptiveKey;
-(NSString *)voicePath;
-(double)preferenceScore;
-(void)setVoiceData:(VSVoiceAsset *)arg1 ;
-(NSString *)builtInVoicePath;
-(void)setBuiltInVoicePath:(NSString *)arg1 ;
-(void)setVoicePath:(NSString *)arg1 ;
@end

