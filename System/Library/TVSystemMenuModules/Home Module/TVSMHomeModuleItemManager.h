//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFActionSetItemProvider, HFCameraItemProvider, NSArray;

@interface TVSMHomeModuleItemManager : HFItemManager
{
    NSArray *_homeItemProviders;	// 8 = 0x8
    HFCameraItemProvider *_cameraItemProvider;	// 16 = 0x10
    HFActionSetItemProvider *_actionSetItemProvider;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000b8dc
- (id)_buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x000000000000b3d8
- (id)_itemForSorting;	// IMP=0x000000000000b3cc
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x000000000000b17c

@end

