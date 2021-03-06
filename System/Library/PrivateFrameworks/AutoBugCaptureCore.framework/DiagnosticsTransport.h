/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCListener, DiagnosticsServiceImpl, NSObject;

@interface DiagnosticsTransport : NSObject {

	NSXPCListener* listener;
	DiagnosticsServiceImpl* service;
	NSObject*<OS_dispatch_queue> transport_queue;

}
-(id)init;
-(void)shutdown;
-(void)setListeningPort:(const char*)arg1 ;
@end

