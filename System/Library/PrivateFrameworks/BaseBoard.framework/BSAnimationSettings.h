/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@class CAMediaTimingFunction, NSString;

@interface BSAnimationSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSXPCCoding> {

	os_unfair_lock_s _lock;
	float _lock_speed;
	double _lock_storedDuration;
	double _lock_delay;
	double _lock_frameInterval;
	CAMediaTimingFunction* _lock_timingFunction;
	double _lock_mass;
	double _lock_stiffness;
	double _lock_damping;
	double _lock_epsilon;
	double _lock_initialVelocity;
	BOOL _lock_storedDurationIsDirty;
	BOOL _mutable;
	BOOL _isSpring;

}

@property (nonatomic,readonly) double mass; 
@property (nonatomic,readonly) double stiffness; 
@property (nonatomic,readonly) double damping; 
@property (nonatomic,readonly) double epsilon; 
@property (nonatomic,readonly) double initialVelocity; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double delay; 
@property (nonatomic,readonly) double frameInterval; 
@property (nonatomic,readonly) CAMediaTimingFunction * timingFunction; 
@property (nonatomic,readonly) float speed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)tryAnimatingWithSettings:(id)arg1 actions:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)settingsWithDuration:(double)arg1 ;
+(id)settingsWithDuration:(double)arg1 timingFunction:(id)arg2 ;
+(id)settingsWithDuration:(double)arg1 delay:(double)arg2 ;
+(id)settingsWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)delay;
-(double)duration;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(double)mass;
-(double)stiffness;
-(double)damping;
-(double)epsilon;
-(double)initialVelocity;
-(CAMediaTimingFunction *)timingFunction;
-(double)frameInterval;
-(float)speed;
-(void)applyToCAAnimation:(id)arg1 ;
-(BOOL)isSpringAnimation;
@end
