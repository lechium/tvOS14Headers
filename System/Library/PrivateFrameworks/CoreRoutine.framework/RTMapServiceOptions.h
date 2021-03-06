/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface RTMapServiceOptions : NSObject <NSSecureCoding> {

	BOOL _useBackgroundTraits;

}

@property (nonatomic,readonly) BOOL useBackgroundTraits;              //@synthesize useBackgroundTraits=_useBackgroundTraits - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUseBackgroundTraits:(BOOL)arg1 ;
-(BOOL)useBackgroundTraits;
@end

