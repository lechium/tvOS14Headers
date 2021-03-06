/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:56 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMIAnalytics : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(void)sendEventForFaceEvent:(id)arg1 homePersonManagerUUID:(id)arg2 camera:(id)arg3 ;
+(void)sendEventForPersonsModels:(id)arg1 ;
+(long long)bucketForValue:(long long)arg1 usingBuckets:(id)arg2 ;
+(void)sendEventForClusteringTask:(id)arg1 ;
@end

