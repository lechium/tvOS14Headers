/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:14 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class IDSService, NSObject, IDSDevice, NSString;

@interface CMSM_IDSConnection : NSObject <IDSServiceDelegate> {

	IDSService* pIdsService;
	NSObject*<OS_dispatch_queue> idsDispatchQueue;
	IDSDevice* pNearbyPairedDevice;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)updateNearbyPairedDevice;
-(id)getNearbyPairedDevice;
-(id)copyNearbyPairedDeviceUniqueID;
-(id)copyNearbyPairedDeviceName;
-(id)copyNearbyPairedDeviceModelIdentifier;
-(id)copyNearbyPairedDeviceProductName;
@end

