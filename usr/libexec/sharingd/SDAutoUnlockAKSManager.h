//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDAutoUnlockTransportClient-Protocol.h"

@class NSData, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockAKSManager : NSObject <SDAutoUnlockTransportClient>
{
    _Bool _wristDetectDisabled;	// 8 = 0x8
    _Bool _autoUnlockDisabledDueToManagement;	// 9 = 0x9
    _Bool _waitingForUnlock;	// 10 = 0xa
    _Bool _t208Machine;	// 11 = 0xb
    NSString *_localDeviceID;	// 16 = 0x10
    NSString *_state;	// 24 = 0x18
    NSData *_localLTK;	// 32 = 0x20
    NSString *_altDSID;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_keybagAssertionTimer;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_waitingForUnlockTimer;	// 56 = 0x38
    NSMutableDictionary *_remoteLTKs;	// 64 = 0x40
    NSMutableDictionary *_cachedSessions;	// 72 = 0x48
    NSMutableDictionary *_cachedSessionKeys;	// 80 = 0x50
    NSMutableDictionary *_watchIDsToPairingRecords;	// 88 = 0x58
    NSMutableDictionary *_preferredRemoteLTKForDeviceID;	// 96 = 0x60
    NSMutableArray *_watchIDsMissingSessionKey;	// 104 = 0x68
    NSString *_remoteLTKStorageFilePath;	// 112 = 0x70
    NSString *_watchIDsToPairingRecordsStorageFilePath;	// 120 = 0x78
    id _keybagAssertion;	// 128 = 0x80
    NSString *_companionIDStorageFilePath;	// 136 = 0x88
    NSString *_watchIDToCompanionIDStorageFilePath;	// 144 = 0x90
}

+ (id)sharedManager;	// IMP=0x00000001000e1334
- (void).cxx_destruct;	// IMP=0x00000001000ee164
@property(copy, nonatomic) NSString *watchIDToCompanionIDStorageFilePath; // @synthesize watchIDToCompanionIDStorageFilePath=_watchIDToCompanionIDStorageFilePath;
@property(copy, nonatomic) NSString *companionIDStorageFilePath; // @synthesize companionIDStorageFilePath=_companionIDStorageFilePath;
@property(retain) id keybagAssertion; // @synthesize keybagAssertion=_keybagAssertion;
@property(copy, nonatomic) NSString *watchIDsToPairingRecordsStorageFilePath; // @synthesize watchIDsToPairingRecordsStorageFilePath=_watchIDsToPairingRecordsStorageFilePath;
@property(copy, nonatomic) NSString *remoteLTKStorageFilePath; // @synthesize remoteLTKStorageFilePath=_remoteLTKStorageFilePath;
@property(retain, nonatomic) NSMutableArray *watchIDsMissingSessionKey; // @synthesize watchIDsMissingSessionKey=_watchIDsMissingSessionKey;
@property(retain, nonatomic) NSMutableDictionary *preferredRemoteLTKForDeviceID; // @synthesize preferredRemoteLTKForDeviceID=_preferredRemoteLTKForDeviceID;
@property(retain, nonatomic) NSMutableDictionary *watchIDsToPairingRecords; // @synthesize watchIDsToPairingRecords=_watchIDsToPairingRecords;
@property(retain, nonatomic) NSMutableDictionary *cachedSessionKeys; // @synthesize cachedSessionKeys=_cachedSessionKeys;
@property(retain, nonatomic) NSMutableDictionary *cachedSessions; // @synthesize cachedSessions=_cachedSessions;
@property(retain, nonatomic) NSMutableDictionary *remoteLTKs; // @synthesize remoteLTKs=_remoteLTKs;
@property(retain) NSObject<OS_dispatch_source> *waitingForUnlockTimer; // @synthesize waitingForUnlockTimer=_waitingForUnlockTimer;
@property(retain) NSObject<OS_dispatch_source> *keybagAssertionTimer; // @synthesize keybagAssertionTimer=_keybagAssertionTimer;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSData *localLTK; // @synthesize localLTK=_localLTK;
@property(nonatomic) _Bool t208Machine; // @synthesize t208Machine=_t208Machine;
@property(nonatomic) _Bool waitingForUnlock; // @synthesize waitingForUnlock=_waitingForUnlock;
@property(nonatomic) _Bool autoUnlockDisabledDueToManagement; // @synthesize autoUnlockDisabledDueToManagement=_autoUnlockDisabledDueToManagement;
@property(nonatomic) _Bool wristDetectDisabled; // @synthesize wristDetectDisabled=_wristDetectDisabled;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *localDeviceID; // @synthesize localDeviceID=_localDeviceID;
- (void)updateDynamicStoreEnabled;	// IMP=0x00000001000ee004
- (id)baseDictionary;	// IMP=0x00000001000edf90
- (id)baseLocalKeysDictionary;	// IMP=0x00000001000edf3c
- (id)baseLocalKeysDictionaryForDevice:(id)arg1 type:(id)arg2;	// IMP=0x00000001000ede8c
- (id)baseModernSyncedDictionary;	// IMP=0x00000001000ede14
- (id)modernSyncedDictionaryForDevice:(id)arg1;	// IMP=0x00000001000edd58
- (id)baseSyncedDictionary;	// IMP=0x00000001000edcdc
- (id)syncedDictionaryForDevice:(id)arg1;	// IMP=0x00000001000edc20
- (id)baseRangingDictionary;	// IMP=0x00000001000edba8
- (id)baseRangingDictionaryForDevice:(id)arg1;	// IMP=0x00000001000edb30
- (id)keychainDataForQuery:(id)arg1;	// IMP=0x00000001000ed9f0
- (void)deleteAllRangingKeys;	// IMP=0x00000001000ed830
- (void)deleteRangingKeyForDeviceID:(id)arg1;	// IMP=0x00000001000ed69c
- (_Bool)storeRangingKey:(id)arg1 forDeviceID:(id)arg2;	// IMP=0x00000001000ed43c
- (id)rangingKeyForDeviceID:(id)arg1;	// IMP=0x00000001000ed3dc
- (id)sessionKeyForDeviceID:(id)arg1;	// IMP=0x00000001000ed28c
- (_Bool)sessionKeyExistsForDeviceID:(id)arg1;	// IMP=0x00000001000ed250
- (id)deriveKeyFromSharedSecret:(id)arg1;	// IMP=0x00000001000ed150
- (void)updateSessionKeys;	// IMP=0x00000001000ece84
- (void)updateRangingKeysIfNeccesary;	// IMP=0x00000001000ecb64
- (id)ltkInfoForDeviceID:(id)arg1 modern:(_Bool)arg2;	// IMP=0x00000001000eca9c
- (id)ltkInfoForDeviceID:(id)arg1;	// IMP=0x00000001000eca8c
- (id)longTermKeyIDForDeviceID:(id)arg1;	// IMP=0x00000001000ec9d4
- (id)longTermKeyForDevice:(id)arg1 modern:(_Bool)arg2;	// IMP=0x00000001000ec980
- (id)anyLongTermKeyForDeviceID:(id)arg1;	// IMP=0x00000001000ec970
- (void)deleteRemoteLongTermKeyForDeviceID:(id)arg1 modern:(_Bool)arg2 tombstone:(_Bool)arg3;	// IMP=0x00000001000ec878
- (_Bool)storeLongTermKey:(id)arg1 forDeviceID:(id)arg2 name:(id)arg3 modern:(_Bool)arg4;	// IMP=0x00000001000ec5b8
- (_Bool)storeLongTermKey:(id)arg1 forDeviceID:(id)arg2 name:(id)arg3;	// IMP=0x00000001000ec4f8
- (void)deleteAllEscrowSecrets;	// IMP=0x00000001000ec41c
- (void)deleteEscrowSecretForDeviceID:(id)arg1;	// IMP=0x00000001000ec2e4
- (id)escrowSecretCreationDateForDeviceID:(id)arg1;	// IMP=0x00000001000ec194
- (_Bool)escrowSecretExistsForDevice:(id)arg1;	// IMP=0x00000001000ec0c4
- (_Bool)storeEscrowSecret:(id)arg1 pairingID:(id)arg2 deviceID:(id)arg3;	// IMP=0x00000001000ebf40
- (id)keyPairingIDForDeviceID:(id)arg1;	// IMP=0x00000001000ebe7c
- (id)escrowSecretForDevice:(id)arg1;	// IMP=0x00000001000ebaf0
- (_Bool)storeKeychainItemWithAttributeDictionary:(id)arg1 updateDictionary:(id)arg2 addDictionary:(id)arg3;	// IMP=0x00000001000eb974
- (id)autoUnlockFolderPath;	// IMP=0x00000001000eb86c
- (id)loadCompanionIDs;	// IMP=0x00000001000eb498
- (void)deleteLegacyCompanionIDs;	// IMP=0x00000001000eb378
- (id)migrateLegacyCompanionIDs:(id)arg1;	// IMP=0x00000001000eb244
- (id)loadLegacyWatchIDToCompanionIDMapping;	// IMP=0x00000001000eaf98
- (void)deleteLegacyWatchToCompanionIDs;	// IMP=0x00000001000eae78
- (void)migrateLegacyWatchIDToCompanionIDs;	// IMP=0x00000001000ead18
- (void)loadWatchIDsToPairingRecords;	// IMP=0x00000001000eac9c
- (void)saveWatchIDsToPairingRecords;	// IMP=0x00000001000eaaf8
- (void)removePairingRecordForWatchID:(id)arg1;	// IMP=0x00000001000eaa7c
- (void)removePairingIDForWatchID:(id)arg1;	// IMP=0x00000001000ea91c
- (id)pairingIDForWatchID:(id)arg1;	// IMP=0x00000001000ea870
- (void)setPairingID:(id)arg1 forWatchID:(id)arg2;	// IMP=0x00000001000ea6ec
- (void)removeCompanionIDForWatchID:(id)arg1;	// IMP=0x00000001000ea58c
- (id)companionIDForWatchID:(id)arg1;	// IMP=0x00000001000ea4e0
- (void)setCompanionID:(id)arg1 forWatchID:(id)arg2;	// IMP=0x00000001000ea35c
- (id)allPairedWatchDeviceIDs;	// IMP=0x00000001000ea308
- (void)reloadPairingRecordsIfNeeded;	// IMP=0x00000001000ea268
- (void)loadRemoteLTKs;	// IMP=0x00000001000e9d54
- (void)loadRemoteLTKsIfNeeded;	// IMP=0x00000001000e9d00
- (void)saveRemoteLTKs;	// IMP=0x00000001000e9b5c
- (void)clearRemoteLTKs;	// IMP=0x00000001000e9a80
- (void)removeRemoteLTKForDeviceID:(id)arg1;	// IMP=0x00000001000e9970
- (void)addRemoteLTK:(id)arg1 ltkHash:(id)arg2 ltkModDate:(id)arg3 modernLTK:(id)arg4 modernLTKHash:(id)arg5 modernLTKModeDate:(id)arg6 deviceID:(id)arg7;	// IMP=0x00000001000e9698
- (_Bool)disablePairingWithKeyDevice:(id)arg1;	// IMP=0x00000001000e95b4
- (_Bool)ltkExistsForKeyDevice:(id)arg1 updateLTKs:(_Bool)arg2;	// IMP=0x00000001000e9438
- (_Bool)ltkExistsForKeyDevice:(id)arg1;	// IMP=0x00000001000e9428
- (void)removeAllRemoteLTKsOnSignOut;	// IMP=0x00000001000e91a8
- (void)disablePairingForAllKeyDevices;	// IMP=0x00000001000e8f2c
- (void)deleteEscrowSecretForAllDevices;	// IMP=0x00000001000e8c64
- (void)handleRequiredStateDisabled;	// IMP=0x00000001000e8c60
- (_Bool)deviceEnabledAsKey:(id)arg1;	// IMP=0x00000001000e8ac0
- (_Bool)deviceEnabledAsKeyForAnyDevice;	// IMP=0x00000001000e88ac
- (_Bool)deviceEnabledAsKeyForAnyIDSDevice;	// IMP=0x00000001000e8698
- (_Bool)localDeviceEnabledAsKey;	// IMP=0x00000001000e861c
- (void)transport:(id)arg1 didReceivePayload:(id)arg2 type:(unsigned short)arg3 deviceID:(id)arg4;	// IMP=0x00000001000e855c
- (void)handleLTKResponse:(id)arg1;	// IMP=0x00000001000e8558
- (void)invalidateWaitingForUnlockTimer;	// IMP=0x00000001000e8480
- (void)restartWaitingForUnlockTimer;	// IMP=0x00000001000e8280
- (void)restartKeybagAssertionTimer;	// IMP=0x00000001000e8084
- (void)releaseKeybagAssertion;	// IMP=0x00000001000e8008
- (void)takeMobileKeybagAssertion;	// IMP=0x00000001000e7ef0
- (_Bool)pendingReceiveForPeer:(id)arg1;	// IMP=0x00000001000e7ee8
- (_Bool)pendingSendForPeer:(id)arg1;	// IMP=0x00000001000e7ee0
- (_Bool)keychainNeedsSyncingForRequest:(id)arg1;	// IMP=0x00000001000e7ac0
- (id)ltksForRequest:(id)arg1;	// IMP=0x00000001000e751c
- (void)handleLTKRequest:(id)arg1;	// IMP=0x00000001000e7518
- (void)sendLTKResponseWithPayload:(id)arg1 viewState:(id)arg2 needsUnlock:(id)arg3 currentlySyncing:(id)arg4;	// IMP=0x00000001000e7514
- (void)fetchLTKsFromCompanionForDeviceID:(id)arg1 needsLTK:(_Bool)arg2 remoteNeedsLTK:(_Bool)arg3 checkViewState:(_Bool)arg4;	// IMP=0x00000001000e7510
- (void)fetchLTKsFromCompanion:(_Bool)arg1;	// IMP=0x00000001000e74f4
- (void)updatePreferredRemoteLTKForDeviceID:(id)arg1;	// IMP=0x00000001000e7168
- (id)remoteLTKList;	// IMP=0x00000001000e7028
- (id)remoteLTKEntryForDeviceID:(id)arg1;	// IMP=0x00000001000e6fa8
- (id)remoteLTKHashForDeviceID:(id)arg1 modern:(_Bool)arg2;	// IMP=0x00000001000e6f38
- (_Bool)hashMatchesAnyRemoteLTKForDeviceID:(id)arg1 ltkHash:(id)arg2 isPreferred:(_Bool *)arg3;	// IMP=0x00000001000e6ca8
- (id)remoteLTKForDeviceID:(id)arg1;	// IMP=0x00000001000e6bcc
- (id)allRemoteLTKData;	// IMP=0x00000001000e6a94
- (id)signedDevices;	// IMP=0x00000001000e6930
- (id)modernSignedDevices;	// IMP=0x00000001000e67cc
- (id)modificationDataForDeviceID:(id)arg1 modern:(_Bool)arg2;	// IMP=0x00000001000e661c
- (id)keychainDevices:(_Bool)arg1;	// IMP=0x00000001000e63c8
- (id)allKeychainDevices;	// IMP=0x00000001000e63b8
- (_Bool)signLTK:(id)arg1 ltkModDate:(id)arg2 modernLTK:(id)arg3 modernLTKModDate:(id)arg4 deviceID:(id)arg5;	// IMP=0x00000001000e6048
- (_Bool)signLTK:(id)arg1 modernLTK:(id)arg2 forDeviceID:(id)arg3;	// IMP=0x00000001000e5fc8
- (_Bool)signLTKsForDeviceID:(id)arg1;	// IMP=0x00000001000e5f14
- (void)resignRemoteLTKForDeviceID:(id)arg1;	// IMP=0x00000001000e5f08
- (void)checkRemoteLTKForDeviceID:(id)arg1;	// IMP=0x00000001000e5d04
- (void)checkRemoteLTKs;	// IMP=0x00000001000e5d00
- (void)updateRemoteLTKs;	// IMP=0x00000001000e5cf0
- (void)updateLTKsForDeviceID:(id)arg1;	// IMP=0x00000001000e564c
- (int)ltkSyncStatusForDeviceID:(id)arg1 hash:(id)arg2 modern:(_Bool)arg3;	// IMP=0x00000001000e548c
- (_Bool)deviceIsLocalDevice:(id)arg1;	// IMP=0x00000001000e5410
- (long long)keyClassForDeviceID:(id)arg1;	// IMP=0x00000001000e5330
- (long long)ltkKeyClass;	// IMP=0x00000001000e5328
- (void)updateLocalLTKForSignout;	// IMP=0x00000001000e51c0
- (id)ltkHashForLocalLTK;	// IMP=0x00000001000e513c
- (void)checkLocalLTK;	// IMP=0x00000001000e49a4
- (void)generateLocalLTK;	// IMP=0x00000001000e45a8
- (_Bool)loadLocalLTK;	// IMP=0x00000001000e4040
- (id)deviceIDsMissingSessionKey;	// IMP=0x00000001000e3f20
- (void)clearAllDeviceIDsMissingSessionKeys;	// IMP=0x00000001000e3df0
- (void)removeDeviceIDMissingSessionKey:(id)arg1;	// IMP=0x00000001000e3c98
- (void)addDeviceIDMissingSessionKey:(id)arg1;	// IMP=0x00000001000e3b10
- (id)decryptMessage:(id)arg1 authTag:(id)arg2 nonce:(id)arg3 bluetoothID:(id)arg4 cachedDevices:(_Bool)arg5 errorCode:(long long *)arg6;	// IMP=0x00000001000e31f0
- (_Bool)encryptMessageData:(id)arg1 deviceID:(id)arg2 encryptedMessage:(id *)arg3 authTag:(id *)arg4 nonce:(id *)arg5;	// IMP=0x00000001000e2ef8
- (_Bool)canCreateTokenSessionForDeviceID:(id)arg1;	// IMP=0x00000001000e2ea0
- (id)aksAuthorizationSessionForDeviceID:(id)arg1 originator:(_Bool)arg2 externalACMContext:(id)arg3;	// IMP=0x00000001000e2c28
- (id)aksAuthorizationSessionForDeviceID:(id)arg1 originator:(_Bool)arg2;	// IMP=0x00000001000e2c18
- (id)aksAuthSessionForDeviceID:(id)arg1 originator:(_Bool)arg2 usingEscrow:(_Bool)arg3;	// IMP=0x00000001000e2930
- (id)aksAuthSessionForDeviceID:(id)arg1 originator:(_Bool)arg2;	// IMP=0x00000001000e2920
- (id)aksPairingSessionForDeviceID:(id)arg1 originator:(_Bool)arg2 errorCode:(long long *)arg3;	// IMP=0x00000001000e27bc
- (void)consoleUserChanged:(id)arg1;	// IMP=0x00000001000e2694
- (void)handleKeyBagLockStateChanged;	// IMP=0x00000001000e2690
- (void)screenLockUnlocked:(id)arg1;	// IMP=0x00000001000e25e0
- (void)appleAccountSignedOut:(id)arg1;	// IMP=0x00000001000e252c
- (void)appleAccountSignedIn:(id)arg1;	// IMP=0x00000001000e24c0
- (void)deviceFirstUnlocked:(id)arg1;	// IMP=0x00000001000e24b4
- (void)handleManagementChanged:(id)arg1;	// IMP=0x00000001000e2238
- (void)addObservers;	// IMP=0x00000001000e20fc
- (void)loadLocalUniqueIDIfNeeded;	// IMP=0x00000001000e1fe4
@property(readonly, nonatomic) _Bool viewSyncing;
- (void)updateLocalLTK;	// IMP=0x00000001000e181c
- (void)updateLTKs;	// IMP=0x00000001000e1778
- (void)start;	// IMP=0x00000001000e1584
- (id)init;	// IMP=0x00000001000e13a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

