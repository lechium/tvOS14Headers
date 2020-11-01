//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCInstallerReader.h>

#import "MCInteractionClientDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MCInstaller : MCInstallerReader <MCInteractionClientDelegate>
{
    NSMutableArray *_queuedProfiles;	// 8 = 0x8
    NSMutableArray *_queuedProvisioningProfiles;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_purgatoryWorkerQueue;	// 24 = 0x18
    NSDictionary *_currentlyInstallingRestrictions;	// 32 = 0x20
    NSMutableDictionary *_setAsideAccountIdentifiersByPayloadClass;	// 40 = 0x28
    NSMutableDictionary *_setAsideDictionariesByPayloadClass;	// 48 = 0x30
}

+ (void)_enumerateProfilesWithCriteria:(CDUnknownBlockType)arg1 filterFlags:(int)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000010004b1d8
+ (void)considerProfilesInstalledDuringBuddyForManagement;	// IMP=0x000000010004ac38
+ (id)_installationFailureErrorWithUnderlyingError:(id)arg1;	// IMP=0x000000010004a984
+ (void)_setPathsSystemProfileStorageDirectory:(id)arg1 userProfileStorageDirectory:(id)arg2;	// IMP=0x000000010004a914
+ (unsigned long long)targetDeviceTypeForCurrentDevice;	// IMP=0x0000000100046960
+ (id)notInstalledByMDMError;	// IMP=0x00000001000417f8
+ (id)deviceIsSupervisedError;	// IMP=0x0000000100041748
+ (id)deviceNotSupervisedError;	// IMP=0x0000000100041698
+ (id)sharedInstaller;	// IMP=0x000000010003e460
- (void).cxx_destruct;	// IMP=0x000000010004bb90
@property(retain, nonatomic) NSMutableDictionary *setAsideDictionariesByPayloadClass; // @synthesize setAsideDictionariesByPayloadClass=_setAsideDictionariesByPayloadClass;
@property(retain, nonatomic) NSMutableDictionary *setAsideAccountIdentifiersByPayloadClass; // @synthesize setAsideAccountIdentifiersByPayloadClass=_setAsideAccountIdentifiersByPayloadClass;
- (id)peekProfileDataFromPurgatoryForDeviceType:(unsigned long long)arg1;	// IMP=0x000000010004ba74
- (void)_purgatoryWorkerQueue_resetProfilePurgatorySettingsAndPostProfileListChangedNotification:(_Bool)arg1;	// IMP=0x000000010004ba68
- (void)purgeProfileWithIdentifier:(id)arg1 FromPurgatoryForTargetDeviceType:(unsigned long long)arg2;	// IMP=0x000000010004b870
- (void)purgeProfilesFromPurgatoryForTargetDeviceType:(unsigned long long)arg1;	// IMP=0x000000010004b658
- (_Bool)sendProfileData:(id)arg1 withIdentifier:(id)arg2 toPurgatoryForTargetDeviceType:(unsigned long long)arg3 outError:(id *)arg4;	// IMP=0x000000010004b404
- (id)_installedProfileWithIdentifier:(id)arg1 installationType:(long long)arg2;	// IMP=0x000000010004aa2c
- (void)recomputeProfileRestrictionsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010004a050
- (void)cleanUp;	// IMP=0x0000000100049be0
- (void)removeManagedProfilesIfNecessary;	// IMP=0x0000000100049ae0
- (void)removeUninstalledProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3;	// IMP=0x0000000100049ab8
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 options:(id)arg3;	// IMP=0x000000010004984c
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2;	// IMP=0x000000010004983c
- (void)_cleanUpAfterRemovingProfileWithIdentifier:(id)arg1 installedForUser:(_Bool)arg2 profileHandler:(id)arg3 oldRestrictions:(id)arg4;	// IMP=0x00000001000492ac
- (void)_reallyRemoveProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 profileInstalled:(_Bool)arg3 targetDeviceType:(unsigned long long)arg4 options:(id)arg5;	// IMP=0x0000000100048b88
- (void)removeAllProfilesFromInstallationQueue;	// IMP=0x0000000100048b40
- (id)_managingProfileIdentifierForProfileIdentifier:(id)arg1;	// IMP=0x0000000100048a6c
- (void)_removeOrphanedResources;	// IMP=0x0000000100047ed4
- (_Bool)interactionClient:(id)arg1 didRequestPreflightUserInputResponses:(id)arg2 forPayloadIndex:(unsigned long long)arg3 outError:(id *)arg4;	// IMP=0x0000000100047cdc
- (id)updateProfileWithIdentifier:(id)arg1 interactionClient:(id)arg2 installForSystem:(_Bool)arg3 outError:(id *)arg4;	// IMP=0x0000000100047438
- (id)updateProfileWithIdentifier:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;	// IMP=0x00000001000473c8
- (id)_profileNotEligibleErrorWithProfile:(id)arg1;	// IMP=0x000000010004730c
- (id)_watchInformationOutIsCellularSupported:(_Bool *)arg1;	// IMP=0x0000000100047304
- (id)_preflightProfileForInstallationOnWatch:(id)arg1;	// IMP=0x0000000100046dbc
- (id)_preflightProfileForInstallationOnHomePod:(id)arg1;	// IMP=0x0000000100046aa0
- (id)_errorUnacceptablePayload:(id)arg1;	// IMP=0x00000001000469e4
- (_Bool)_overrideProfileValidation;	// IMP=0x0000000100046980
- (id)installProfileData:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000100044b18
- (id)existingProfileContainingPayloadClass:(Class)arg1 inProfilesWithFilterFlags:(int)arg2 excludingProfileIdentifier:(id)arg3;	// IMP=0x000000010004492c
- (id)existingProfileContainingPayloadClass:(Class)arg1 excludingProfileIdentifier:(id)arg2;	// IMP=0x0000000100044918
- (_Bool)_showWarnings:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;	// IMP=0x0000000100044844
- (_Bool)_showWarningsForUpdatingProfile:(id)arg1 originalProfile:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x000000010004472c
- (_Bool)_showWarningsForProfile:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;	// IMP=0x0000000100044684
- (id)setAsideDictionariesForPayloadHandlerClass:(Class)arg1;	// IMP=0x0000000100044620
- (void)addSetAsideDictionary:(id)arg1 forPayloadHandlerClass:(Class)arg2;	// IMP=0x0000000100044544
- (id)setAsideAccountIdentifiersForPayloadClass:(Class)arg1;	// IMP=0x00000001000444a0
- (void)addSetAsideAccountIdentifier:(id)arg1 forPayloadClass:(Class)arg2;	// IMP=0x000000010004438c
- (_Bool)deviceSupervisionRequiredForPayload:(id)arg1;	// IMP=0x00000001000441d4
- (id)_installProfileHandler:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000100041890
- (id)_deviceLockedError;	// IMP=0x0000000100041600
- (id)_guardAgainstNoMDMPayloadWithNewProfile:(id)arg1 oldProfile:(id)arg2;	// IMP=0x0000000100041488
- (id)_validateMDMReplacementNewProfile:(id)arg1 oldProfile:(id)arg2 client:(id)arg3;	// IMP=0x0000000100041044
- (_Bool)_promptUserForMAIDSignIn:(id)arg1 personaID:(id)arg2 handler:(id)arg3 interactionClient:(id)arg4 outError:(id *)arg5;	// IMP=0x0000000100040f18
- (_Bool)_promptUserForComplianceWithRestrictions:(id)arg1 handler:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x00000001000406c4
- (id)_userCancelledErrorWithFriendlyName:(id)arg1;	// IMP=0x000000010004062c
- (id)_invalidInputError;	// IMP=0x0000000100040594
- (id)_installationHaltedTopLevelError;	// IMP=0x000000010004047c
- (id)_uiProfileInstallationDisabledTopLevelError;	// IMP=0x00000001000403e4
- (id)_targetDeviceMismatchError;	// IMP=0x000000010004034c
- (id)_targetDeviceInvalidError;	// IMP=0x00000001000402b4
- (id)_targetDeviceArchivedError;	// IMP=0x000000010004021c
- (id)_targetDeviceUnavailableError;	// IMP=0x0000000100040184
- (id)_targetDeviceErrorWithUnderlyingError:(id)arg1;	// IMP=0x00000001000400d4
- (id)_malformedPayloadErrorWithUnderlyingError:(id)arg1;	// IMP=0x0000000100040024
- (id)_malformedPayloadErrorInternal:(_Bool)arg1;	// IMP=0x000000010003ff70
- (id)_queueProfileData:(id)arg1 profile:(id)arg2 forDevice:(unsigned long long)arg3;	// IMP=0x000000010003fa10
- (long long)_targetValidationStatusForProfile:(id)arg1;	// IMP=0x000000010003f8ec
- (void)queueProfileDataForInstallation:(id)arg1 originalFileName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003ee80
- (id)popProvisioningProfileDataAtHeadOfInstallationQueue;	// IMP=0x000000010003ee00
- (_Bool)queueProvisioningProfileDataForInstallation:(id)arg1 outError:(id *)arg2;	// IMP=0x000000010003ec9c
- (id)_badProvisioningProfileError;	// IMP=0x000000010003ec04
- (id)popProfileDataAtHeadOfInstallationQueue;	// IMP=0x000000010003eb84
- (id)pathToInstalledProfileByUUID:(id)arg1;	// IMP=0x000000010003e7fc
- (id)pathToUninstalledProfileByIdentifier:(id)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3;	// IMP=0x000000010003e704
- (id)pathToInstalledProfileByIdentifier:(id)arg1 installationType:(long long)arg2;	// IMP=0x000000010003e5e4
- (id)identifiersOfInstalledProfilesWithFilterFlags:(int)arg1;	// IMP=0x000000010003e580
- (id)init;	// IMP=0x000000010003e4cc

@end
