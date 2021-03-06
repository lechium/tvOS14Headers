/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>

@class HMFNetAddressInternal, NSString;

@interface HMFNetAddress : HMFObject {

	HMFNetAddressInternal* _internal;

}

@property (nonatomic,readonly) HMFNetAddressInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) unsigned long long addressFamily; 
@property (nonatomic,copy,readonly) NSString * addressString; 
+(id)localAddress;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)dataUsingEncoding:(unsigned long long)arg1 ;
-(id)initWithHostname:(id)arg1 ;
-(HMFNetAddressInternal *)internal;
-(NSString *)addressString;
-(unsigned long long)addressFamily;
-(id)attributeDescriptions;
-(id)initWithSocketAddress:(const sockaddr*)arg1 ;
@end

