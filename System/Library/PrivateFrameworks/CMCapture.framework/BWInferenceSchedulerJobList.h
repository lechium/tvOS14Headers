/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:40 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMapTable;

@interface BWInferenceSchedulerJobList : NSObject <NSFastEnumeration> {

	unsigned long long _jobCount;
	unsigned long long _mutations;
	SCD_Struct_BW85* _orderedJobs;
	NSMapTable* _jobIndexByProvider;

}

@property (readonly) unsigned long long count; 
-(void)dealloc;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BW84*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(SCD_Struct_BW85*)jobAtIndex:(unsigned long long)arg1 ;
@end
