/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <CoreFoundation/NSArray.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface _PASLazyArrayBase : NSArray <NSFastEnumeration>
-(id)objectsAtIndexes:(id)arg1 ;
-(id)sortedArrayFromRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(BOOL)isEqualToArray:(id)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(id)arrayByAddingObject:(id)arg1 ;
-(id)arrayByAddingObjectsFromArray:(id)arg1 ;
@end

