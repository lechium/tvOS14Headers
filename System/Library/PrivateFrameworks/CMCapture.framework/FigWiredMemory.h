/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:38 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@interface FigWiredMemory : NSObject {

	void* _bytes;
	unsigned long long _length;
	unsigned long long _roundedLength;
	BOOL _isWired;

}

@property (nonatomic,readonly) void* bytes;                            //@synthesize bytes=_bytes - In the implementation block
@property (nonatomic,readonly) unsigned long long length;              //@synthesize length=_length - In the implementation block
+(void)initialize;
-(void)dealloc;
-(unsigned long long)length;
-(void*)bytes;
-(id)initWithLength:(unsigned long long)arg1 ;
@end

