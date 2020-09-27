/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:51 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SIRINLUSystemDialogAct.h>

@protocol SIRINLUUserDialogAct;
@class NSString;

@interface SIRINLUSystemOffered : NSObject <SIRINLUSystemDialogAct> {

	NSString* renderedText;
	id<SIRINLUUserDialogAct> _offeredAct;

}

@property (nonatomic,retain) id<SIRINLUUserDialogAct> offeredAct;              //@synthesize offeredAct=_offeredAct - In the implementation block
@property (nonatomic,retain) NSString * renderedText; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)renderedText;
-(void)setRenderedText:(NSString *)arg1 ;
-(id<SIRINLUUserDialogAct>)offeredAct;
-(id)initWithOfferedAct:(id)arg1 ;
-(void)setOfferedAct:(id<SIRINLUUserDialogAct>)arg1 ;
@end
