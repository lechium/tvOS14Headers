/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CHTokenizedTextResult, NSString;

@interface CHContextualTextResult : NSObject {

	CHTokenizedTextResult* _textResult;
	NSString* _terminatingSpecialCharacter;

}

@property (nonatomic,retain) CHTokenizedTextResult * textResult;                  //@synthesize textResult=_textResult - In the implementation block
@property (nonatomic,retain) NSString * terminatingSpecialCharacter;              //@synthesize terminatingSpecialCharacter=_terminatingSpecialCharacter - In the implementation block
+(id)defaultWordTerminationCharacterForLocale:(id)arg1 ;
-(void)dealloc;
-(CHTokenizedTextResult *)textResult;
-(void)setTextResult:(CHTokenizedTextResult *)arg1 ;
-(id)initWithTextResult:(id)arg1 terminatingSpecialCharacter:(id)arg2 ;
-(NSString *)terminatingSpecialCharacter;
-(void)setTerminatingSpecialCharacter:(NSString *)arg1 ;
@end

