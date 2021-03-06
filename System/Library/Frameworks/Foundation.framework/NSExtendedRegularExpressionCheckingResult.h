/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSRegularExpressionCheckingResult.h>

@class NSRegularExpression;

@interface NSExtendedRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {

	NSRegularExpression* _regularExpression;
	NSRange _ranges[7];

}
-(void)dealloc;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 ;
-(NSRange)range;
-(unsigned long long)numberOfRanges;
-(BOOL)_adjustRangesWithOffset:(long long)arg1 ;
-(id)regularExpression;
-(id)initWithRanges:(NSRange*)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3 ;
-(id)rangeArray;
-(id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2 ;
@end

