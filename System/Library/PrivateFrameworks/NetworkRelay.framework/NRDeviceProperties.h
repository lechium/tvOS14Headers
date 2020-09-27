/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:22 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkRelay/NetworkRelay-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NRDeviceProperties : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _pairingProtocolVersion;

}

@property (assign,nonatomic) unsigned long long pairingProtocolVersion;              //@synthesize pairingProtocolVersion=_pairingProtocolVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)pairingProtocolVersion;
-(void)setPairingProtocolVersion:(unsigned long long)arg1 ;
@end
