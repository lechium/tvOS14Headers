//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, OBPrivacyFlow, OBPrivacySplashController, PBFeatureInfoViewController, UIView;
@protocol PBSiriDataSharingOptInOfferViewControllerDelegate;

@interface PBSiriDataSharingOptInOfferViewController : UIViewController <UIViewControllerTransitioningDelegate>
{
    _Bool _termsVisible;	// 8 = 0x8
    id <PBSiriDataSharingOptInOfferViewControllerDelegate> _delegate;	// 16 = 0x10
    UIView *_dialogContainerView;	// 24 = 0x18
    PBFeatureInfoViewController *_featureInfoViewController;	// 32 = 0x20
    OBPrivacySplashController *_termsViewController;	// 40 = 0x28
    OBPrivacyFlow *_privacyFlow;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100084424
@property(readonly, nonatomic) OBPrivacyFlow *privacyFlow; // @synthesize privacyFlow=_privacyFlow;
@property(readonly, nonatomic) OBPrivacySplashController *termsViewController; // @synthesize termsViewController=_termsViewController;
@property(readonly, nonatomic) PBFeatureInfoViewController *featureInfoViewController; // @synthesize featureInfoViewController=_featureInfoViewController;
@property(readonly, nonatomic) UIView *dialogContainerView; // @synthesize dialogContainerView=_dialogContainerView;
@property(nonatomic) _Bool termsVisible; // @synthesize termsVisible=_termsVisible;
@property(nonatomic) __weak id <PBSiriDataSharingOptInOfferViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_readAboutText:(id)arg1;	// IMP=0x0000000100083de0
- (void)_didNotCompleteOptIn;	// IMP=0x0000000100083d84
- (void)_optOut:(id)arg1;	// IMP=0x0000000100083cf0
- (void)_optIn:(id)arg1;	// IMP=0x0000000100083c5c
- (void)_handleHomeButton:(id)arg1;	// IMP=0x0000000100083b44
- (void)_handleMenuButton:(id)arg1;	// IMP=0x00000001000839f0
- (id)preferredFocusEnvironments;	// IMP=0x0000000100083940
- (void)viewDidLoad;	// IMP=0x000000010008313c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

