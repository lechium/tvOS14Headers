/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVWeakReference, NSDictionary, NSArray, AVCaptureDataOutputDelegateCallbackHelper;

@interface AVCaptureVideoDataOutputInternal : NSObject {

	AVWeakReference* weakReference;
	NSDictionary* videoSettings;
	NSDictionary* clientVideoSettings;
	SCD_Struct_AV0 deprecatedMinFrameDuration;
	BOOL alwaysDiscardsLateVideoFrames;
	BOOL videoSettingsDimensionsOverrideEnabled;
	NSArray* availableVideoCVPixelFormatTypes;
	AVCaptureDataOutputDelegateCallbackHelper* delegateCallbackHelper;

}
-(id)init;
-(void)dealloc;
@end

