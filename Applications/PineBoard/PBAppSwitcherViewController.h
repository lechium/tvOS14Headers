//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBSystemUIPresentable-Protocol.h"

@class PBAppSwitcherCollectionViewController, PBAppSwitcherDataSource, PBAppSwitcherManager;

@interface PBAppSwitcherViewController : UIViewController <PBSystemUIPresentable>
{
    PBAppSwitcherDataSource *_dataSource;	// 8 = 0x8
    PBAppSwitcherCollectionViewController *_collectionViewController;	// 16 = 0x10
    CDUnknownBlockType _transitionCompletion;	// 24 = 0x18
    PBAppSwitcherManager *_appSwitcherManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100203564
@property(readonly, nonatomic) PBAppSwitcherManager *appSwitcherManager; // @synthesize appSwitcherManager=_appSwitcherManager;
@property(copy, nonatomic) CDUnknownBlockType transitionCompletion; // @synthesize transitionCompletion=_transitionCompletion;
@property(retain, nonatomic) PBAppSwitcherCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
@property(readonly, nonatomic) PBAppSwitcherDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) _Bool acceptsEventFocus;
@property(readonly, nonatomic) _Bool expectsEventForwarding;
- (void)invalidateSceneLayoutElements;	// IMP=0x0000000100203398
- (void)transitionToSwitcherWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100203234
- (id)preferredFocusEnvironments;	// IMP=0x00000001002031ec
- (void)viewDidLoad;	// IMP=0x0000000100202f38
- (id)initWithDataSource:(id)arg1;	// IMP=0x0000000100202e38

@end

