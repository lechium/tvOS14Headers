/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RTLocation, NSDate;

@interface RTHint : NSObject <NSSecureCoding, NSCopying> {

	RTLocation* _location;
	long long _source;
	NSDate* _date;

}

@property (nonatomic,readonly) RTLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) long long source;                   //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSDate * date;                      //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)hintSourceToString:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(long long)source;
-(RTLocation *)location;
-(id)initWithLocation:(id)arg1 source:(long long)arg2 date:(id)arg3 ;
@end
