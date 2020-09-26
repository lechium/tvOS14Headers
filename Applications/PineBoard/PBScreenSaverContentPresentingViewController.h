//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBScreenSaverTransitionHandling-Protocol.h"
#import "PBSimpleRemoteViewControllerDelegate-Protocol.h"
#import "PBSystemOverlayContentPresenting-Protocol.h"

@class NSString, PBScreenSaverDismissalTransaction, PBScreenSaverPresentationTransaction, UIApplicationSceneDeactivationAssertion, UIImageView;
@protocol PBSystemOverlayContentDelegate;

@interface PBScreenSaverContentPresentingViewController : UIViewController <PBSimpleRemoteViewControllerDelegate, PBSystemOverlayContentPresenting, PBScreenSaverTransitionHandling>
{
    _Bool _interruptible;	// 8 = 0x8
    _Bool _acceptsEventFocus;	// 9 = 0x9
    _Bool _allowsInteraction;	// 10 = 0xa
    id <PBSystemOverlayContentDelegate> _contentDelegate;	// 16 = 0x10
    UIViewController *_childViewController;	// 24 = 0x18
    PBScreenSaverPresentationTransaction *_presentationTransaction;	// 32 = 0x20
    PBScreenSaverDismissalTransaction *_dismissalTransaction;	// 40 = 0x28
    UIImageView *_snapshotImageView;	// 48 = 0x30
    UIApplicationSceneDeactivationAssertion *_screensaverSceneDeactivationAssertion;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001000f3478
@property(retain, nonatomic) UIApplicationSceneDeactivationAssertion *screensaverSceneDeactivationAssertion; // @synthesize screensaverSceneDeactivationAssertion=_screensaverSceneDeactivationAssertion;
@property(readonly, nonatomic) UIImageView *snapshotImageView; // @synthesize snapshotImageView=_snapshotImageView;
@property(readonly, nonatomic) PBScreenSaverDismissalTransaction *dismissalTransaction; // @synthesize dismissalTransaction=_dismissalTransaction;
@property(readonly, nonatomic) PBScreenSaverPresentationTransaction *presentationTransaction; // @synthesize presentationTransaction=_presentationTransaction;
@property(readonly, nonatomic) _Bool allowsInteraction; // @synthesize allowsInteraction=_allowsInteraction;
@property(readonly, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(nonatomic) _Bool acceptsEventFocus; // @synthesize acceptsEventFocus=_acceptsEventFocus;
@property(nonatomic) __weak id <PBSystemOverlayContentDelegate> contentDelegate; // @synthesize contentDelegate=_contentDelegate;
@property(readonly, nonatomic, getter=isInterruptible) _Bool interruptible; // @synthesize interruptible=_interruptible;
- (void)_beginDismissalTransactionAnimated:(_Bool)arg1 shouldUpdateWallpaper:(_Bool)arg2 shouldApplyStartValues:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000f3014
- (void)viewServiceDidTerminate;	// IMP=0x00000001000f2f4c
- (void)viewServiceDidDismiss:(id)arg1;	// IMP=0x00000001000f2ec0
- (void)viewService:(id)arg1 willDismissWithResult:(id)arg2;	// IMP=0x00000001000f2e00
- (void)dismissContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000f2980
- (void)presentContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000f2734
- (void)screenSaverTransitionUpdatedAcceptEvents:(_Bool)arg1;	// IMP=0x00000001000f2348
- (void)screenSaverTransitionShowSnapshotImage:(id)arg1;	// IMP=0x00000001000f216c
@property(readonly, nonatomic) _Bool expectsEventForwarding;
- (void)viewDidLoad;	// IMP=0x00000001000f1dd0
- (id)initWithChildViewController:(id)arg1;	// IMP=0x00000001000f1c18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

