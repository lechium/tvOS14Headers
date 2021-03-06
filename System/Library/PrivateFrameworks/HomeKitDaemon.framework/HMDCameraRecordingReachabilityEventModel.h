/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSNumber, NSDate;

@interface HMDCameraRecordingReachabilityEventModel : HMBModel

@property (retain) NSNumber * reachableField; 
@property (retain) NSDate * dateOfOccurrence; 
@property (assign) BOOL reachable; 
+(id)hmbProperties;
+(id)hmbExternalRecordType;
-(id)createEvent;
-(void)setReachable:(BOOL)arg1 ;
-(BOOL)reachable;
@end

