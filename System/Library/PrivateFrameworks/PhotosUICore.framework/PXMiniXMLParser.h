/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:11 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSScanner, NSCharacterSet;

@interface PXMiniXMLParser : NSObject {

	/*^block*/id _parsedCharactersBlock;
	/*^block*/id _parsedTagBlock;
	/*^block*/id _parsedEntityBlock;
	/*^block*/id _parsedErrorBlock;
	NSScanner* __scanner;
	NSCharacterSet* __syntaxMarkerCharactersSet;

}

@property (nonatomic,readonly) NSScanner * _scanner;                                     //@synthesize _scanner=__scanner - In the implementation block
@property (nonatomic,readonly) NSCharacterSet * _syntaxMarkerCharactersSet;              //@synthesize _syntaxMarkerCharactersSet=__syntaxMarkerCharactersSet - In the implementation block
@property (nonatomic,copy) id parsedCharactersBlock;                                     //@synthesize parsedCharactersBlock=_parsedCharactersBlock - In the implementation block
@property (nonatomic,copy) id parsedTagBlock;                                            //@synthesize parsedTagBlock=_parsedTagBlock - In the implementation block
@property (nonatomic,copy) id parsedEntityBlock;                                         //@synthesize parsedEntityBlock=_parsedEntityBlock - In the implementation block
@property (nonatomic,copy) id parsedErrorBlock;                                          //@synthesize parsedErrorBlock=_parsedErrorBlock - In the implementation block
-(id)init;
-(id)initWithString:(id)arg1 ;
-(void)parse;
-(NSScanner *)_scanner;
-(id)parsedErrorBlock;
-(void)setParsedErrorBlock:(id)arg1 ;
-(BOOL)_isAtEnd;
-(BOOL)_parseCharacters;
-(BOOL)_parseTag;
-(BOOL)_parseEntity;
-(BOOL)_tryScanningUsingBlock:(/*^block*/id)arg1 ;
-(id)parsedCharactersBlock;
-(void)setParsedCharactersBlock:(id)arg1 ;
-(id)parsedTagBlock;
-(void)setParsedTagBlock:(id)arg1 ;
-(id)parsedEntityBlock;
-(void)setParsedEntityBlock:(id)arg1 ;
-(NSCharacterSet *)_syntaxMarkerCharactersSet;
@end

