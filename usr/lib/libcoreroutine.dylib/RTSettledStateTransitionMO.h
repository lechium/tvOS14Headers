/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate;

@interface RTSettledStateTransitionMO : NSManagedObject

@property (nonatomic,copy) NSNumber * transitionFromType; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSNumber * transitionToType; 
+(id)fetchRequest;
+(id)managedObjectWithSettledStateTransition:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end
