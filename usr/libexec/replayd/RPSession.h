//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RPApplicationStateObserver-Protocol.h"
#import "RPSystemStateObserver-Protocol.h"

@class FBSDisplayLayoutMonitor, NSDate, NSNumber, NSString, RPApplicationStateMonitor, RPReportingAgent;
@protocol RPClientProtocol, RPSessionDelegate;

@interface RPSession : NSObject <RPSystemStateObserver, RPApplicationStateObserver>
{
    int _callingPID;	// 8 = 0x8
    id <RPClientProtocol> _clientProxy;	// 16 = 0x10
    id <RPSessionDelegate> _delegate;	// 24 = 0x18
    CDStruct_1b6d18a9 _lastSampleTimestamp;	// 32 = 0x20
    CDStruct_1b6d18a9 _sampleTimeOffset;	// 56 = 0x38
    _Bool _sessionIsResuming;	// 80 = 0x50
    int _sessionType;	// 84 = 0x54
    _Bool _isExempt;	// 88 = 0x58
    NSDate *_lastExemptTime;	// 96 = 0x60
    struct __CFUserNotification *_userNotificationStopRecording;	// 104 = 0x68
    FBSDisplayLayoutMonitor *_layoutMonitor;	// 112 = 0x70
    RPApplicationStateMonitor *_applicationStateMonitor;	// 120 = 0x78
    long long _levelOneElementCount;	// 128 = 0x80
    int _lockToResetToken;	// 136 = 0x88
    double _privacyAcknowledgementAlertTimeoutMinutes;	// 144 = 0x90
    _Bool _didAcceptMicrophonePermission;	// 152 = 0x98
    _Bool _didAcceptCameraPermission;	// 153 = 0x99
    _Bool _deviceLocked;	// 154 = 0x9a
    _Bool _microphoneEnabled;	// 155 = 0x9b
    _Bool _cameraEnabled;	// 156 = 0x9c
    int _sessionState;	// 160 = 0xa0
    NSString *_bundleID;	// 168 = 0xa8
    NSNumber *_contextID;	// 176 = 0xb0
    RPReportingAgent *_reportingAgent;	// 184 = 0xb8
    struct CGSize _windowSize;	// 192 = 0xc0
}

+ (unsigned long long)getRecordedFileSizeForMovieWriter:(id)arg1;	// IMP=0x00000001000110fc
- (void).cxx_destruct;	// IMP=0x0000000100011730
@property(retain, nonatomic) RPReportingAgent *reportingAgent; // @synthesize reportingAgent=_reportingAgent;
@property(nonatomic) struct CGSize windowSize; // @synthesize windowSize=_windowSize;
@property(retain, nonatomic) NSNumber *contextID; // @synthesize contextID=_contextID;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) int sessionState; // @synthesize sessionState=_sessionState;
@property(nonatomic) _Bool cameraEnabled; // @synthesize cameraEnabled=_cameraEnabled;
@property(nonatomic) _Bool microphoneEnabled; // @synthesize microphoneEnabled=_microphoneEnabled;
@property(nonatomic) _Bool deviceLocked; // @synthesize deviceLocked=_deviceLocked;
- (void)handleResumeCaptureWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000116a4
- (void)handleResumeContextIDFailure;	// IMP=0x00000001000116a0
- (void)handleTimerDidUpdate:(id)arg1;	// IMP=0x000000010001169c
- (void)handleSystemAlertStop;	// IMP=0x0000000100011698
- (void)handleFrontmostApplicationDidChange:(id)arg1;	// IMP=0x0000000100011694
- (void)handleClientApplicationDidEnterForeground;	// IMP=0x0000000100011690
- (void)handleClientApplicationDidEnterBackground;	// IMP=0x000000010001168c
- (void)handleDeviceRestrictionWarning;	// IMP=0x0000000100011688
- (void)handleDeviceLockedWarning;	// IMP=0x0000000100011684
- (void)handleIncomingCallWarning;	// IMP=0x0000000100011680
- (void)handleDisplayWarning;	// IMP=0x000000010001167c
- (void)handleMemoryWarning;	// IMP=0x0000000100011678
- (void)clientApplicationDidEnterForeground;	// IMP=0x0000000100011568
- (void)clientApplicationDidEnterBackground;	// IMP=0x0000000100011448
- (void)frontmostApplicationDidChange:(id)arg1;	// IMP=0x0000000100011318
- (void)statusBarCoordinator:(id)arg1 invalidatedRegistrationWithError:(id)arg2;	// IMP=0x0000000100011314
- (_Bool)statusBarCoordinator:(id)arg1 receivedTapWithContext:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000112f4
- (void)timerDidUpdate:(id)arg1;	// IMP=0x00000001000112e8
- (void)checkAndPlaySystemSessionSoundForRecordingOn:(_Bool)arg1;	// IMP=0x000000010001109c
- (_Bool)showAlertRecordingCaptureSessionWithError:(id)arg1;	// IMP=0x000000010001107c
- (void)sessionReportCameraUsage:(long long)arg1;	// IMP=0x0000000100011078
- (id)serviceNameForReporting;	// IMP=0x000000010001100c
- (_Bool)showStopSystemSessionAlert;	// IMP=0x0000000100011004
- (_Bool)shouldBypassAlertForTest;	// IMP=0x0000000100010fb0
- (id)getNotificationBodyTextForSessionType:(int)arg1 cameraEnabled:(_Bool)arg2 microphoneEnabled:(_Bool)arg3;	// IMP=0x0000000100010db8
- (id)getNotificationTitleTextForSessionType:(int)arg1 bundleID:(id)arg2;	// IMP=0x0000000100010c64
- (id)showAcknowledgementAlertWithMicrophone:(_Bool)arg1 camera:(_Bool)arg2;	// IMP=0x00000001000101f0
- (_Bool)clientHasTestEntitlement;	// IMP=0x000000010001004c
- (_Bool)shouldSupressAlert;	// IMP=0x000000010000fe5c
- (_Bool)getAcknowledgementAlertResultsWithMicrophone:(_Bool)arg1 cameraEnabled:(_Bool)arg2;	// IMP=0x000000010000faf8
- (id)checkApplicationForegroundRequirement;	// IMP=0x000000010000f9f4
- (id)checkSufficientFreeSpace;	// IMP=0x000000010000f8c8
- (id)getCallingConnectionBundleID;	// IMP=0x000000010000f828
- (_Bool)checkContextIDsMatch:(id)arg1;	// IMP=0x000000010000f628
- (id)checkContextIDRequirement;	// IMP=0x000000010000f4e0
- (id)checkDeviceLockedRequirement;	// IMP=0x000000010000f3f0
- (id)checkCaptureRequirementsWithMicrophoneEnabled:(_Bool)arg1 cameraEnabled:(_Bool)arg2;	// IMP=0x000000010000f1f8
- (void)handleUpdateDisplayLayout:(id)arg1;	// IMP=0x000000010000eff4
- (void)setUpFrontBoardServices;	// IMP=0x000000010000eff0
- (void)checkAndPlaySystemSessionSound:(_Bool)arg1;	// IMP=0x000000010000ef6c
- (struct CGAffineTransform)CGAffineTransformFromFigTransformFlags:(unsigned long long)arg1;	// IMP=0x000000010000ece0
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 transformFlags:(unsigned long long)arg2 movieWriter:(id)arg3;	// IMP=0x000000010000eb6c
- (void)updatePauseOffsetForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withSampleType:(int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000ea08
- (void)updatePauseOffsetFromVideoBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000010000e930
- (void)resumeSessionWithWindowLayerContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e598
- (void)pauseSession;	// IMP=0x000000010000e484
- (void)updateProcessIDForAudioCaptureWithPID:(int)arg1;	// IMP=0x000000010000e2b0
- (void)notifyClientSessionDidStopWithError:(long long)arg1 movieURL:(id)arg2 showAlert:(_Bool)arg3;	// IMP=0x000000010000e1f4
- (void)updateClientProxy:(id)arg1 callingPID:(int)arg2 bundleID:(id)arg3;	// IMP=0x000000010000dfb4
- (void)startAcknowledgementAlertTimer;	// IMP=0x000000010000de24
- (void)checkForAcknowledgementAlertTimeout;	// IMP=0x000000010000dc38
- (void)reportSummaryEvent:(long long)arg1 recordedFileSize:(long long)arg2;	// IMP=0x000000010000db28
- (void)reportSessionEndReason:(id)arg1;	// IMP=0x000000010000daa4
- (void)removeObserversForSession;	// IMP=0x000000010000d874
- (void)addObserversForSession;	// IMP=0x000000010000d774
- (void)startWithContextID:(id)arg1 windowSize:(struct CGSize)arg2;	// IMP=0x000000010000d5a0
- (void)dealloc;	// IMP=0x000000010000d484
- (void)invalidate;	// IMP=0x000000010000d354
- (id)initWithClientProxy:(id)arg1 sessionType:(int)arg2 callingPID:(int)arg3 bundleID:(id)arg4 delegate:(id)arg5;	// IMP=0x000000010000d010

@end

