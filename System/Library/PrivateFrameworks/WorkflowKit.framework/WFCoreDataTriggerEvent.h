/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/WFRecordStorage.h>

@class NSString, NSDate, NSData, WFCoreDataTrigger;

@interface WFCoreDataTriggerEvent : NSManagedObject <WFRecordStorage>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL confirmed; 
@property (nonatomic,copy) NSDate * dateCreated; 
@property (nonatomic,retain) NSData * eventInfo; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) WFCoreDataTrigger * trigger; 
+(id)fetchRequest;
-(id)descriptor;
@end

