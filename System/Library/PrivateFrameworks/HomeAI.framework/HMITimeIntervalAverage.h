/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:53 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class MovingAverage;

@interface HMITimeIntervalAverage : HMFObject {

	MovingAverage* _average;

}
-(double)value;
-(void)addValue:(double)arg1 ;
-(id)initWithMaxCapacity:(long long)arg1 ;
-(double)valueForInterval:(double)arg1 defaultValue:(double)arg2 ;
@end
