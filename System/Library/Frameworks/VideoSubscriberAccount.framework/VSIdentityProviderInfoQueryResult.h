/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VSIdentityProvider, NSString;

@interface VSIdentityProviderInfoQueryResult : NSObject {

	BOOL _isInSetTopBoxMode;
	VSIdentityProvider* _identityProvider;
	NSString* _designatedAppBundleIdentifier;

}

@property (nonatomic,copy) VSIdentityProvider * identityProvider;                 //@synthesize identityProvider=_identityProvider - In the implementation block
@property (nonatomic,copy) NSString * designatedAppBundleIdentifier;              //@synthesize designatedAppBundleIdentifier=_designatedAppBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isInSetTopBoxMode;                              //@synthesize isInSetTopBoxMode=_isInSetTopBoxMode - In the implementation block
-(id)description;
-(VSIdentityProvider *)identityProvider;
-(void)setIdentityProvider:(VSIdentityProvider *)arg1 ;
-(void)setIsInSetTopBoxMode:(BOOL)arg1 ;
-(BOOL)isInSetTopBoxMode;
-(NSString *)designatedAppBundleIdentifier;
-(void)setDesignatedAppBundleIdentifier:(NSString *)arg1 ;
@end

