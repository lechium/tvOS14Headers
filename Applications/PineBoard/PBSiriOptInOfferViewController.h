//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class OBPrivacyFlow, OBPrivacySplashController, PBFeatureInfoViewController, UIView;
@protocol PBSiriOptInOfferViewControllerDelegate;

@interface PBSiriOptInOfferViewController : UIViewController
{
    _Bool _offerDictationOnly;	// 8 = 0x8
    _Bool _termsVisible;	// 9 = 0x9
    id <PBSiriOptInOfferViewControllerDelegate> _delegate;	// 16 = 0x10
    UIView *_dialogContainerView;	// 24 = 0x18
    PBFeatureInfoViewController *_featureInfoViewController;	// 32 = 0x20
    OBPrivacySplashController *_termsViewController;	// 40 = 0x28
    OBPrivacyFlow *_privacyFlow;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100190424
@property(readonly, nonatomic) OBPrivacyFlow *privacyFlow; // @synthesize privacyFlow=_privacyFlow;
@property(readonly, nonatomic) OBPrivacySplashController *termsViewController; // @synthesize termsViewController=_termsViewController;
@property(readonly, nonatomic) PBFeatureInfoViewController *featureInfoViewController; // @synthesize featureInfoViewController=_featureInfoViewController;
@property(readonly, nonatomic) UIView *dialogContainerView; // @synthesize dialogContainerView=_dialogContainerView;
@property(nonatomic) _Bool termsVisible; // @synthesize termsVisible=_termsVisible;
@property(nonatomic) __weak id <PBSiriOptInOfferViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool offerDictationOnly; // @synthesize offerDictationOnly=_offerDictationOnly;
- (void)_readAboutText:(id)arg1;	// IMP=0x000000010018fdac
- (void)_didNotCompleteOptIn;	// IMP=0x000000010018fd50
- (void)_optOut:(id)arg1;	// IMP=0x000000010018fcbc
- (void)_optIn:(id)arg1;	// IMP=0x000000010018fc28
- (void)_handleHomeButton:(id)arg1;	// IMP=0x000000010018fb10
- (void)_handleMenuButton:(id)arg1;	// IMP=0x000000010018f9bc
- (id)preferredFocusEnvironments;	// IMP=0x000000010018f90c
- (void)viewDidLoad;	// IMP=0x000000010018f040
- (id)initWithOfferDictationOnly:(_Bool)arg1;	// IMP=0x000000010018ef5c

@end

