/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TSAudioTimeErrorCorrelator.h>

@interface TSAudioTimeErrorCorrelatorQuick : TSAudioTimeErrorCorrelator {

	float* _channelABuffer;
	float* _scratchBuffer;
	float* _correlationBuffer;
	float* _interpollationIndiciesBuffer;

}
-(void)dealloc;
-(id)initWithMaxCorrelationLength:(long long)arg1 andUpscaleFactor:(long long)arg2 forSamplingRate:(double)arg3 ;
-(void)_makeBlock;
@end
