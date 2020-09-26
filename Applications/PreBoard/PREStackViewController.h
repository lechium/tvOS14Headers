//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, UIView;

@interface PREStackViewController : UIViewController
{
    NSArray *_viewControllers;	// 8 = 0x8
    UIView *_containerView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000c494
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void)didReceiveMemoryWarning;	// IMP=0x000000010000c414
- (void)viewDidLoad;	// IMP=0x000000010000c218
- (void)showViewController:(id)arg1 sender:(id)arg2;	// IMP=0x000000010000c140
- (void)replaceViewController:(id)arg1 withViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000010000c01c
- (void)removeViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010000bf3c
- (void)popToViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010000be0c
- (void)popToRootViewControllerAnimated:(_Bool)arg1;	// IMP=0x000000010000bd38
- (void)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x000000010000bc14
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000bb10
@property(readonly, nonatomic) UIViewController *visibleViewController;
@property(readonly, nonatomic) UIViewController *topViewController;
- (void)_setViewControllers:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000a86c
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010000a7e0
- (void)loadView;	// IMP=0x000000010000a674
- (id)initWithRootViewController:(id)arg1;	// IMP=0x000000010000a590
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010000a46c

@end

