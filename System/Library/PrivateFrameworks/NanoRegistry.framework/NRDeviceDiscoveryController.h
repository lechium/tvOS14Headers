/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface NRDeviceDiscoveryController : NSObject

@property (nonatomic,readonly) NSArray * devices; 
+(id)sharedInstance;
-(id)init;
-(void)end;
-(void)begin;
-(NSArray *)devices;
-(void)overrideSignalStrengthLimit:(long long)arg1 ;
@end
