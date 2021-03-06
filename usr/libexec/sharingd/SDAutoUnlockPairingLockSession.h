//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDAutoUnlockPairingSession.h"

@class NSData, NSDate, NSError, NSObject, NSString, SDUnlockSetupSessionCreated;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockPairingLockSession : SDAutoUnlockPairingSession
{
    _Bool _canceled;	// 8 = 0x8
    _Bool _upsellDevice;	// 9 = 0x9
    _Bool _setupRetryDevice;	// 10 = 0xa
    _Bool _placeholder;	// 11 = 0xb
    _Bool _waitingForCloudPairing;	// 12 = 0xc
    _Bool _keyDeviceLocked;	// 13 = 0xd
    _Bool _unlockEnabled;	// 14 = 0xe
    _Bool _receivedSetupACK;	// 15 = 0xf
    _Bool _receivedTokenACK;	// 16 = 0x10
    unsigned int _errorType;	// 20 = 0x14
    int _watchOldLTKSyncStatus;	// 24 = 0x18
    int _watchNewLTKSyncStatus;	// 28 = 0x1c
    NSString *_passcode;	// 32 = 0x20
    long long _sendState;	// 40 = 0x28
    NSString *_keyDeviceModel;	// 48 = 0x30
    NSString *_watchBuildVersion;	// 56 = 0x38
    NSString *_watchOSVersion;	// 64 = 0x40
    NSString *_companionDeviceModel;	// 72 = 0x48
    NSError *_setupError;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_ltkTimer;	// 88 = 0x58
    SDUnlockSetupSessionCreated *_sessionCreatedMessage;	// 96 = 0x60
    long long _responseTimeout;	// 104 = 0x68
    long long _responseTimeoutFromServer;	// 112 = 0x70
    long long _messageTimeout;	// 120 = 0x78
    long long _messageTimeoutFromServer;	// 128 = 0x80
    long long _ltkTimerRetryCount;	// 136 = 0x88
    NSDate *_keyExchangeDate;	// 144 = 0x90
    NSDate *_tokenExchangeDate;	// 152 = 0x98
    double _keyExchangeInterval;	// 160 = 0xa0
    double _tokenExchangeInterval;	// 168 = 0xa8
    NSData *_remoteLTKHash;	// 176 = 0xb0
    NSString *_setupMessageIdentifier;	// 184 = 0xb8
    NSString *_tokenMessageIdentifier;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0000000100053b0c
@property(retain, nonatomic) NSString *tokenMessageIdentifier; // @synthesize tokenMessageIdentifier=_tokenMessageIdentifier;
@property(retain, nonatomic) NSString *setupMessageIdentifier; // @synthesize setupMessageIdentifier=_setupMessageIdentifier;
@property(nonatomic) _Bool receivedTokenACK; // @synthesize receivedTokenACK=_receivedTokenACK;
@property(nonatomic) _Bool receivedSetupACK; // @synthesize receivedSetupACK=_receivedSetupACK;
@property(nonatomic) int watchNewLTKSyncStatus; // @synthesize watchNewLTKSyncStatus=_watchNewLTKSyncStatus;
@property(nonatomic) int watchOldLTKSyncStatus; // @synthesize watchOldLTKSyncStatus=_watchOldLTKSyncStatus;
@property(retain, nonatomic) NSData *remoteLTKHash; // @synthesize remoteLTKHash=_remoteLTKHash;
@property(nonatomic) double tokenExchangeInterval; // @synthesize tokenExchangeInterval=_tokenExchangeInterval;
@property(nonatomic) double keyExchangeInterval; // @synthesize keyExchangeInterval=_keyExchangeInterval;
@property(retain, nonatomic) NSDate *tokenExchangeDate; // @synthesize tokenExchangeDate=_tokenExchangeDate;
@property(retain, nonatomic) NSDate *keyExchangeDate; // @synthesize keyExchangeDate=_keyExchangeDate;
@property(nonatomic) long long ltkTimerRetryCount; // @synthesize ltkTimerRetryCount=_ltkTimerRetryCount;
@property(nonatomic) long long messageTimeoutFromServer; // @synthesize messageTimeoutFromServer=_messageTimeoutFromServer;
@property(nonatomic) long long messageTimeout; // @synthesize messageTimeout=_messageTimeout;
@property(nonatomic) long long responseTimeoutFromServer; // @synthesize responseTimeoutFromServer=_responseTimeoutFromServer;
@property(nonatomic) long long responseTimeout; // @synthesize responseTimeout=_responseTimeout;
@property(retain, nonatomic) SDUnlockSetupSessionCreated *sessionCreatedMessage; // @synthesize sessionCreatedMessage=_sessionCreatedMessage;
@property(nonatomic) unsigned int errorType; // @synthesize errorType=_errorType;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *ltkTimer; // @synthesize ltkTimer=_ltkTimer;
@property(nonatomic) _Bool unlockEnabled; // @synthesize unlockEnabled=_unlockEnabled;
@property(nonatomic) _Bool keyDeviceLocked; // @synthesize keyDeviceLocked=_keyDeviceLocked;
@property(retain, nonatomic) NSError *setupError; // @synthesize setupError=_setupError;
@property(retain, nonatomic) NSString *companionDeviceModel; // @synthesize companionDeviceModel=_companionDeviceModel;
@property(retain, nonatomic) NSString *watchOSVersion; // @synthesize watchOSVersion=_watchOSVersion;
@property(retain, nonatomic) NSString *watchBuildVersion; // @synthesize watchBuildVersion=_watchBuildVersion;
@property(retain, nonatomic) NSString *keyDeviceModel; // @synthesize keyDeviceModel=_keyDeviceModel;
@property(nonatomic) long long sendState; // @synthesize sendState=_sendState;
@property(nonatomic) _Bool waitingForCloudPairing; // @synthesize waitingForCloudPairing=_waitingForCloudPairing;
@property(nonatomic) _Bool placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) _Bool setupRetryDevice; // @synthesize setupRetryDevice=_setupRetryDevice;
@property(nonatomic) _Bool upsellDevice; // @synthesize upsellDevice=_upsellDevice;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(copy, nonatomic) NSString *passcode; // @synthesize passcode=_passcode;
- (id)userInfoForNewProtocol;	// IMP=0x00000001000535c8
- (id)userInfoForOldProtocol;	// IMP=0x00000001000534d0
- (id)userInfoForNoCommunincation;	// IMP=0x00000001000533d8
- (id)userInfoForNoPasscode;	// IMP=0x00000001000532e0
- (id)userInfoForNoWristDetection;	// IMP=0x00000001000531e8
- (id)userInfoForNoWristDetectionNoPasscode;	// IMP=0x00000001000530f0
- (id)userInfoCompanionViewNotSyncing;	// IMP=0x0000000100052ff8
- (id)userInfoForWatchLocked;	// IMP=0x0000000100052f00
- (id)userInfoForNotCloudPaired;	// IMP=0x0000000100052e50
- (id)userInfoForMacNotSignedIn;	// IMP=0x0000000100052d58
- (id)userInfoForWatchNotSignedIn;	// IMP=0x0000000100052c60
- (id)userInfoForMissingLTK;	// IMP=0x0000000100052b68
- (id)userInfoForInternetSharing;	// IMP=0x0000000100052a70
- (id)userInfoForKeychainMismatch;	// IMP=0x0000000100052978
- (id)userInfoForiPhoneNeedsUnlock;	// IMP=0x0000000100052880
- (void)transport:(id)arg1 didReceiveMessageACKForIdentifier:(id)arg2;	// IMP=0x000000010005266c
- (void)transport:(id)arg1 didReceivePayload:(id)arg2 type:(unsigned short)arg3 deviceID:(id)arg4;	// IMP=0x000000010005235c
- (void)sendCreateEscrowSecretWithStepData:(id)arg1 sessionID:(unsigned int)arg2;	// IMP=0x0000000100051f80
- (void)sendSetupRequest;	// IMP=0x0000000100051a84
- (void)handleSuccessfulPairing;	// IMP=0x000000010005141c
- (void)handleSetupCreateRecord:(id)arg1;	// IMP=0x0000000100050cdc
- (void)handleEscrowSessionRequest;	// IMP=0x0000000100050364
- (void)handleSetupSessionCreated:(id)arg1;	// IMP=0x000000010004fa30
- (void)handleKeyDeviceLocked;	// IMP=0x000000010004f924
- (_Bool)ltkHashMatches;	// IMP=0x000000010004f7fc
- (void)handleLTKTimerFired;	// IMP=0x000000010004f558
- (void)invalidateLTKTimer;	// IMP=0x000000010004f480
- (void)restartLTKTimer;	// IMP=0x000000010004f270
- (void)notifyDelegateKeyDeviceIsLocked;	// IMP=0x000000010004f1cc
- (void)notifyDelegateWithError:(id)arg1;	// IMP=0x000000010004ea5c
- (_Bool)validatePasscode:(id)arg1;	// IMP=0x000000010004e8dc
- (void)handleTimerFired;	// IMP=0x000000010004e6f4
- (id)generatedError;	// IMP=0x000000010004e598
- (void)invalidate;	// IMP=0x000000010004e488
- (void)onqueue_updateForCloudPairing;	// IMP=0x000000010004e41c
- (void)updateForCloudPairing;	// IMP=0x000000010004e390
- (void)onqueue_cancel;	// IMP=0x000000010004e260
- (void)cancel;	// IMP=0x000000010004e1d4
- (void)onqueue_start;	// IMP=0x000000010004dbb4
- (void)start;	// IMP=0x000000010004db28
- (id)initWithDevice:(id)arg1 sessionID:(id)arg2;	// IMP=0x000000010004d764

@end

