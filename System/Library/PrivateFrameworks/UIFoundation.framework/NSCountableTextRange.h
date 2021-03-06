/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextRange.h>

@class NSCountableTextLocation, NSString;

@interface NSCountableTextRange : NSTextRange {

	NSRange _range;

}

@property (readonly) NSRange range;                                      //@synthesize range=_range - In the implementation block
@property (readonly) NSCountableTextLocation * location; 
@property (readonly) NSCountableTextLocation * endLocation; 
@property (copy,readonly) NSString * type; 
@property (getter=isEndingAtEOD,readonly) BOOL endingAtEOD; 
+(id)documentRange;
+(BOOL)isBaseClassTestingMode;
+(void)setBaseClassTestingMode:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEmpty;
-(NSString *)type;
-(NSRange)range;
-(id)initWithRange:(NSRange)arg1 ;
-(id)initWithLocation:(id)arg1 endLocation:(id)arg2 ;
-(id)textRangeByIntersectingWithTextRange:(id)arg1 ;
-(BOOL)containsLocation:(id)arg1 ;
-(BOOL)isEqualToTextRange:(id)arg1 ;
-(id)textRangeByFormingUnionWithTextRange:(id)arg1 ;
-(BOOL)intersectsWithTextRange:(id)arg1 ;
-(BOOL)isEndingAtEOD;
@end

