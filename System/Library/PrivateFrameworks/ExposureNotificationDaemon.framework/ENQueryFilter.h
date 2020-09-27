/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:44:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ENQueryFilter : NSObject {

	char* _filterBuffer;
	unsigned long long* _hashSalts;
	unsigned long long _bufferSize;
	unsigned long long _hashCount;

}

@property (nonatomic,readonly) unsigned long long bufferSize;              //@synthesize bufferSize=_bufferSize - In the implementation block
@property (nonatomic,readonly) unsigned long long hashCount;               //@synthesize hashCount=_hashCount - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)bufferSize;
-(id)initWithBufferSize:(unsigned long long)arg1 hashCount:(unsigned long long)arg2 ;
-(void)addPossibleRPI:(const void*)arg1 ;
-(BOOL)shouldIgnoreRPI:(const void*)arg1 ;
-(unsigned long long)hashCount;
@end
