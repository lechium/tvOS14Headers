//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RPSessionDelegate-Protocol.h"

@class NSString, RPBroadcastSession, RPCaptureSession, RPRecordSession, RPSystemBroadcastSession, RPSystemRecordSession;
@protocol RPClientProtocol;

@interface RPClient : NSObject <RPSessionDelegate>
{
    RPRecordSession *_recordSession;	// 8 = 0x8
    RPCaptureSession *_captureSession;	// 16 = 0x10
    RPBroadcastSession *_broadcastSession;	// 24 = 0x18
    RPSystemRecordSession *_systemRecordSession;	// 32 = 0x20
    RPSystemBroadcastSession *_systemBroadcastSession;	// 40 = 0x28
    int _currentActiveSession;	// 48 = 0x30
    int _clientPID;	// 52 = 0x34
    NSString *_clientBundleID;	// 56 = 0x38
    id <RPClientProtocol> _clientProxy;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100026a38
@property(nonatomic) int clientPID; // @synthesize clientPID=_clientPID;
@property(retain, nonatomic) id <RPClientProtocol> clientProxy; // @synthesize clientProxy=_clientProxy;
@property(retain, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
- (void)updateProcessIDForAudioCaptureWithPID:(int)arg1;	// IMP=0x00000001000268bc
- (void)handleMemoryWarningForCurrentActiveSession;	// IMP=0x000000010002673c
- (void)stopSystemRecordingSessionWithURLHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100026550
- (void)stopSystemRecordingSessionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100026388
- (void)startSystemRecordingSessionWithContextID:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabaled:(_Bool)arg3 cameraEnabled:(_Bool)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100025ffc
- (void)sessionDidStop;	// IMP=0x0000000100025ff4
- (void)resumeInAppBroadcastWithContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100025cdc
- (void)updateBroadcastURL:(id)arg1;	// IMP=0x0000000100025c90
- (void)pauseInAppBroadcast;	// IMP=0x0000000100025bb8
- (void)stopInAppBroadcastSessionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000259f0
- (void)startInAppBroadcastSessionWithContextID:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabaled:(_Bool)arg3 cameraEnabled:(_Bool)arg4 listenerEndpoint:(id)arg5 withHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000001000256d4
- (void)setupInAppBroadcastExtensionBundleID:(id)arg1 broadcastConfigurationData:(id)arg2 userInfo:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100025364
- (void)resumeInAppCaptureWithContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002504c
- (void)pauseInAppCapture;	// IMP=0x0000000100024f74
- (void)stopInAppCaptureSessionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100024dac
- (void)startInAppCaptureSessionWithContextID:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabaled:(_Bool)arg3 cameraEnabled:(_Bool)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000249e0
- (void)discardInAppRecordingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000247c4
- (void)resumeInAppRecordingWithContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000244ac
- (void)pauseInAppRecording;	// IMP=0x00000001000243d4
- (void)stopInAppRecordingSessionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000241e8
- (void)startInAppRecordingSessionWithContextID:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabaled:(_Bool)arg3 cameraEnabled:(_Bool)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100023e1c
- (void)stopCurrentActiveSessionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100023ac4
- (void)notifyClientWithOutputURL:(id)arg1 error:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000238e0
- (void)resumeCurrentActiveSessionWithContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000236d8
- (void)appAudioCaptureOutputHandlerForActiveSession:(id)arg1;	// IMP=0x00000001000236d4
- (void)reportCameraUsage:(long long)arg1;	// IMP=0x00000001000235a4
- (void)pauseCurrentActiveSession;	// IMP=0x00000001000233b4
- (void)dealloc;	// IMP=0x00000001000231f4
- (void)invalidate;	// IMP=0x00000001000230dc
- (id)initWithConnection:(id)arg1 clientProxy:(id)arg2 bundleIdentifier:(id)arg3;	// IMP=0x0000000100022f00

@end

