/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLSessionStreamDelegate <NSURLSessionTaskDelegate>
@optional
-(void)URLSession:(id)arg1 readClosedForStreamTask:(id)arg2;
-(void)URLSession:(id)arg1 writeClosedForStreamTask:(id)arg2;
-(void)URLSession:(id)arg1 betterRouteDiscoveredForStreamTask:(id)arg2;
-(void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;

@end
