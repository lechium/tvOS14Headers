/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSMutableDictionary, NSDictionary, NSString;

@interface IKPlayerStateChangeEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	NSMutableDictionary* _mutableProperties;
	long long _state;
	long long _oldState;

}

@property (nonatomic,readonly) long long state;                        //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long oldState;                     //@synthesize oldState=_oldState - In the implementation block
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double elapsedTime; 
@property (assign,nonatomic) double rate; 
@property (nonatomic,readonly) NSDictionary * properties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stateNameForState:(long long)arg1 ;
+(long long)stateForStateName:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(long long)state;
-(NSDictionary *)properties;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setRate:(double)arg1 ;
-(double)rate;
-(id)initWithState:(long long)arg1 ;
-(void)setElapsedTime:(double)arg1 ;
-(double)elapsedTime;
-(id)initWithState:(long long)arg1 oldState:(long long)arg2 ;
-(long long)oldState;
@end
