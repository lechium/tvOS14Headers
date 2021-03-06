/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:53 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSMutableArray, HMFUnfairLock;

@interface HMIVideoEventBuffer : HMFObject {

	NSMutableArray* _data;
	HMFUnfairLock* _lock;
	long long _maxCapacity;

}

@property (readonly) unsigned long long count; 
-(id)description;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(id)initWithMaxCapacity:(long long)arg1 ;
-(id)objectsInTimeRange:(SCD_Struct_HM4)arg1 includeEnd:(BOOL)arg2 ;
-(id)extractObjectsInTimeRange:(SCD_Struct_HM4)arg1 ;
-(id)neighborsOfObject:(id)arg1 ;
@end

