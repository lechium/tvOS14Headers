//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileInstallation/MIGlobalConfiguration.h>

@class NSArray;

@interface MIDaemonConfiguration : MIGlobalConfiguration
{
    _Bool _codeSigningEnforcementIsDisabled;	// 8 = 0x8
    _Bool _isInternalImageType;	// 9 = 0x9
    _Bool _skipDeviceFamilyCheck;	// 10 = 0xa
    _Bool _skipThinningCheck;	// 11 = 0xb
    _Bool _allowPatchWithoutSinf;	// 12 = 0xc
    unsigned int _installQOSOverride;	// 16 = 0x10
    long long _nSimultaneousInstallations;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000100024358
@property(readonly, nonatomic) long long nSimultaneousInstallations; // @synthesize nSimultaneousInstallations=_nSimultaneousInstallations;
@property(readonly, nonatomic) _Bool allowPatchWithoutSinf; // @synthesize allowPatchWithoutSinf=_allowPatchWithoutSinf;
@property(readonly, nonatomic) _Bool skipThinningCheck; // @synthesize skipThinningCheck=_skipThinningCheck;
@property(readonly, nonatomic) _Bool skipDeviceFamilyCheck; // @synthesize skipDeviceFamilyCheck=_skipDeviceFamilyCheck;
@property(readonly, nonatomic) unsigned int installQOSOverride; // @synthesize installQOSOverride=_installQOSOverride;
@property(readonly, copy, nonatomic) NSArray *diskImageApplicationsDirectories;
- (id)diskImageMountPoints;	// IMP=0x00000001000248fc
- (id)diskImageAppBundleIDToInfoMap;	// IMP=0x000000010002477c
@property(nonatomic) _Bool haveUpdatedPluginContainersWithParentID;
@property(readonly, nonatomic) _Bool isInternalImageType; // @synthesize isInternalImageType=_isInternalImageType;
@property(readonly, nonatomic) _Bool codeSigningEnforcementIsDisabled; // @synthesize codeSigningEnforcementIsDisabled=_codeSigningEnforcementIsDisabled;
- (id)init;	// IMP=0x0000000100023edc

@end

