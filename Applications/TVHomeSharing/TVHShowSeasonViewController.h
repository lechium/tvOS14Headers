//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHMediaEntitiesFetchViewController.h"

#import "TVHMediaEntitiesFetchViewControllerDelegate-Protocol.h"
#import "TVHSeasonDetailsViewControllerDelegate-Protocol.h"
#import "TVHShowSeasonPickerViewControllerDelegate-Protocol.h"

@class NSArray, NSString, TVHKMediaEntitiesFetchContext, TVHKMediaEntityCollection, TVHKMediaEntityIdentifier, TVHSeasonDetailsContainerViewController, TVHShowSeasonPickerViewController, TVHShowsInfoCenter;

@interface TVHShowSeasonViewController : TVHMediaEntitiesFetchViewController <TVHMediaEntitiesFetchViewControllerDelegate, TVHShowSeasonPickerViewControllerDelegate, TVHSeasonDetailsViewControllerDelegate>
{
    TVHShowsInfoCenter *_showsInfoCenter;	// 8 = 0x8
    TVHKMediaEntitiesFetchContext *_seasonsFetchContext;	// 16 = 0x10
    TVHKMediaEntityCollection *_show;	// 24 = 0x18
    NSArray *_seasons;	// 32 = 0x20
    TVHKMediaEntityCollection *_selectedSeason;	// 40 = 0x28
    TVHKMediaEntityIdentifier *_initialSeasonIdentifier;	// 48 = 0x30
    TVHSeasonDetailsContainerViewController *_seasonDetailsContainerViewController;	// 56 = 0x38
    TVHShowSeasonPickerViewController *_seasonPickerViewController;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000ad864
@property(retain, nonatomic) TVHShowSeasonPickerViewController *seasonPickerViewController; // @synthesize seasonPickerViewController=_seasonPickerViewController;
@property(retain, nonatomic) TVHSeasonDetailsContainerViewController *seasonDetailsContainerViewController; // @synthesize seasonDetailsContainerViewController=_seasonDetailsContainerViewController;
@property(copy, nonatomic) TVHKMediaEntityIdentifier *initialSeasonIdentifier; // @synthesize initialSeasonIdentifier=_initialSeasonIdentifier;
@property(retain, nonatomic) TVHKMediaEntityCollection *selectedSeason; // @synthesize selectedSeason=_selectedSeason;
@property(copy, nonatomic) NSArray *seasons; // @synthesize seasons=_seasons;
@property(retain, nonatomic) TVHKMediaEntityCollection *show; // @synthesize show=_show;
@property(readonly, nonatomic) TVHKMediaEntitiesFetchContext *seasonsFetchContext; // @synthesize seasonsFetchContext=_seasonsFetchContext;
@property(readonly, nonatomic) TVHShowsInfoCenter *showsInfoCenter; // @synthesize showsInfoCenter=_showsInfoCenter;
- (id)_showsFetchContext;	// IMP=0x00000001000ad770
- (id)_newSeasonDetailsViewController;	// IMP=0x00000001000ad638
- (void)_dismissSeasonPicker;	// IMP=0x00000001000ad5d8
- (void)showSeasonPickerViewControllerDidDismiss:(id)arg1;	// IMP=0x00000001000ad5cc
- (void)showSeasonPickerViewController:(id)arg1 didSelectSeason:(id)arg2;	// IMP=0x00000001000ad434
- (void)seasonDetailsViewControllerDidSelectSeasonPicker:(id)arg1;	// IMP=0x00000001000ad2b4
- (void)seasonDetailsViewController:(id)arg1 didOverrideUserInterfaceStyle:(long long)arg2;	// IMP=0x00000001000ad2a4
- (void)mediaEntitiesFetchViewController:(id)arg1 updateContentViewController:(id)arg2 withSourceMediaEntity:(id)arg3 sourceMediaEntityBackgroundImageInfo:(id)arg4;	// IMP=0x00000001000ad264
- (void)mediaEntitiesFetchViewController:(id)arg1 updateContentViewController:(id)arg2 withFetchControllerResultSet:(id)arg3;	// IMP=0x00000001000acfdc
- (id)mediaEntitiesFetchViewController:(id)arg1 contentViewControllerWithFetchControllerResultSet:(id)arg2 sourceMediaEntity:(id)arg3 sourceMediaEntityBackgroundImageInfo:(id)arg4;	// IMP=0x00000001000acd78
- (id)initWithShow:(id)arg1 showsFetchContext:(id)arg2 showsInfoCenter:(id)arg3 seasonIdentifier:(id)arg4;	// IMP=0x00000001000ac9ec
- (id)initWithMediaLibrary:(id)arg1 fetchRequests:(id)arg2 mode:(unsigned long long)arg3 sourceMediaEntity:(id)arg4 sourceMediaEntitiesFetchContext:(id)arg5;	// IMP=0x00000001000ac964

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
