//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TVDMainView;

@protocol TVDMainViewDelegate <NSObject>
- (void)mainViewDidReceiveHistoryAction:(TVDMainView *)arg1;
- (void)mainViewDidReceiveDoneAction:(TVDMainView *)arg1;
- (void)mainViewDidReceiveCloseAction:(TVDMainView *)arg1;
@end

