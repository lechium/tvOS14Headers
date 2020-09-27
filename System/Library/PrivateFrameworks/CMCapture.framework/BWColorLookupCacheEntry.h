/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface BWColorLookupCacheEntry : NSObject {

	NSData* _foregroundColorLookupTable;
	NSData* _backgroundColorLookupTable;

}

@property (nonatomic,retain,readonly) NSData * foregroundColorLookupTable;              //@synthesize foregroundColorLookupTable=_foregroundColorLookupTable - In the implementation block
@property (nonatomic,retain,readonly) NSData * backgroundColorLookupTable;              //@synthesize backgroundColorLookupTable=_backgroundColorLookupTable - In the implementation block
-(void)dealloc;
-(NSData *)foregroundColorLookupTable;
-(NSData *)backgroundColorLookupTable;
-(id)initWithForegroundColorLookupTable:(id)arg1 backgroundColorLookupTable:(id)arg2 ;
@end
