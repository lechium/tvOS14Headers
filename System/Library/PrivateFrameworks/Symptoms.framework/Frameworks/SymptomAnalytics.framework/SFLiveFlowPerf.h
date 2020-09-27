/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, NSDate, SFFlow;

@interface SFLiveFlowPerf : NSManagedObject

@property (nonatomic,copy) NSNumber * connAttempts; 
@property (nonatomic,copy) NSNumber * connSuccesses; 
@property (nonatomic,copy) NSNumber * kind; 
@property (nonatomic,copy) NSNumber * overallTime; 
@property (nonatomic,copy) NSString * tag; 
@property (nonatomic,copy) NSDate * timeStamp; 
@property (nonatomic,copy) NSNumber * timesThresholded; 
@property (nonatomic,copy) NSString * tmpID; 
@property (nonatomic,copy) NSNumber * txFailPackets; 
@property (nonatomic,copy) NSNumber * txPackets; 
@property (nonatomic,copy) NSNumber * txReTxInterval; 
@property (nonatomic,copy) NSNumber * txReTxPackets; 
@property (nonatomic,copy) NSNumber * usecsEstabTime; 
@property (nonatomic,retain) SFFlow * hasFlow; 
+(id)entityName;
+(id)fetchRequest;
@end
