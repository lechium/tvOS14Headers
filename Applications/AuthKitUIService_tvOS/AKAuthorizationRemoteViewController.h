//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AKAuthorizationTTSUViewControllerDelegate-Protocol.h"
#import "PBSViewServicePresenter-Protocol.h"

@class AKAuthorizationTTSUViewController, AKAuthorizationTVServicePresenter, NSString;

@interface AKAuthorizationRemoteViewController : UIViewController <AKAuthorizationTTSUViewControllerDelegate, PBSViewServicePresenter>
{
    AKAuthorizationTVServicePresenter *_presenter;	// 8 = 0x8
    AKAuthorizationTTSUViewController *_ttsuViewController;	// 16 = 0x10
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0000000100001524
+ (id)_exportedInterface;	// IMP=0x000000010000138c
- (void).cxx_destruct;	// IMP=0x0000000100001ce8
@property(retain, nonatomic) AKAuthorizationTTSUViewController *ttsuViewController; // @synthesize ttsuViewController=_ttsuViewController;
@property(retain, nonatomic) AKAuthorizationTVServicePresenter *presenter; // @synthesize presenter=_presenter;
- (id)_imageIORepresentationWithImage:(id)arg1 type:(id)arg2 options:(id)arg3;	// IMP=0x0000000100001b98
- (void)_handleFetchAppIconMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000015d4
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000137c
- (void)viewServiceHandleMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000126c
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x000000010000117c
- (void)authorizationTTSUViewControllerDidDismiss:(id)arg1;	// IMP=0x0000000100001138

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
