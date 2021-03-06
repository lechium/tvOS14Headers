/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:08 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/MAElementFilter.h>

@class KGNodeFilter, MARelation;

@interface MANodeFilter : MAElementFilter

@property (nonatomic,readonly) KGNodeFilter * kgNodeFilter; 
@property (nonatomic,readonly) MARelation * relation; 
+(BOOL)scanInstance:(out id*)arg1 withScanner:(id)arg2 ;
-(MARelation *)relation;
-(void)appendVisualStringToString:(id)arg1 ;
-(BOOL)matchesNode:(id)arg1 ;
-(KGNodeFilter *)kgNodeFilter;
@end

