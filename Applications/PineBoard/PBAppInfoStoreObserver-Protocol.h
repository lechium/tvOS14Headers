//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMapTable, NSSet, PBAppInfoStore;

@protocol PBAppInfoStoreObserver <NSObject>
- (void)appInfoStore:(PBAppInfoStore *)arg1 didAddInfos:(NSSet *)arg2 removeInfos:(NSSet *)arg3 updateInfos:(NSMapTable *)arg4 updatedConfiguration:(NSMapTable *)arg5;
@end

