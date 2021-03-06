//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TVHMediaEntitiesShelfViewControllerDelegate-Protocol.h"

@class NSString, TVHKMediaEntityCollection, TVHKMediaLibrary, TVHMediaEntitiesShelfViewController, UILabel;
@protocol TVHShowSeasonPickerViewControllerDelegate;

@interface TVHShowSeasonPickerViewController : UIViewController <TVHMediaEntitiesShelfViewControllerDelegate>
{
    id <TVHShowSeasonPickerViewControllerDelegate> _delegate;	// 8 = 0x8
    TVHKMediaEntityCollection *_show;	// 16 = 0x10
    TVHMediaEntitiesShelfViewController *_seasonsShelfViewController;	// 24 = 0x18
    TVHKMediaLibrary *_mediaLibrary;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
}

+ (id)new;	// IMP=0x000000010000eb20
- (void).cxx_destruct;	// IMP=0x000000010000f974
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) TVHKMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(readonly, nonatomic) TVHMediaEntitiesShelfViewController *seasonsShelfViewController; // @synthesize seasonsShelfViewController=_seasonsShelfViewController;
@property(readonly, nonatomic) TVHKMediaEntityCollection *show; // @synthesize show=_show;
@property(nonatomic) __weak id <TVHShowSeasonPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_menuButtonPressed:(id)arg1;	// IMP=0x000000010000f8a4
- (void)mediaEntitiesShelfViewController:(id)arg1 didSelectMediaEntity:(id)arg2;	// IMP=0x000000010000f830
- (void)mediaEntitiesShelfViewController:(id)arg1 configureLockup:(id)arg2 forMediaEntity:(id)arg3;	// IMP=0x000000010000f77c
- (id)preferredFocusEnvironments;	// IMP=0x000000010000f6e0
- (void)viewDidLayoutSubviews;	// IMP=0x000000010000f528
- (void)viewDidLoad;	// IMP=0x000000010000f228
- (void)updateSeasons:(id)arg1 changeSet:(id)arg2;	// IMP=0x000000010000f10c
@property(nonatomic) unsigned long long indexForPreferredFocusedSeason;
- (id)initWithShow:(id)arg1 seasons:(id)arg2 mediaLibrary:(id)arg3;	// IMP=0x000000010000ecf4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010000ec6c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010000ebe4
- (id)init;	// IMP=0x000000010000eb5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

