/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:40 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@interface FigCaptureMachPortSendRight : NSObject {

	unsigned _port;
	BOOL _invalid;

}

@property (nonatomic,readonly) unsigned port;              //@synthesize port=_port - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(unsigned)port;
-(id)initWithPort:(unsigned)arg1 ;
@end

