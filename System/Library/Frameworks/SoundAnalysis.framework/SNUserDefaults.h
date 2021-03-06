/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults;

@interface SNUserDefaults : NSObject {

	NSUserDefaults* _userDefaults;

}

@property (nonatomic,retain) NSUserDefaults * userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
+(id)instance;
+(id)userDefaults;
+(unsigned)builtInMicrophoneAnalysisChannelNumberOrDefault:(unsigned)arg1 ;
+(id)builtInMicrophoneAnalysisChannelNumber;
+(BOOL)enableSecondPassRecordingInDaemon;
+(id)daemonRecordingPath;
+(long long)recordingDirectoryMaximumSizeBytes;
+(double)recordingTimeToLiveSeconds;
+(BOOL)deleteRecordingsWithoutDetection;
+(BOOL)enableFileServer;
+(id)fileServerRootDirectory;
-(id)init;
-(NSUserDefaults *)userDefaults;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
@end

