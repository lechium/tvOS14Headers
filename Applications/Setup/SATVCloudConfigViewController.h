//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

#import "SATVConsentViewControllerDataSource-Protocol.h"
#import "SATVConsentViewControllerDelegate-Protocol.h"

@class NSString;

@interface SATVCloudConfigViewController : TVSKViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000ec78
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_obliterate;	// IMP=0x000000010000eb9c
- (void)_leaveRemoteManagementAndErase;	// IMP=0x000000010000e760
- (void)_showEraseDeviceAlert;	// IMP=0x000000010000e504
- (void)showLeaveRemoteManagementAlert;	// IMP=0x000000010000e2a8
- (void)_presentEraseAlertWithTitle:(id)arg1 message:(id)arg2 eraseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e03c
- (void)_applyConfiguration:(_Bool)arg1;	// IMP=0x000000010000df78
- (id)_aboutText;	// IMP=0x000000010000d9a4
- (_Bool)consentViewControllerCanSelectDissent:(id)arg1;	// IMP=0x000000010000d950
- (void)consentViewControllerDidSelectAuxiliary:(id)arg1;	// IMP=0x000000010000d944
- (void)consentViewControllerDidSelectFooter:(id)arg1;	// IMP=0x000000010000d820
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x000000010000d79c
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x000000010000d718
- (id)auxiliaryButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010000d644
- (id)footnoteTextForConsentViewController:(id)arg1;	// IMP=0x000000010000d4f8
- (id)footerButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010000d478
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010000d354
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010000d22c
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x000000010000d074
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x000000010000cff4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010000cf80
- (void)viewDidLoad;	// IMP=0x000000010000ce78
- (void)autoAdvance;	// IMP=0x000000010000ce68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

