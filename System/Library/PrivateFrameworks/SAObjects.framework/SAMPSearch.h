/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SAMPSearch : SADomainCommand

@property (nonatomic,copy) NSArray * constraints; 
@property (assign,nonatomic) long long maxResults; 
@property (nonatomic,copy) NSArray * searchTypes; 
@property (assign,nonatomic) BOOL strict; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)constraints;
-(void)setMaxResults:(long long)arg1 ;
-(long long)maxResults;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(void)setConstraints:(NSArray *)arg1 ;
-(NSArray *)searchTypes;
-(void)setSearchTypes:(NSArray *)arg1 ;
-(BOOL)strict;
-(void)setStrict:(BOOL)arg1 ;
@end
