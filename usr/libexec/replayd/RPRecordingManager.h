//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RPDaemonProtocol-Protocol.h"

@class NSMutableDictionary, NSString, RPClipCaptureManager, RPConnectionManager, UNUserNotificationCenter;

@interface RPRecordingManager : NSObject <RPDaemonProtocol>
{
    RPClipCaptureManager *_clipCaptureManager;	// 8 = 0x8
    _Bool _microphoneRecording;	// 16 = 0x10
    UNUserNotificationCenter *_userNotificationCenter;	// 24 = 0x18
    RPConnectionManager *_connectionManager;	// 32 = 0x20
    NSMutableDictionary *_currentAvailableExtensions;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100015bbc
@property(retain, nonatomic) NSMutableDictionary *currentAvailableExtensions; // @synthesize currentAvailableExtensions=_currentAvailableExtensions;
@property(retain, nonatomic) RPConnectionManager *connectionManager; // @synthesize connectionManager=_connectionManager;
@property(nonatomic, getter=isMicrophoneRecording) _Bool microphoneRecording; // @synthesize microphoneRecording=_microphoneRecording;
@property(retain, nonatomic) UNUserNotificationCenter *userNotificationCenter; // @synthesize userNotificationCenter=_userNotificationCenter;
- (oneway void)consumeSandboxExtension:(id)arg1 processNewConnection:(_Bool)arg2;	// IMP=0x0000000100015b6c
- (oneway void)getSystemBroadcastExtensionInfo:(CDUnknownBlockType)arg1;	// IMP=0x00000001000156e4
- (oneway void)updateProcessIDForAudioCaptureWithPID:(int)arg1;	// IMP=0x0000000100015568
- (void)processSaveToPhotos:(id)arg1 mixAudioTracks:(_Bool)arg2;	// IMP=0x0000000100015248
- (oneway void)saveVideo:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001506c
- (oneway void)saveVideoToCameraRoll:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100014e90
- (oneway void)stopAllActiveClients;	// IMP=0x0000000100014d58
- (oneway void)stopCurrentActiveSessionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100014cec
- (oneway void)macApplicationDidBecomeActiveWithContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100014bcc
- (oneway void)macApplicationDidResignActive;	// IMP=0x0000000100014ad4
- (id)getCallingConnectionClient;	// IMP=0x0000000100014a4c
- (id)getCallingConnectionBundleID;	// IMP=0x00000001000149b8
- (oneway void)generateClipWithSeconds:(double)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000147c4
- (oneway void)stopClipBufferingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000146bc
- (oneway void)startClipBufferingWithMicrophoneEnabled:(_Bool)arg1 windowSize:(struct CGSize)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100014558
- (oneway void)stopSystemRecordingWithURLHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100014448
- (oneway void)stopSystemRecordingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100014374
- (oneway void)startSystemRecordingWithContextID:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(_Bool)arg3 cameraEnabled:(_Bool)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100013fe8
- (oneway void)setBroadcastURL:(id)arg1;	// IMP=0x0000000100013f7c
- (oneway void)resumeInAppBroadcastWithWindowLayerContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100013ea0
- (oneway void)pauseInAppBroadcast;	// IMP=0x0000000100013e60
- (oneway void)stopInAppBroadcastWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100013c84
- (oneway void)startInAppBroadcastWithContextID:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(_Bool)arg3 cameraEnabled:(_Bool)arg4 listenerEndpoint:(id)arg5 withHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000001000138c0
- (oneway void)setupBroadcastWithHostBundleID:(id)arg1 broadcastExtensionBundleID:(id)arg2 broadcastConfigurationData:(id)arg3 userInfo:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000135cc
- (void)updateClient:(id)arg1 withHostBundleID:(id)arg2 broadcastExtensionBundleID:(id)arg3 broadcastConfigurationData:(id)arg4 userInfo:(id)arg5 isSystemBroadcast:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x0000000100013388
- (void)createNewBroadcastClientWithBundleID:(id)arg1 broadcastExtensionBundleID:(id)arg2 broadcastConfigurationData:(id)arg3 userInfo:(id)arg4 isSystemBroadcast:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100012ff4
- (oneway void)resumeInAppCaptureWithWindowLayerContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012f18
- (oneway void)pauseInAppCapture;	// IMP=0x0000000100012ed8
- (oneway void)stopInAppCaptureWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100012e04
- (oneway void)startInAppCaptureWithContextID:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(_Bool)arg3 cameraEnabled:(_Bool)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100012ba0
- (oneway void)discardInAppRecordingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100012b34
- (oneway void)resumeInAppRecordingWithWindowLayerContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012a58
- (oneway void)pauseInAppRecording;	// IMP=0x0000000100012a18
- (oneway void)stopInAppRecordingWithUrl:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001267c
- (oneway void)stopInAppRecordingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001256c
- (oneway void)startInAppRecordingWithContextID:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(_Bool)arg3 cameraEnabled:(_Bool)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100012308
- (void)applicationDisconnectedWithBundleID:(id)arg1 withProcessIdentifier:(int)arg2;	// IMP=0x0000000100012018
- (void)connectionManagerDidAcceptNewConnection:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0000000100011d90
- (void)setUpMemoryPressureNotification;	// IMP=0x00000001000118d8
- (id)initWithConnectionManager:(id)arg1;	// IMP=0x00000001000117dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

