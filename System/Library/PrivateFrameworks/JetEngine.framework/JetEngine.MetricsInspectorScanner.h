/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:06 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/JetEngine.framework/JetEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@interface JetEngine.MetricsInspectorScanner : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	 serviceBrowser;
	 stateLock;
	 foundServices;

}
-(id)init;
-(void)dealloc;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowserWillSearch:(id)arg1 ;
@end
