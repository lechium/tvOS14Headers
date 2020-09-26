//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTModalDismissing-Protocol.h"

@class NSString, UIAlertController, UIBarButtonItem;

@interface MTAddPodcastOrStationController : NSObject <MTModalDismissing>
{
    UIBarButtonItem *_plusButtonItem;	// 8 = 0x8
    UIAlertController *_alertController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100082494
@property(nonatomic) __weak UIAlertController *alertController; // @synthesize alertController=_alertController;
- (void)dismissAllModalsAnimated:(_Bool)arg1;	// IMP=0x00000001000823e4
- (_Bool)userHasSomePodcasts;	// IMP=0x00000001000822d0
- (id)presentingViewController;	// IMP=0x0000000100082274
- (id)createAndSaveStationWithTitle:(id)arg1;	// IMP=0x0000000100081f1c
- (void)presentStationWithTitle:(id)arg1;	// IMP=0x0000000100081e74
- (void)presentAddStationUI;	// IMP=0x000000010008199c
- (void)performSubscribe:(id)arg1;	// IMP=0x00000001000818fc
- (void)presentAddPodcastUIWithUrl:(id)arg1;	// IMP=0x0000000100081320
- (void)presentAddPodcastUI;	// IMP=0x0000000100081310
- (void)plusButtonPressed:(id)arg1;	// IMP=0x0000000100080eac
- (id)plusButtonItem;	// IMP=0x0000000100080e4c
- (id)init;	// IMP=0x0000000100080df4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

