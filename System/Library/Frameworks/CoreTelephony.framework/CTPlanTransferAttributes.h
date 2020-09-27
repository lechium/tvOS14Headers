/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTPlanTransferAttributes : NSObject <NSSecureCoding> {

	unsigned long long _transferCapability;
	unsigned long long _transferStatus;

}

@property (assign,nonatomic) unsigned long long transferCapability;              //@synthesize transferCapability=_transferCapability - In the implementation block
@property (assign,nonatomic) unsigned long long transferStatus;                  //@synthesize transferStatus=_transferStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)transferCapability;
-(unsigned long long)transferStatus;
-(id)initWithTransferCapability:(unsigned long long)arg1 transferStatus:(unsigned long long)arg2 ;
-(void)setTransferCapability:(unsigned long long)arg1 ;
-(void)setTransferStatus:(unsigned long long)arg1 ;
@end
