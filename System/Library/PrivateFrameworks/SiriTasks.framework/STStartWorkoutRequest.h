/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class HKQuantity;

@interface STStartWorkoutRequest : AFSiriRequest {

	long long _activityType;
	long long _locationType;
	long long _goalType;
	long long _userMode;
	HKQuantity* _goal;
	BOOL _isOpenGoal;
	BOOL _skipActivitySetup;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)activityType;
-(long long)userMode;
-(long long)locationType;
-(id)createResponse;
-(id)workoutGoal;
-(BOOL)isOpenGoal;
-(BOOL)skipActivitySetup;
-(long long)goalType;
-(id)_initWithType:(long long)arg1 location:(long long)arg2 goal:(id)arg3 goalType:(long long)arg4 userMode:(long long)arg5 isOpenGoal:(BOOL)arg6 skipActivitySetup:(BOOL)arg7 ;
@end
