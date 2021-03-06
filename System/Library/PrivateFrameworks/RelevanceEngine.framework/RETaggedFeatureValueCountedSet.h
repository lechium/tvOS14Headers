/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:15 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RETaggedFeatureValueCountedSet : NSObject <NSCopying> {

	CFBagRef _bag;

}

@property (readonly) unsigned long long count; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)enumerateFeatureValuesUsingBlock:(/*^block*/id)arg1 ;
-(void)addFeatureValue:(unsigned long long)arg1 ;
-(void)removeFeatureValue:(unsigned long long)arg1 ;
-(unsigned long long)countForFeatureValue:(unsigned long long)arg1 ;
-(BOOL)containsFeatureValue:(unsigned long long)arg1 ;
@end

