/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSUUID, NSArray, NSString, HMDHomeKitVersion, HMFProductInfo, HMDRPIdentity;

@interface HMDDeviceModel : HMDBackingStoreModelObject

@property (nonatomic,copy) NSUUID * identifier; 
@property (nonatomic,copy) NSArray * handles; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) HMDHomeKitVersion * version; 
@property (nonatomic,copy) HMFProductInfo * productInfo; 
@property (nonatomic,copy) HMDRPIdentity * rpIdentity; 
@property (nonatomic,readonly) NSArray * deviceHandles; 
+(id)properties;
+(id)schemaHashRoot;
-(BOOL)diff:(id)arg1 differingFields:(id*)arg2 ;
-(NSArray *)deviceHandles;
@end
