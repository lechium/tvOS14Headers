/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>

@class RPBroadcastExtensionHostContext, NSXPCListenerEndpoint;

@interface RPBroadcastHostViewController : _UIRemoteViewController {

	RPBroadcastExtensionHostContext* _hostContext;
	NSXPCListenerEndpoint* _listenerEndpoint;

}

@property (nonatomic,retain) RPBroadcastExtensionHostContext * hostContext;              //@synthesize hostContext=_hostContext - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * listenerEndpoint;                   //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(RPBroadcastExtensionHostContext *)hostContext;
-(void)setListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)setHostContext:(RPBroadcastExtensionHostContext *)arg1 ;
-(oneway void)completeSetupWithBroadcastURL:(id)arg1 ;
-(void)updateBroadcastHandlerListenerEndpoint;
@end
