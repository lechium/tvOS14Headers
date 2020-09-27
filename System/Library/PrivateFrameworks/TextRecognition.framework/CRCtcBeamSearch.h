/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:43 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextRecognition/TextRecognition-Structs.h>
@class NSLocale;

@interface CRCtcBeamSearch : NSObject {

	LXLexiconRef _dynamicLexicon;
	NSLocale* _locale;

}

@property (assign,nonatomic) LXLexiconRef dynamicLexicon;              //@synthesize dynamicLexicon=_dynamicLexicon - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                      //@synthesize locale=_locale - In the implementation block
-(void)dealloc;
-(NSLocale *)locale;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(LXLexiconRef)dynamicLexicon;
-(void)setDynamicLexicon:(LXLexiconRef)arg1 ;
-(id)kBestPathsForInput:(id)arg1 k:(unsigned long long)arg2 beamWidth:(unsigned long long)arg3 outputProbs:(id*)arg4 outputWhitespaceRanges:(id*)arg5 error:(id*)arg6 ;
@end
