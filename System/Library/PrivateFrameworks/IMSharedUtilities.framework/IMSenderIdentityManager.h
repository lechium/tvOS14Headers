/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMSenderIdentityManager : NSObject
+(id)sharedInstance;
+(BOOL)isTUSenderIdentity:(id)arg1 equalToSubscriptionContext:(id)arg2 ;
-(id)init;
-(id)bestSenderIdentityForHandleIDs:(id)arg1 ;
-(id)bestSenderIdentityForHandleID:(id)arg1 contact:(id)arg2 ;
@end
