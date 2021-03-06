/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SignpostSupport/SignpostEvent.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface SignpostStreamEvent : SignpostEvent {

	unsigned long long _totalFrameCount;
	NSObject*<OS_dispatch_source> _timeoutSource;
	unsigned long long _serialNumber;

}

@property (assign,nonatomic) unsigned long long _totalFrameCount;                      //@synthesize totalFrameCount=_totalFrameCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutSource;              //@synthesize timeoutSource=_timeoutSource - In the implementation block
@property (assign,nonatomic) unsigned long long serialNumber;                          //@synthesize serialNumber=_serialNumber - In the implementation block
+(id)serializationTypeNumber;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)serialNumber;
-(NSObject*<OS_dispatch_source>)timeoutSource;
-(void)setTimeoutSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setSerialNumber:(unsigned long long)arg1 ;
-(BOOL)_hasTotalFrames;
-(void)set_totalFrameCount:(unsigned long long)arg1 ;
-(unsigned long long)_totalFrameCount;
-(id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg1 shouldRedact:(BOOL)arg2 ;
@end

