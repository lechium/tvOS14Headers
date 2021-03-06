/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/OSLogEventDecomposedMessage.h>

@class NSDictionary, NSArray;

@interface OSLogDeserializedEventDecomposedMessage : OSLogEventDecomposedMessage {

	NSDictionary* _backingDict;
	NSArray* _segments;

}

@property (nonatomic,readonly) NSArray * segments;                      //@synthesize segments=_segments - In the implementation block
@property (nonatomic,readonly) NSDictionary * backingDict;              //@synthesize backingDict=_backingDict - In the implementation block
-(unsigned long long)state;
-(NSArray *)segments;
-(id)argumentAtIndex:(unsigned long long)arg1 ;
-(id)placeholderAtIndex:(unsigned long long)arg1 ;
-(id)literalPrefixAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)placeholderCount;
-(id)initWithDict:(id)arg1 metadata:(id)arg2 ;
-(NSDictionary *)backingDict;
@end

