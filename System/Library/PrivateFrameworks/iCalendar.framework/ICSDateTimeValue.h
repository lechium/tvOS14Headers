/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSDateValue.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ICSDateTimeValue : ICSDateValue <NSSecureCoding> {

	long long _hour;
	long long _minute;
	long long _second;

}

@property (readonly) long long hour;                //@synthesize hour=_hour - In the implementation block
@property (readonly) long long minute;              //@synthesize minute=_minute - In the implementation block
@property (readonly) long long second;              //@synthesize second=_second - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)hour;
-(long long)minute;
-(long long)second;
-(id)components;
-(id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(int)dateType;
-(id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 ;
@end
