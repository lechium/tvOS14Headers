//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "UINavigationControllerDelegate-Protocol.h"

@class NSString;

@interface TVHNavigationController : UINavigationController <UINavigationControllerDelegate>
{
}

- (void)_updatePurgeableViewControllers;	// IMP=0x00000001000933a0
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;	// IMP=0x0000000100093300
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000001000931f4
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000001000930f8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010009305c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
