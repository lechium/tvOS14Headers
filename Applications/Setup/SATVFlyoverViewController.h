//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

#import "SATVConsentViewControllerDataSource-Protocol.h"
#import "SATVConsentViewControllerDelegate-Protocol.h"

@class NSString;

@interface SATVFlyoverViewController : TVSKViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010001d8b4
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_callCompletionWithEnableFlyover:(_Bool)arg1;	// IMP=0x000000010001d814
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x000000010001d790
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x000000010001d70c
- (id)footnoteTextForConsentViewController:(id)arg1;	// IMP=0x000000010001d68c
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010001d60c
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010001d58c
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x000000010001d50c
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x000000010001d48c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010001d41c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010001d398
- (void)viewDidLoad;	// IMP=0x000000010001d260

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
