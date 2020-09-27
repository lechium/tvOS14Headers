/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WFDefaultShortcut : NSObject {

	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (getter=isAlwaysVisibleOnWatch,nonatomic,readonly) BOOL alwaysVisibleOnWatch; 
+(id)allDefaultShortcuts;
-(id)description;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isAlwaysVisibleOnWatch;
-(id)workflowRecordWithError:(id*)arg1 ;
-(long long)relevanceWithContext:(id)arg1 ;
@end
