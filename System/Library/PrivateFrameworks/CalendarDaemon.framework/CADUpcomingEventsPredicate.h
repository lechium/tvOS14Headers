/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADPredicate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CADUpcomingEventsPredicate : CADPredicate <NSSecureCoding> {

	int _limit;

}

@property (nonatomic,readonly) int limit;              //@synthesize limit=_limit - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateWithLimit:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)predicateFormat;
-(int)limit;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(id)initWithLimit:(int)arg1 ;
@end

