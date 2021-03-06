/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVExternalDeviceDelegate, OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class AVWeakReference, NSArray, AVDispatchOnce, NSData, NSObject, NSMutableDictionary;

@interface AVExternalDeviceInternal : NSObject {

	OpaqueFigEndpointRef _figEndpoint;
	id<AVExternalDeviceDelegate> _delegate;
	AVWeakReference* _weakReference;
	NSArray* _HIDs;
	AVDispatchOnce* _makeHIDsOnlyOnce;
	NSData* _MFiCertSerial;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _oemIcons;
	NSArray* _screenInfo;
	NSObject*<OS_dispatch_queue> _viewAreasQueue;
	NSMutableDictionary* _currentViewAreas;
	AVDispatchOnce* _makeIconsOnlyOnce;

}
@end

