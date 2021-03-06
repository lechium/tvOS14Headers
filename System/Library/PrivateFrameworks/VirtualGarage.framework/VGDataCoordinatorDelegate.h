/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VirtualGarage.framework/VirtualGarage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class VGVehicle, NSArray;


@protocol VGDataCoordinatorDelegate
@property (nonatomic,readonly) VGVehicle * selectedVehicle; 
@property (nonatomic,readonly) NSArray * vehicles; 
@required
-(NSArray *)vehicles;
-(void)dataCoordinator:(id)arg1 wantsToUpdateVehicle:(id)arg2 syncAcrossDevices:(BOOL)arg3;
-(VGVehicle *)selectedVehicle;
-(void)dataCoordinator:(id)arg1 wantsToSelectVehicle:(id)arg2;
-(void)dataCoordinator:(id)arg1 didUpdateUnpairedVehicles:(id)arg2;
-(void)dataCoordinatorDidUpdateInstalledApps:(id)arg1;

@end

