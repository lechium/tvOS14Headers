/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CBAttribute.h>

@class CBPeripheral, NSArray, NSNumber;

@interface CBService : CBAttribute {

	BOOL _isPrimary;
	CBPeripheral* _peripheral;
	NSArray* _includedServices;
	NSArray* _characteristics;
	NSNumber* _startHandle;
	NSNumber* _endHandle;

}

@property (assign,nonatomic) BOOL isPrimary;                           //@synthesize isPrimary=_isPrimary - In the implementation block
@property (retain) NSArray * includedServices;                         //@synthesize includedServices=_includedServices - In the implementation block
@property (retain) NSArray * characteristics;                          //@synthesize characteristics=_characteristics - In the implementation block
@property (nonatomic,readonly) NSNumber * startHandle;                 //@synthesize startHandle=_startHandle - In the implementation block
@property (nonatomic,readonly) NSNumber * endHandle;                   //@synthesize endHandle=_endHandle - In the implementation block
@property (nonatomic,readonly) CBPeripheral * peripheral;              //@synthesize peripheral=_peripheral - In the implementation block
-(id)description;
-(void)invalidate;
-(id)initWithPeripheral:(id)arg1 dictionary:(id)arg2 ;
-(void)setCharacteristics:(NSArray *)arg1 ;
-(NSNumber *)startHandle;
-(NSNumber *)endHandle;
-(NSArray *)includedServices;
-(void)setIncludedServices:(NSArray *)arg1 ;
-(CBPeripheral *)peripheral;
-(id)handleIncludedServicesDiscovered:(id)arg1 ;
-(id)handleCharacteristicsDiscovered:(id)arg1 ;
-(BOOL)isPrimary;
-(void)setIsPrimary:(BOOL)arg1 ;
-(NSArray *)characteristics;
@end
