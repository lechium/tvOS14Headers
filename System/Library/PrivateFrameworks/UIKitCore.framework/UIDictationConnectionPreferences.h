/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AFPreferences;

@interface UIDictationConnectionPreferences : NSObject {

	AFPreferences* _afPreferences;

}

@property (nonatomic,retain) AFPreferences * afPreferences;              //@synthesize afPreferences=_afPreferences - In the implementation block
+(id)sharedInstance;
-(id)languageCode;
-(long long)dataSharingOptInStatus;
-(BOOL)dictationIsEnabled;
-(BOOL)isSmartLanguageSelectionEnabled;
-(BOOL)suppressDictationOptIn;
-(BOOL)ignoreServerManualEndpointingThreshold;
-(id)manualEndpointingThreshold;
-(id)initSingleton;
-(AFPreferences *)afPreferences;
-(void)setAfPreferences:(AFPreferences *)arg1 ;
-(void)afPreferencesChanged:(id)arg1 ;
-(BOOL)suppressDataSharingOptIn;
-(id)dictationSLSEnabledLanguages;
@end

