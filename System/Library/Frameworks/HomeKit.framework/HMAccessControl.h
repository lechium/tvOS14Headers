/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMFUnfairLock, HMUser;

@interface HMAccessControl : NSObject <NSSecureCoding> {

	HMFUnfairLock* _lock;
	HMUser* _user;
	unsigned long long _cachedHash;

}

@property (nonatomic,readonly) unsigned long long cachedHash;              //@synthesize cachedHash=_cachedHash - In the implementation block
@property (__weak) HMUser * user;                                          //@synthesize user=_user - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMUser *)user;
-(void)setUser:(HMUser *)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(unsigned long long)cachedHash;
@end
