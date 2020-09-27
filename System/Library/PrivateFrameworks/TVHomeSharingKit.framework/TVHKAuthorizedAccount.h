/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:18 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSData;

@interface TVHKAuthorizedAccount : NSObject {

	NSNumber* _userIdentifier;
	NSData* _keyList;

}

@property (nonatomic,copy) NSNumber * userIdentifier;              //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSData * keyList;                       //@synthesize keyList=_keyList - In the implementation block
-(id)new;
-(id)description;
-(id)init;
-(NSNumber *)userIdentifier;
-(void)setUserIdentifier:(NSNumber *)arg1 ;
-(NSData *)keyList;
-(id)initWithUserIdentifier:(id)arg1 keyList:(id)arg2 ;
-(void)setKeyList:(NSData *)arg1 ;
@end
