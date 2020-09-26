//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SRSuggestionsViewControllerDelegate-Protocol.h"
#import "SiriUIPresentation-Protocol.h"

@class NSString, SRSuggestionsViewController;
@protocol SiriUIPresentationDataSource, SiriUIPresentationDelegate;

@interface SiriEyesFreePresentation : UIViewController <SRSuggestionsViewControllerDelegate, SiriUIPresentation>
{
    _Bool _hasReportedPresentation;	// 8 = 0x8
    unsigned long long _numberOfSpeechRequestsWaitingToFinishSynthesis;	// 16 = 0x10
    id <SiriUIPresentationDataSource> _dataSource;	// 24 = 0x18
    id <SiriUIPresentationDelegate> _delegate;	// 32 = 0x20
    SRSuggestionsViewController *_siriUnavailableViewController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100095720
@property(readonly, nonatomic, getter=_siriUnavailableViewController) SRSuggestionsViewController *siriUnavailableViewController; // @synthesize siriUnavailableViewController=_siriUnavailableViewController;
@property(nonatomic) __weak id <SiriUIPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SiriUIPresentationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)siriIsIdleAndQuietStatusDidChange:(_Bool)arg1;	// IMP=0x000000010009554c
- (_Bool)shouldUseEventDrivenIdleAndQuietUpdates;	// IMP=0x0000000100095544
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000100095540
- (void)suggestionsViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010009553c
- (id)siriEnabledAppListForSuggestionsController:(id)arg1;	// IMP=0x0000000100095534
- (CDStruct_a82615c4)keyboardInfoForSuggestionsController:(id)arg1;	// IMP=0x000000010009550c
- (double)contentWidthForSuggestionsViewController:(id)arg1;	// IMP=0x00000001000954b0
- (double)statusViewHeightForSuggestionsViewController:(id)arg1;	// IMP=0x0000000100095454
- (struct CGRect)statusBarFrameForSuggestionsViewController:(id)arg1;	// IMP=0x00000001000953d8
- (void)suggestionsViewDidShowSuggestions:(id)arg1;	// IMP=0x00000001000953d4
- (void)viewDidLoad;	// IMP=0x00000001000951bc
- (_Bool)supportsVisualPresentationForConversationItem:(id)arg1;	// IMP=0x00000001000951b4
- (_Bool)shouldResumeInterruptedAudioPlayback;	// IMP=0x00000001000951ac
- (_Bool)supportsTextInput;	// IMP=0x00000001000951a4
- (void)_didPresentItemsAtIndexPaths:(id)arg1;	// IMP=0x0000000100094ef0
- (void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;	// IMP=0x0000000100094ee0
- (void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x0000000100094ed0
- (id)viewController;	// IMP=0x0000000100094ecc
- (void)_synthesizeSpeechWithText:(id)arg1;	// IMP=0x0000000100094d88
- (long long)options;	// IMP=0x0000000100094d80
- (void)configureForRequestOptions:(id)arg1;	// IMP=0x0000000100094c04
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4;	// IMP=0x0000000100094ad8
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000100094a74
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100094a10
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000949f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

