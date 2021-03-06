/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class CMAttitude;

@interface CMDeviceMotion : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) BOOL doingYawCorrection; 
@property (nonatomic,readonly) BOOL doingBiasEstimation; 
@property (nonatomic,readonly) int magneticFieldCalibrationLevel; 
@property (nonatomic,readonly) double headingAccuracy; 
@property (nonatomic,readonly) CMAttitude * attitude; 
@property (nonatomic,readonly) SCD_Struct_CM1 rotationRate; 
@property (nonatomic,readonly) SCD_Struct_CM1 gravity; 
@property (nonatomic,readonly) SCD_Struct_CM1 userAcceleration; 
@property (nonatomic,readonly) SCD_Struct_CM6 magneticField; 
@property (nonatomic,readonly) double heading; 
@property (nonatomic,readonly) long long sensorLocation; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_CM1)gravity;
-(SCD_Struct_CM6)magneticField;
-(id)initWithDeviceMotion:(SCD_Struct_CM4)arg1 internal:(SCD_Struct_CM5)arg2 timestamp:(double)arg3 ;
-(CMAttitude *)attitude;
-(SCD_Struct_CM1)rotationRate;
-(SCD_Struct_CM1)userAcceleration;
-(int)magneticFieldCalibrationLevel;
-(BOOL)doingYawCorrection;
-(BOOL)doingBiasEstimation;
-(double)heading;
-(double)headingAccuracy;
-(long long)sensorLocation;
@end

