/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class WFCoreDataCollection, WFCoreDataWorkflow;

@interface WFCoreDataWorkflowIcon : NSManagedObject

@property (assign,nonatomic) long long backgroundColorValue; 
@property (assign,nonatomic) long long glyphNumber; 
@property (nonatomic,retain) WFCoreDataCollection * collection; 
@property (nonatomic,retain) WFCoreDataWorkflow * workflow; 
+(id)fetchRequest;
@end

