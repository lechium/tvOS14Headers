/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NAFuture, NSError, NSDate, HMSetting, NSNumber;

@interface _HFHomeKitSettingsVendorSettingsWriteValueTransaction : NSObject {

	BOOL _started;
	NAFuture* _settingWriteFuture;
	NSError* _error;
	NSDate* _transactionStartDate;
	id _value;
	id _previousValue;
	unsigned long long _changeType;
	HMSetting* _setting;
	NSNumber* _transactionNumber;

}

@property (nonatomic,retain) NAFuture * settingWriteFuture;                //@synthesize settingWriteFuture=_settingWriteFuture - In the implementation block
@property (nonatomic,retain) NSError * error;                              //@synthesize error=_error - In the implementation block
@property (assign,getter=hasStarted,nonatomic) BOOL started;               //@synthesize started=_started - In the implementation block
@property (nonatomic,readonly) NSDate * transactionStartDate;              //@synthesize transactionStartDate=_transactionStartDate - In the implementation block
@property (nonatomic,copy,readonly) id value;                              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) id previousValue;                      //@synthesize previousValue=_previousValue - In the implementation block
@property (nonatomic,readonly) unsigned long long changeType;              //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) HMSetting * setting;                        //@synthesize setting=_setting - In the implementation block
@property (nonatomic,readonly) NSNumber * transactionNumber;               //@synthesize transactionNumber=_transactionNumber - In the implementation block
-(id)description;
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)value;
-(BOOL)hasStarted;
-(unsigned long long)changeType;
-(NSNumber *)transactionNumber;
-(void)setStarted:(BOOL)arg1 ;
-(id)previousValue;
-(HMSetting *)setting;
-(id)initWithSetting:(id)arg1 previousValue:(id)arg2 value:(id)arg3 changeType:(unsigned long long)arg4 ;
-(NAFuture *)settingWriteFuture;
-(id)descriptionBuilder;
-(void)setSettingWriteFuture:(NAFuture *)arg1 ;
-(NSDate *)transactionStartDate;
@end
