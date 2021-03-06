/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSDictionary;

@interface SALogSignatureWithABC : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * subType; 
@property (nonatomic,copy) NSDictionary * subTypeContext; 
+(id)logSignatureWithABC;
+(id)logSignatureWithABCWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)subType;
-(void)setSubType:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSDictionary *)subTypeContext;
-(void)setSubTypeContext:(NSDictionary *)arg1 ;
@end

