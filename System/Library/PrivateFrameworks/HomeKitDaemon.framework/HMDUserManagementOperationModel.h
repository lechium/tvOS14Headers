/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSNumber, HAPPairingIdentity, HMFPairingIdentity, NSDate, NSArray;

@interface HMDUserManagementOperationModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSNumber * operationType; 
@property (nonatomic,retain) HAPPairingIdentity * userPairingIdentity; 
@property (nonatomic,retain) HMFPairingIdentity * accessoryPairingIdentity; 
@property (nonatomic,retain) HAPPairingIdentity * ownerPairingIdentity; 
@property (nonatomic,retain) NSDate * expirationDate; 
@property (nonatomic,retain) NSArray * dependencies; 
+(id)properties;
-(id)dependentUUIDs;
@end
