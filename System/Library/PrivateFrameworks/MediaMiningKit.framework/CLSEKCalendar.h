/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:17 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSSet, NSString;

@interface CLSEKCalendar : NSObject <NSCoding> {

	BOOL _hasSharees;
	NSSet* _shareesAndOwner;
	NSString* _calendarIdentifier;

}

@property (readonly) NSString * calendarIdentifier;              //@synthesize calendarIdentifier=_calendarIdentifier - In the implementation block
@property (readonly) BOOL hasSharees;                            //@synthesize hasSharees=_hasSharees - In the implementation block
@property (readonly) NSSet * shareesAndOwner;                    //@synthesize shareesAndOwner=_shareesAndOwner - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)calendarIdentifier;
-(BOOL)hasSharees;
-(NSSet *)shareesAndOwner;
-(id)initWithEKCalendar:(id)arg1 ;
@end

