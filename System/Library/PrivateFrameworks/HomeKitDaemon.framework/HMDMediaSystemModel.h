/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSString, NSArray, NSData;

@interface HMDMediaSystemModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,copy) NSString * configuredName; 
@property (nonatomic,copy) NSArray * mediaSystemComponents; 
@property (nonatomic,retain) NSData * symptoms; 
+(id)properties;
+(id)schemaHashRoot;
-(id)dependentUUIDs;
@end

