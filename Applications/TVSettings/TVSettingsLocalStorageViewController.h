//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

#import "TSKOpenViaURLViewControllerProtocol-Protocol.h"

@class NSString, TSKPreviewViewController, TSKSettingItem, TVSettingsUsageFacade;

@interface TVSettingsLocalStorageViewController : TSKViewController <TSKOpenViaURLViewControllerProtocol>
{
    _Bool _displayQuotaExceededIfNeeded;	// 8 = 0x8
    TSKSettingItem *_lastFocusedItem;	// 16 = 0x10
    TSKPreviewViewController *_appIconPreviewViewController;	// 24 = 0x18
    TVSettingsUsageFacade *_usageFacade;	// 32 = 0x20
    NSString *_quotaMessage;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100067a24
@property(nonatomic) _Bool displayQuotaExceededIfNeeded; // @synthesize displayQuotaExceededIfNeeded=_displayQuotaExceededIfNeeded;
@property(retain, nonatomic) NSString *quotaMessage; // @synthesize quotaMessage=_quotaMessage;
@property(retain, nonatomic) TVSettingsUsageFacade *usageFacade; // @synthesize usageFacade=_usageFacade;
@property(retain, nonatomic) TSKPreviewViewController *appIconPreviewViewController; // @synthesize appIconPreviewViewController=_appIconPreviewViewController;
@property(retain, nonatomic) TSKSettingItem *lastFocusedItem; // @synthesize lastFocusedItem=_lastFocusedItem;
- (id)_byteCountFormatter;	// IMP=0x0000000100067958
- (void)_updateQuotaMessage;	// IMP=0x00000001000675dc
- (void)_showDeleteConfirmationForItem:(id)arg1;	// IMP=0x00000001000670cc
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100067014
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000100066dc4
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100066dbc
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x0000000100066b7c
- (id)title;	// IMP=0x0000000100066b0c
- (id)loadSettingGroups;	// IMP=0x0000000100066744
- (void)dealloc;	// IMP=0x00000001000666d8
- (void)viewDidLoad;	// IMP=0x0000000100066604
- (void)displayTriggeredByURL:(id)arg1;	// IMP=0x00000001000665dc
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000001000663bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

