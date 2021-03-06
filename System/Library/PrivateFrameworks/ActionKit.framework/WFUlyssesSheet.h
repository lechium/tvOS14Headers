/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSDictionary;

@interface WFUlyssesSheet : MTLModel <MTLJSONSerializing, WFNaming, NSSecureCoding> {

	NSString* _identifier;
	NSString* _title;
	NSString* _text;
	NSArray* _keywords;
	NSArray* _notes;

}

@property (nonatomic,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSArray * keywords;                               //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,readonly) NSArray * notes;                                  //@synthesize notes=_notes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * wfName; 
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)allowedSecureCodingClassesByPropertyKey;
-(NSString *)identifier;
-(NSString *)title;
-(NSArray *)keywords;
-(NSString *)text;
-(NSArray *)notes;
-(NSString *)wfName;
@end

