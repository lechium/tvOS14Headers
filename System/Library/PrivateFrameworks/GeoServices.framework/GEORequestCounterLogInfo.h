/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface GEORequestCounterLogInfo : NSObject <NSSecureCoding> {

	NSDictionary* _dict;

}

@property (nonatomic,readonly) double oldestTimestamp; 
@property (nonatomic,readonly) SCD_Struct_GE0 requestType; 
+(BOOL)supportsSecureCoding;
+(id)counterLogInfoWithDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(SCD_Struct_GE0)requestType;
-(id)_formattedString;
-(id)_formattedCSVString;
-(unsigned long long)xmitBytes;
-(unsigned long long)recvBytes;
-(double)oldestTimestamp;
@end
