/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/RLMObject.h>

@class NSString, NSDate, RLMLinkingObjects;

@interface WFRealmWorkflowQuarantine : RLMObject {

	NSString* _sourceAppIdentifier;
	NSDate* _importDate;
	RLMLinkingObjects* _workflows;

}

@property (copy) NSString * sourceAppIdentifier;                 //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
@property (retain) NSDate * importDate;                          //@synthesize importDate=_importDate - In the implementation block
@property (readonly) RLMLinkingObjects * workflows;              //@synthesize workflows=_workflows - In the implementation block
+(id)className;
+(id)requiredProperties;
+(id)defaultPropertyValues;
+(id)linkingObjectsProperties;
-(void)setImportDate:(NSDate *)arg1 ;
-(void)setSourceAppIdentifier:(NSString *)arg1 ;
-(NSString *)sourceAppIdentifier;
-(NSDate *)importDate;
-(RLMLinkingObjects *)workflows;
@end
