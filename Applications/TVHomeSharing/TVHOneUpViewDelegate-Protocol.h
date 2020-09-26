//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TVHOneUpView, UIView;

@protocol TVHOneUpViewDelegate <NSObject>

@optional
- (void)oneUpView:(TVHOneUpView *)arg1 didPlayItemAtIndex:(unsigned long long)arg2;
- (void)oneUpView:(TVHOneUpView *)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)oneUpView:(TVHOneUpView *)arg1 didFocusItemAtIndex:(unsigned long long)arg2;
- (void)oneUpView:(TVHOneUpView *)arg1 didEndDisplayingView:(UIView *)arg2 forItemAtIndex:(long long)arg3;
- (void)oneUpView:(TVHOneUpView *)arg1 willDisplayView:(UIView *)arg2 forItemAtIndex:(long long)arg3;
- (void)oneUpView:(TVHOneUpView *)arg1 willBeginViewTransitionForFocusedView:(UIView *)arg2;
@end

