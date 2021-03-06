/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUIAddContentToView : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * status; 
@property (nonatomic,copy) NSString * targetViewId; 
+(id)addContentToView;
+(id)addContentToViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)status;
-(id)groupIdentifier;
-(void)setStatus:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)targetViewId;
-(void)setTargetViewId:(NSString *)arg1 ;
@end

