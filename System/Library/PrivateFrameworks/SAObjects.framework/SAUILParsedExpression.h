/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SAUILParseableExpression, NSString;

@interface SAUILParsedExpression : SADomainObject

@property (nonatomic,retain) SAUILParseableExpression * parseableExpression; 
@property (nonatomic,copy) NSString * parsedOutput; 
+(id)parsedExpression;
+(id)parsedExpressionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUILParseableExpression *)parseableExpression;
-(void)setParseableExpression:(SAUILParseableExpression *)arg1 ;
-(NSString *)parsedOutput;
-(void)setParsedOutput:(NSString *)arg1 ;
@end

