/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HKMobileCountryCode : NSObject {

	NSString* _code;
	NSString* _ISOCode;

}

@property (nonatomic,copy,readonly) NSString * code;                 //@synthesize code=_code - In the implementation block
@property (nonatomic,copy,readonly) NSString * ISOCode;              //@synthesize ISOCode=_ISOCode - In the implementation block
-(NSString *)code;
-(NSString *)ISOCode;
-(id)initWithMobileCountryCode:(id)arg1 ISOCode:(id)arg2 ;
@end

