/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSAttributedStringReplacement : NSObject {

	long long _index;
	id _argument;
	long long _argumentKind;
	NSRange _specifierRangeInFormatString;
	NSRange _replacementRangeInResult;

}

@property (readonly) long long index;                                   //@synthesize index=_index - In the implementation block
@property (readonly) NSRange specifierRangeInFormatString;              //@synthesize specifierRangeInFormatString=_specifierRangeInFormatString - In the implementation block
@property (readonly) NSRange replacementRangeInResult;                  //@synthesize replacementRangeInResult=_replacementRangeInResult - In the implementation block
@property (readonly) id argument;                                       //@synthesize argument=_argument - In the implementation block
@property (readonly) long long argumentKind;                            //@synthesize argumentKind=_argumentKind - In the implementation block
+(id)_replacementsFromMetadataArray:(id)arg1 ;
-(void)dealloc;
-(long long)index;
-(NSRange)replacementRangeInResult;
-(long long)argumentKind;
-(id)argument;
-(id)_initWithMetadata:(id)arg1 ;
-(NSRange)specifierRangeInFormatString;
@end

