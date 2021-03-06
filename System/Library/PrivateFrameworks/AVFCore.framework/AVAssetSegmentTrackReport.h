/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class NSString, AVAssetSegmentReportSampleInformation;

@interface AVAssetSegmentTrackReport : NSObject {

	int _trackID;
	NSString* _mediaType;
	SCD_Struct_AV6 _earliestPresentationTimeStamp;
	SCD_Struct_AV6 _duration;
	AVAssetSegmentReportSampleInformation* _firstVideoSampleInformation;

}

@property (nonatomic,readonly) int trackID;                                                                      //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,readonly) NSString * mediaType;                                                             //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AV6 earliestPresentationTimeStamp;                                     //@synthesize earliestPresentationTimeStamp=_earliestPresentationTimeStamp - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AV6 duration;                                                          //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) AVAssetSegmentReportSampleInformation * firstVideoSampleInformation;              //@synthesize firstVideoSampleInformation=_firstVideoSampleInformation - In the implementation block
-(void)dealloc;
-(SCD_Struct_AV6)duration;
-(int)trackID;
-(NSString *)mediaType;
-(id)initWithFigSegmentTrackReportDictionary:(id)arg1 ;
-(SCD_Struct_AV6)earliestPresentationTimeStamp;
-(AVAssetSegmentReportSampleInformation *)firstVideoSampleInformation;
@end

