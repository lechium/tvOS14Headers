//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UINavigationController, UIViewController;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@protocol UINavigationControllerDelegate <NSObject>

@optional
- (id <UIViewControllerAnimatedTransitioning>)navigationController:(UINavigationController *)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(UIViewController *)arg3 toViewController:(UIViewController *)arg4;
- (id <UIViewControllerInteractiveTransitioning>)navigationController:(UINavigationController *)arg1 interactionControllerForAnimationController:(id <UIViewControllerAnimatedTransitioning>)arg2;
- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(UINavigationController *)arg1;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(UINavigationController *)arg1;
- (void)navigationController:(UINavigationController *)arg1 didShowViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
- (void)navigationController:(UINavigationController *)arg1 willShowViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
@end

