/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:33 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <AppStoreKit/AppStoreKit-Structs.h>
#import <libobjc.A.dylib/NSTextStorageDelegate.h>
#import <libobjc.A.dylib/AMPWritingDirectionContentProtocol.h>

@class NSTextStorage;

@interface AMPLanguageAwareTextStorage : NSObject <NSTextStorageDelegate, AMPWritingDirectionContentProtocol> {

	 textStorage;
	 originalTextStorageDelegate;
	 languageAwareString;

}

@property (retain,nonatomic) NSTextStorage * textStorage; 
-(id)init;
-(NSTextStorage *)textStorage;
-(void)setTextStorage:(NSTextStorage *)arg1 ;
-(void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(NSRange)arg3 changeInLength:(long long)arg4 ;
-(void)textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(NSRange)arg3 changeInLength:(long long)arg4 ;
-(long long)writingDirectionOfLine:(long long)arg1 maximumLinesShown:(long long)arg2 withWidth:(double)arg3 lineBreakMode:(long long)arg4 cacheLayoutInfo:(BOOL)arg5 ;
-(id)writingDirectionsQuantities;
-(id)initWithTextStorage:(id)arg1 ;
@end

