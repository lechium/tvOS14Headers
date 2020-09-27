/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class APSConnection;

@interface ADAdTrackingSchedulingManager : NSObject {

	BOOL _isConfigRequestInFlight;
	id<NSObject> _storeFrontNotifyToken;
	id<NSObject> _accountChangedNotifyToken;
	APSConnection* _pushConnection;

}

@property (nonatomic,retain) id<NSObject> storeFrontNotifyToken;                  //@synthesize storeFrontNotifyToken=_storeFrontNotifyToken - In the implementation block
@property (nonatomic,retain) id<NSObject> accountChangedNotifyToken;              //@synthesize accountChangedNotifyToken=_accountChangedNotifyToken - In the implementation block
@property (nonatomic,retain) APSConnection * pushConnection;                      //@synthesize pushConnection=_pushConnection - In the implementation block
@property (assign,nonatomic) BOOL isConfigRequestInFlight;                        //@synthesize isConfigRequestInFlight=_isConfigRequestInFlight - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(APSConnection *)pushConnection;
-(void)setPushConnection:(APSConnection *)arg1 ;
-(void)handleAccountChange;
-(void)refreshConfiguration:(/*^block*/id)arg1 ;
-(void)migratePersonalizedAdsFromLAT;
-(void)handleConfiguration;
-(void)forceExpiration;
-(BOOL)isAdEnabledLocality;
-(BOOL)_shouldSaveConfig;
-(BOOL)isConfigRequestInFlight;
-(void)setIsConfigRequestInFlight:(BOOL)arg1 ;
-(id)currentBundleID;
-(id<NSObject>)storeFrontNotifyToken;
-(void)setStoreFrontNotifyToken:(id<NSObject>)arg1 ;
-(id<NSObject>)accountChangedNotifyToken;
-(void)setAccountChangedNotifyToken:(id<NSObject>)arg1 ;
@end
