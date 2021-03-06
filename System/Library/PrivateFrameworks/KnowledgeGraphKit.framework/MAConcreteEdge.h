/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:09 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/MAEdge.h>

@class NSMutableDictionary, NSString;

@interface MAConcreteEdge : MAEdge {

	NSMutableDictionary* _properties;
	unsigned short _domain;
	float _weight;
	NSString* _label;

}
-(unsigned short)domain;
-(id)propertyForKey:(id)arg1 ;
-(void)removePropertyForKey:(id)arg1 ;
-(id)label;
-(float)weight;
-(void)setWeight:(float)arg1 ;
-(unsigned long long)propertiesCount;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasProperties;
-(void)removeAllProperties;
-(void)setPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(id)propertyKeys;
-(id)propertyDictionary;
-(void)setLocalProperties:(id)arg1 ;
-(void)mergeProperties:(id)arg1 ;
-(unsigned long long)memoryFootprint:(id)arg1 ;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
@end

