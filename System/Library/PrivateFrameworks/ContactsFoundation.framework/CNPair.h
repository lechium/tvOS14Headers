/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CNPair : NSObject <NSSecureCoding> {

	id _first;
	id _second;

}

@property (readonly) id first;               //@synthesize first=_first - In the implementation block
@property (readonly) id second;              //@synthesize second=_second - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)pairWithFirst:(id)arg1 second:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)second;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
-(id)first;
@end

