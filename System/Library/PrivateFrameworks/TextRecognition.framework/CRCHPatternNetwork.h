/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:42 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextRecognition/TextRecognition-Structs.h>
@class NSDictionary;

@interface CRCHPatternNetwork : NSObject {

	CRCHNetwork* _network;
	NSDictionary* _symbols;
	NSDictionary* _startEdges;
	NSDictionary* _startCursorForContentTypes;

}
+(id)patternToSymbolMap;
+(id)cursorByAdvancingWithString:(id)arg1 fromCursor:(id)arg2 inNetwork:(id)arg3 ;
+(id)kDefaultPatternsPlusUrlsAndEmails;
+(id)kDefaultPatterns;
+(id)kEmailPatterns;
+(id)kUrlPatterns;
+(id)rootCursorForContentType:(int)arg1 inNetwork:(id)arg2 ;
+(id)cursorByAdvancingWithSymbol:(id)arg1 fromCursor:(id)arg2 inNetwork:(id)arg3 ;
+(BOOL)isFinalCursor:(id)arg1 inNetwork:(id)arg2 ;
-(void)dealloc;
-(id)initWithFile:(id)arg1 ;
-(id)advanceCursor:(id)arg1 withSymbol:(unsigned long long)arg2 ;
@end
