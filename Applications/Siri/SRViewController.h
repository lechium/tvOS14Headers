//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SRSiriViewController;

@interface SRViewController : UIViewController
{
    SRSiriViewController *_siriVC;	// 8 = 0x8
    int _expectedTeardownCounter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100099384
- (void)willEnterForegroundHandler;	// IMP=0x000000010009936c
- (void)willResignActiveHandler;	// IMP=0x0000000100099354
- (void)didBecomeActiveHandler;	// IMP=0x000000010009933c
- (void)tearDownViews;	// IMP=0x0000000100099058
- (void)_cleanupAllViews;	// IMP=0x0000000100098cc0
- (void)setUpViews;	// IMP=0x0000000100098904
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000100098900
- (void)viewDidLoad;	// IMP=0x0000000100098860

@end

