/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKHealthService, NSLock;

@interface HKHealthServiceSession : NSObject {

	HKHealthService* _service;
	NSLock* _propertyLock;
	unsigned long long _sessionIdentifier;
	/*^block*/id _sessionHandler;
	/*^block*/id _characteristicsHandler;

}

@property (nonatomic,retain) NSLock * propertyLock;                             //@synthesize propertyLock=_propertyLock - In the implementation block
@property (assign,nonatomic) unsigned long long sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy) id sessionHandler;                                   //@synthesize sessionHandler=_sessionHandler - In the implementation block
@property (nonatomic,copy) id characteristicsHandler;                           //@synthesize characteristicsHandler=_characteristicsHandler - In the implementation block
@property (nonatomic,readonly) HKHealthService * service;                       //@synthesize service=_service - In the implementation block
-(HKHealthService *)service;
-(id)initWithService:(id)arg1 ;
-(unsigned long long)sessionIdentifier;
-(void)setSessionIdentifier:(unsigned long long)arg1 ;
-(NSLock *)propertyLock;
-(void)setPropertyLock:(NSLock *)arg1 ;
-(id)sessionHandler;
-(void)setSessionHandler:(id)arg1 ;
-(id)characteristicsHandler;
-(void)setCharacteristicsHandler:(id)arg1 ;
@end
