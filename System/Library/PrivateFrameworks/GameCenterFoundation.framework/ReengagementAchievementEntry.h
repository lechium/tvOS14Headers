/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSNumber;

@interface ReengagementAchievementEntry : NSManagedObject

@property (nonatomic,copy) NSString * bundleID; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSDate * lastReportedDate; 
@property (nonatomic,copy) NSNumber * percentComplete; 
@property (nonatomic,copy) NSString * playerID; 
+(id)fetchRequest;
@end
