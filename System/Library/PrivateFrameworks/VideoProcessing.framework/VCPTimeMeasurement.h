/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPTimeMeasurement : NSObject {

	mach_timebase_info _timebase;
	unsigned long long _start;
	BOOL _started;
	double _elapsedTimeSeconds;

}

@property (readonly) double elapsedTimeSeconds;              //@synthesize elapsedTimeSeconds=_elapsedTimeSeconds - In the implementation block
@property (readonly) BOOL started;                           //@synthesize started=_started - In the implementation block
-(id)init;
-(int)start;
-(int)stop;
-(void)reset;
-(BOOL)started;
-(double)elapsedTimeSeconds;
@end

