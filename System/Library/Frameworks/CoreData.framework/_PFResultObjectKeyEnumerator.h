/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@interface _PFResultObjectKeyEnumerator : NSEnumerator {

	id _target;
	const id* _keys;
	unsigned long long* _referenceItems;
	NSRange _range;
	unsigned long long _index;

}
-(void)dealloc;
-(id)nextObject;
-(id)initWithArray:(const id*)arg1 forTarget:(id)arg2 withReferenceValues:(unsigned long long*)arg3 andRange:(NSRange)arg4 ;
@end

