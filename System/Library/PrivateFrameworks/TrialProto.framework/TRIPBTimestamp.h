/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:52 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class NSDate;

@interface TRIPBTimestamp : TRIPBMessage

@property (nonatomic,retain) NSDate * date; 
@property (assign,nonatomic) double timeIntervalSince1970; 
@property (assign,nonatomic) long long seconds; 
@property (assign,nonatomic) int nanos; 
+(id)descriptor;
-(double)timeIntervalSince1970;
-(NSDate *)date;
-(id)initWithTimeIntervalSince1970:(double)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setTimeIntervalSince1970:(double)arg1 ;
@end
