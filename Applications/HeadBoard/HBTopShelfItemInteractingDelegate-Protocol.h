//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HBTopShelfAction, HBTopShelfItem;
@protocol HBTopShelfItemInteracting;

@protocol HBTopShelfItemInteractingDelegate <NSObject>
- (void)topShelfItemInteracting:(id <HBTopShelfItemInteracting>)arg1 didSelectAction:(HBTopShelfAction *)arg2 forItem:(HBTopShelfItem *)arg3 completionHandler:(void (^)(void))arg4;
- (void)topShelfItemInteracting:(id <HBTopShelfItemInteracting>)arg1 didShowItem:(HBTopShelfItem *)arg2;
@end

