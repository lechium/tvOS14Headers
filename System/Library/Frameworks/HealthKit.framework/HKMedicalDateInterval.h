/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKMedicalDate;

@interface HKMedicalDateInterval : NSObject <NSSecureCoding, NSCopying> {

	HKMedicalDate* _startDate;
	HKMedicalDate* _endDate;

}

@property (nonatomic,copy,readonly) HKMedicalDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)medicalDateIntervalWithStartDate:(id)arg1 ;
+(id)medicalDateIntervalWithEndDate:(id)arg1 ;
+(id)medicalDateIntervalWithStartDate:(id)arg1 endDate:(id)arg2 error:(out id*)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKMedicalDate *)endDate;
-(HKMedicalDate *)startDate;
-(id)_initWithStartDate:(id)arg1 endDate:(id)arg2 ;
@end

