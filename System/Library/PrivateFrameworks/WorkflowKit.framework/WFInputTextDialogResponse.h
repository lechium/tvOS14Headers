/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFDialogResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFInputTextDialogResponse : WFDialogResponse <NSSecureCoding> {

	NSString* _inputtedText;

}

@property (nonatomic,copy,readonly) NSString * inputtedText;              //@synthesize inputtedText=_inputtedText - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInputtedText:(id)arg1 cancelled:(BOOL)arg2 ;
-(NSString *)inputtedText;
@end
