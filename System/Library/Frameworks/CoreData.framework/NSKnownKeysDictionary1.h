/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSKnownKeysDictionary.h>

@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {

	int _cd_rc;
	int _count;
	NSKnownKeysMappingStrategy* _keySearch;
	id _values[0];

}
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)initWithCoder:(id)arg1 ;
+(id)initWithObjects:(id*)arg1 forKeys:(id*)arg2 count:(unsigned long long)arg3 ;
+(id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)initWithDictionary:(id)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
+(Class)classForKeyedUnarchiver;
+(id)initForKeys:(id)arg1 ;
+(id)initWithSearchStrategy:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectEnumerator;
-(void)removeAllObjects;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(Class)classForCoder;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(BOOL)isEqualToDictionary:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(const id*)values;
-(id)allKeys;
-(id)allValues;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(void)getKeys:(id*)arg1 ;
-(void)setValues:(id*)arg1 ;
-(void)_setValues:(id*)arg1 retain:(BOOL)arg2 ;
-(const id*)knownKeyValuesPointer;
-(id)mapping;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_valueCountByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)setValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end
