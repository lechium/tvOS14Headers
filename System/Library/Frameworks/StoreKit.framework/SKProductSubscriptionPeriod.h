/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SKProductSubscriptionPeriod : NSObject {

	id _internal;

}

@property (nonatomic,readonly) unsigned long long numberOfUnits; 
@property (nonatomic,readonly) unsigned long long unit; 
-(id)init;
-(unsigned long long)unit;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithISO8601String:(id)arg1 ;
-(unsigned long long)numberOfUnits;
-(void)_setNumberOfUnits:(unsigned long long)arg1 ;
-(void)_setUnit:(unsigned long long)arg1 ;
@end
