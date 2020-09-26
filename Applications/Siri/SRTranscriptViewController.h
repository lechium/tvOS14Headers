//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AFQueueDelegate-Protocol.h"
#import "SRSuggestionsViewControllerDelegate-Protocol.h"
#import "SRTranscriptDataSource-Protocol.h"
#import "SRTranscriptDelegate-Protocol.h"
#import "SRTranscriptViewDelegate-Protocol.h"
#import "SiriUIAceObjectViewControllerDelegate-Protocol.h"
#import "SiriUIAceObjectViewControllerDelegatePrivate-Protocol.h"
#import "SiriUISnippetViewControllerDelegate-Protocol.h"
#import "SiriUISnippetViewControllerDelegatePrivate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSIndexPath, NSMutableDictionary, NSMutableSet, NSString, NSUUID, SAUIGetResponseAlternativesPlayback, SRFullScreenEffects, SRSuggestionsViewController, SRTranscript, SRTranscriptAnimationQueue, SRTranscriptFlowLayout, SRTranscriptView, SiriUITranscriptItem, UITapGestureRecognizer;
@protocol SRTranscriptViewControllerDataSource, SRTranscriptViewControllerDelegate, SiriUIViewController;

@interface SRTranscriptViewController : UIViewController <AFQueueDelegate, SiriUISnippetViewControllerDelegate, SiriUISnippetViewControllerDelegatePrivate, SiriUIAceObjectViewControllerDelegate, SiriUIAceObjectViewControllerDelegatePrivate, SRSuggestionsViewControllerDelegate, SRTranscriptDataSource, SRTranscriptDelegate, SRTranscriptViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    long long _updateAnimationCount;	// 8 = 0x8
    _Bool _viewIsDisappearing;	// 16 = 0x10
    _Bool _isWaitingForSpeechStartPoint;	// 17 = 0x11
    _Bool _initialSpeechRecordingDidEnd;	// 18 = 0x12
    unsigned long long _displayedTranscriptItemCount;	// 24 = 0x18
    double _firstItemTopPadding;	// 32 = 0x20
    double _previousContentYOffset;	// 40 = 0x28
    NSMutableSet *_controllersTrackingScrollingBegin;	// 48 = 0x30
    NSMutableSet *_controllersTrackingScrollingEnd;	// 56 = 0x38
    double _contentOffsetPriorToDraggingY;	// 64 = 0x40
    UIViewController *_viewControllerToCallViewDidAppear;	// 72 = 0x48
    SAUIGetResponseAlternativesPlayback *_lastPlaybackCommand;	// 80 = 0x50
    long long _correctionScreenItemIndex;	// 88 = 0x58
    CDStruct_a82615c4 _keyboardInfo;	// 96 = 0x60
    long long _currentRequestSource;	// 144 = 0x90
    SRFullScreenEffects *_fullScreenEffects;	// 152 = 0x98
    _Bool _viewIsInViewHierarchy;	// 160 = 0xa0
    _Bool _didLoadConversationList;	// 161 = 0xa1
    _Bool _showsTranscriptEndWhenVisible;	// 162 = 0xa2
    id <SRTranscriptViewControllerDataSource> _dataSource;	// 168 = 0xa8
    id <SRTranscriptViewControllerDelegate> _delegate;	// 176 = 0xb0
    SRSuggestionsViewController *_suggestionsViewController;	// 184 = 0xb8
    SRTranscriptFlowLayout *_layout;	// 192 = 0xc0
    SRTranscript *_transcript;	// 200 = 0xc8
    SRTranscriptAnimationQueue *_animationQueue;	// 208 = 0xd0
    SRTranscriptAnimationQueue *_pinAnimationQueue;	// 216 = 0xd8
    double _lastAnimationTime;	// 224 = 0xe0
    double _lastPinAnimationTime;	// 232 = 0xe8
    double _currentPinMinimumDuration;	// 240 = 0xf0
    SiriUITranscriptItem *_currentPin;	// 248 = 0xf8
    NSMutableSet *_identifiersOfItemsWithPendingActions;	// 256 = 0x100
    NSMutableSet *_identifiersOfItemsWithFinishedActions;	// 264 = 0x108
    UIViewController<SiriUIViewController> *_editingViewController;	// 272 = 0x110
    UITapGestureRecognizer *_editingEndGestureRecognizer;	// 280 = 0x118
    NSIndexPath *_indexPathForPendingCellToAnimate;	// 288 = 0x120
    double _lastTranscriptDragStartTime;	// 296 = 0x128
    double _lastTranscriptEditingStartTime;	// 304 = 0x130
    NSMutableDictionary *_displayDateByTranscriptIdentifier;	// 312 = 0x138
}

- (void).cxx_destruct;	// IMP=0x000000010001c13c
@property(readonly, nonatomic, getter=_displayDateByTranscriptIdentifier) NSMutableDictionary *displayDateByTranscriptIdentifier; // @synthesize displayDateByTranscriptIdentifier=_displayDateByTranscriptIdentifier;
@property(nonatomic, getter=_lastTranscriptEditingStartTime, setter=_setLastTranscriptEditingStartTime:) double lastTranscriptEditingStartTime; // @synthesize lastTranscriptEditingStartTime=_lastTranscriptEditingStartTime;
@property(nonatomic, getter=_lastTranscriptDragStartTime, setter=_setLastTranscriptDragStartTime:) double lastTranscriptDragStartTime; // @synthesize lastTranscriptDragStartTime=_lastTranscriptDragStartTime;
@property(retain, nonatomic, getter=_indexPathForPendingCellToAnimate, setter=_setIndexPathForPendingCellToAnimate:) NSIndexPath *indexPathForPendingCellToAnimate; // @synthesize indexPathForPendingCellToAnimate=_indexPathForPendingCellToAnimate;
@property(nonatomic, getter=_showsTranscriptEndWhenVisible, setter=_setShowsTranscriptEndWhenVisible:) _Bool showsTranscriptEndWhenVisible; // @synthesize showsTranscriptEndWhenVisible=_showsTranscriptEndWhenVisible;
@property(retain, nonatomic, getter=_editingEndGestureRecognizer, setter=_setEditingEndGestureRecognizer:) UITapGestureRecognizer *editingEndGestureRecognizer; // @synthesize editingEndGestureRecognizer=_editingEndGestureRecognizer;
@property(retain, nonatomic, getter=_editingViewController, setter=_setEditingViewController:) UIViewController<SiriUIViewController> *editingViewController; // @synthesize editingViewController=_editingViewController;
@property(readonly, nonatomic, getter=_identifiersOfItemsWithFinishedActions) NSMutableSet *identifiersOfItemsWithFinishedActions; // @synthesize identifiersOfItemsWithFinishedActions=_identifiersOfItemsWithFinishedActions;
@property(readonly, nonatomic, getter=_identifiersOfItemsWithPendingActions) NSMutableSet *identifiersOfItemsWithPendingActions; // @synthesize identifiersOfItemsWithPendingActions=_identifiersOfItemsWithPendingActions;
@property(retain, nonatomic, getter=_currentPin, setter=_setCurrentPin:) SiriUITranscriptItem *currentPin; // @synthesize currentPin=_currentPin;
@property(nonatomic, getter=_currentPinMinimumDuration, setter=_setCurrentPinMinimumDuration:) double currentPinMinimumDuration; // @synthesize currentPinMinimumDuration=_currentPinMinimumDuration;
@property(nonatomic, getter=_lastPinAnimationTime, setter=_setLastPinAnimationTime:) double lastPinAnimationTime; // @synthesize lastPinAnimationTime=_lastPinAnimationTime;
@property(nonatomic, getter=_lastAnimationTime, setter=_setLastAnimationTime:) double lastAnimationTime; // @synthesize lastAnimationTime=_lastAnimationTime;
@property(readonly, nonatomic, getter=_pinAnimationQueue) SRTranscriptAnimationQueue *pinAnimationQueue; // @synthesize pinAnimationQueue=_pinAnimationQueue;
@property(readonly, nonatomic, getter=_animationQueue) SRTranscriptAnimationQueue *animationQueue; // @synthesize animationQueue=_animationQueue;
@property(nonatomic, getter=_didLoadConversationList, setter=_setDidLoadConversationList:) _Bool didLoadConversationList; // @synthesize didLoadConversationList=_didLoadConversationList;
@property(readonly, nonatomic, getter=_transcript) SRTranscript *transcript; // @synthesize transcript=_transcript;
@property(readonly, nonatomic, getter=_layout) SRTranscriptFlowLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic, getter=_suggestionsViewController) SRSuggestionsViewController *suggestionsViewController; // @synthesize suggestionsViewController=_suggestionsViewController;
@property(nonatomic, getter=_viewIsInViewHierarchy, setter=_setViewIsInViewHierarchy:) _Bool viewIsInViewHierarchy; // @synthesize viewIsInViewHierarchy=_viewIsInViewHierarchy;
@property(nonatomic) __weak id <SRTranscriptViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SRTranscriptViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)createPunchOutEvent:(id)arg1 URL:(id)arg2 appID:(id)arg3;	// IMP=0x000000010001bd0c
- (_Bool)_canShowWhileLocked;	// IMP=0x000000010001bd08
- (void)_logMetricsForSnippetAtIndexPath:(id)arg1;	// IMP=0x000000010001b984
- (void)_logMetricsForVisibleSnippets;	// IMP=0x000000010001b8c4
- (id)mostRecentMetricsContext;	// IMP=0x000000010001b790
- (void)siriStoppedFingerprintingMusic;	// IMP=0x000000010001b778
- (void)siriBeganFingerprintingMusic;	// IMP=0x000000010001b760
- (void)showSpeechAlternatives:(id)arg1;	// IMP=0x000000010001b480
- (void)showFullScreenEffect:(id)arg1;	// IMP=0x000000010001b3bc
- (void)handleGetResponseAlternativesPlayback:(id)arg1;	// IMP=0x000000010001b0a4
- (void)changeUtterance:(id)arg1;	// IMP=0x000000010001aee0
- (void)_animateSnippetConfirmation:(id)arg1;	// IMP=0x000000010001ae18
- (void)_animateSnippetCancellation:(id)arg1;	// IMP=0x000000010001ad50
- (id)_tossAnimationForCell;	// IMP=0x000000010001ab60
- (void)_animateSnippetTossInCell:(id)arg1;	// IMP=0x000000010001aa60
- (void)_performNextAnimation;	// IMP=0x000000010001a3cc
- (_Bool)_shouldConditionallyPinToTranscriptItem:(id)arg1;	// IMP=0x0000000100019e74
- (void)_performNextPinAnimation;	// IMP=0x0000000100019b88
- (void)_processPinAnimationQueue;	// IMP=0x000000010001985c
- (void)_scheduleNextPinAnimationAfterDelay:(double)arg1;	// IMP=0x00000001000197ec
- (void)_processAnimationQueue;	// IMP=0x00000001000195b8
- (void)_scheduleNextAnimationAfterDelay:(double)arg1;	// IMP=0x0000000100019548
- (double)_nextPinAnimationTime;	// IMP=0x00000001000192e4
- (double)_nextAnimationTime;	// IMP=0x0000000100019208
- (void)queue:(id)arg1 didEnqueueObjects:(id)arg2;	// IMP=0x0000000100019148
- (void)animateTranscriptWithUpdates:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019000
- (double)_pinningDifferenceForTranscriptItem:(id)arg1;	// IMP=0x0000000100018f28
- (double)_topPaddingForTranscriptItem:(id)arg1;	// IMP=0x0000000100018e60
- (double)_topPaddingForItemAtIndexPath:(id)arg1;	// IMP=0x0000000100018ca0
- (struct UIEdgeInsets)_requiredExtraSpaceToPinTranscriptItem:(id)arg1;	// IMP=0x0000000100018a98
- (void)_appendExtraSpaceToContentInsetsWithOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100018978
- (void)_appendExtraSpaceToContentInsets;	// IMP=0x0000000100018920
- (void)_pinTranscriptToItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100018774
- (void)_pinTranscriptToCurrentPin;	// IMP=0x0000000100018724
- (struct CGRect)_frameForItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000010001865c
- (void)pinItemWithIdentifier:(id)arg1;	// IMP=0x00000001000185b4
- (void)_tappedOutsideEditingView:(id)arg1;	// IMP=0x00000001000184b4
- (void)_teardownEditingViewController:(id)arg1;	// IMP=0x0000000100018400
- (void)_setupEditingForViewController:(id)arg1;	// IMP=0x00000001000182c4
- (id)_indexPathForFirstResponder;	// IMP=0x0000000100018040
- (void)_setKeyboardInfo:(CDStruct_a82615c4)arg1;	// IMP=0x0000000100017ce4
- (id)_indexPathForItemAtIndex:(long long)arg1;	// IMP=0x0000000100017ccc
- (id)_indexPathsForItemsAtIndexes:(id)arg1;	// IMP=0x0000000100017bac
- (id)_transcriptItemForSiriViewController:(id)arg1;	// IMP=0x0000000100017a38
- (void)_registerReusableView:(Class)arg1;	// IMP=0x0000000100017860
- (id)_aceViewControllerIfExistsAtItemIndex:(long long)arg1;	// IMP=0x00000001000177f4
- (id)_snippetViewControllerIfExistsAtItemIndex:(long long)arg1;	// IMP=0x0000000100017788
- (id)_snippetViewControllerIfExistsForTranscriptItem:(id)arg1;	// IMP=0x0000000100017718
- (id)_aceViewControllerIfExistsForTranscriptItem:(id)arg1;	// IMP=0x00000001000176a8
- (id)_controllerForItemIndex:(long long)arg1;	// IMP=0x0000000100017624
- (Class)aceControllerCellClass;	// IMP=0x0000000100017618
- (Class)snippetControllerCellClass;	// IMP=0x000000010001760c
- (double)_expectedWidthForItemIndex:(unsigned long long)arg1;	// IMP=0x00000001000175b0
- (_Bool)_itemIndexIsInset:(unsigned long long)arg1;	// IMP=0x0000000100017548
- (struct UIEdgeInsets)_edgeInsetsForItemIndex:(unsigned long long)arg1;	// IMP=0x00000001000174ec
- (struct UIEdgeInsets)_transcriptItemLayoutMargins;	// IMP=0x00000001000174bc
- (void)resumeTouchesIfNecessary;	// IMP=0x00000001000173d0
- (void)cancelTouchesIfNecessary;	// IMP=0x00000001000172e4
- (void)_updateKeylinesForScrollView:(id)arg1;	// IMP=0x00000001000171c4
- (void)_processHidingSnippetView:(id)arg1;	// IMP=0x0000000100016c24
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000100016bc4
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000100016ae8
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000001000169f8
- (void)notifySnippetsEndDraggingEventForScrollView:(id)arg1;	// IMP=0x00000001000168ac
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000001000167e8
- (void)notifySnippetsWillBeginDragging;	// IMP=0x00000001000166d0
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x000000010001667c
- (double)_heightForFooterAtItemIndex:(long long)arg1;	// IMP=0x0000000100016584
- (double)_heightForHeaderAtItemIndex:(long long)arg1;	// IMP=0x000000010001648c
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000001000160bc
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000100015bfc
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000100015674
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100014cb0
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100014ca0
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000100014c98
- (void)transcriptView:(id)arg1 didSetContentSize:(struct CGSize)arg2;	// IMP=0x0000000100014c38
- (void)transcript:(id)arg1 performAceCommands:(id)arg2 conversationItemIdentifier:(id)arg3;	// IMP=0x0000000100014ab8
- (void)transcript:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2;	// IMP=0x0000000100014704
- (void)transcript:(id)arg1 didRemoveTranscriptItems:(id)arg2 atIndexes:(id)arg3;	// IMP=0x0000000100014230
- (void)transcript:(id)arg1 didReloadTranscriptItemsAtIndexes:(id)arg2;	// IMP=0x0000000100014128
- (void)transcript:(id)arg1 didReplaceTranscriptItemsAtIndexes:(id)arg2 replacedTranscriptItems:(id)arg3;	// IMP=0x00000001000136ec
- (id)_invalidIndexesToRemoveBeforeIndex:(long long)arg1;	// IMP=0x0000000100013500
- (void)transcript:(id)arg1 didDelayPresentationOfItemsWithConversationItemIdentifiers:(id)arg2;	// IMP=0x0000000100013490
- (void)transcript:(id)arg1 didDiscardTranscriptItemsWithConversationItemIdentifiers:(id)arg2;	// IMP=0x00000001000133e0
- (void)transcript:(id)arg1 didInsertTranscriptItemsAtIndexes:(id)arg2;	// IMP=0x0000000100012744
- (void)_removeConversationItemWithIdentifier:(id)arg1;	// IMP=0x00000001000126f0
- (void)_removeConversationItemsWithIdentifiers:(id)arg1;	// IMP=0x0000000100012680
- (void)_updateTitle;	// IMP=0x0000000100012458
- (id)viewControllerDelegateForTranscript:(id)arg1;	// IMP=0x0000000100012454
- (_Bool)transcript:(id)arg1 itemIsRestoredAtIndex:(long long)arg2;	// IMP=0x0000000100012400
- (long long)transcript:(id)arg1 presentationStateForItemAtIndex:(long long)arg2;	// IMP=0x00000001000123b0
- (id)transcript:(id)arg1 aceObjectForItemAtIndex:(long long)arg2;	// IMP=0x0000000100012358
- (_Bool)transcript:(id)arg1 itemAtIndexIsVirgin:(long long)arg2;	// IMP=0x0000000100012308
- (id)transcript:(id)arg1 aceCommandIdentifierForItemAtIndex:(long long)arg2;	// IMP=0x00000001000122b0
- (id)transcript:(id)arg1 dialogPhaseForItemAtIndex:(long long)arg2;	// IMP=0x00000001000122a0
- (id)transcript:(id)arg1 identifierOfItemAtIndex:(long long)arg2;	// IMP=0x0000000100012248
- (id)_aceCommandIdentifierForItemAtIndex:(long long)arg1;	// IMP=0x00000001000121f4
- (id)_dialogPhaseForItemAtIndex:(long long)arg1;	// IMP=0x00000001000121a0
- (id)_conversationItemAtIndex:(long long)arg1;	// IMP=0x0000000100012144
- (long long)numberOfItemsInTranscript:(id)arg1;	// IMP=0x00000001000120f8
- (CDStruct_a82615c4)keyboardInfoForSuggestionsController:(id)arg1;	// IMP=0x0000000100012088
- (double)contentWidthForSuggestionsViewController:(id)arg1;	// IMP=0x000000010001202c
- (id)siriEnabledAppListForSuggestionsController:(id)arg1;	// IMP=0x0000000100011fd0
- (void)suggestionsViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100011f20
- (double)statusViewHeightForSuggestionsViewController:(id)arg1;	// IMP=0x0000000100011f14
- (struct CGRect)statusBarFrameForSuggestionsViewController:(id)arg1;	// IMP=0x0000000100011e98
- (void)suggestionsViewController:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x0000000100011e28
- (void)suggestionsViewDidShowSuggestions:(id)arg1;	// IMP=0x0000000100011de0
- (void)cancelSpeakingForSiriViewController:(id)arg1;	// IMP=0x0000000100011d98
- (void)siriViewController:(id)arg1 speakText:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100011d44
- (void)_speakText:(id)arg1 isPhonetic:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100011ca8
- (double)boundingWidthForSnippetViewController:(id)arg1;	// IMP=0x0000000100011bec
- (unsigned long long)navigationIndexOfSnippetViewController:(id)arg1;	// IMP=0x0000000100011b54
- (id)siriEnabledAppListForSiriViewController:(id)arg1;	// IMP=0x0000000100011af8
- (unsigned long long)siriDeviceLockStateForSnippetViewController:(id)arg1;	// IMP=0x0000000100011aa4
- (void)siriSnippetViewControllerRequestsPinning:(id)arg1;	// IMP=0x00000001000118e8
- (void)siriSnippetViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100011878
- (void)siriSnippetViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000117ec
- (void)siriSnippetViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100011764
- (void)siriSnippetViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100011704
- (void)siriSnippetViewController:(id)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;	// IMP=0x00000001000116ac
- (void)siriSnippetViewController:(id)arg1 didDismissViewController:(id)arg2;	// IMP=0x000000010001163c
- (void)siriSnippetViewController:(id)arg1 willDismissViewController:(id)arg2;	// IMP=0x00000001000115cc
- (void)siriSnippetViewController:(id)arg1 didPresentViewController:(id)arg2;	// IMP=0x000000010001155c
- (void)siriSnippetViewController:(id)arg1 willPresentViewController:(id)arg2;	// IMP=0x00000001000114ec
- (void)siriViewController:(id)arg1 setTypeToSiriViewHidden:(_Bool)arg2;	// IMP=0x0000000100011494
- (void)siriSnippetViewController:(id)arg1 setStatusViewHidden:(_Bool)arg2;	// IMP=0x000000010001143c
- (void)siriSnippetViewController:(id)arg1 setTypeToSiriViewHidden:(_Bool)arg2;	// IMP=0x00000001000113e4
- (void)siriViewController:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x0000000100011374
- (id)persistentDataStoreForSiriViewController:(id)arg1;	// IMP=0x000000010001128c
- (void)cancelRequestForSiriSnippetViewController:(id)arg1;	// IMP=0x0000000100011244
- (void)siriSnippetViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3;	// IMP=0x00000001000111b8
- (void)siriViewControllerViewDidDisappear:(id)arg1 isTopLevelViewController:(_Bool)arg2;	// IMP=0x00000001000111b4
- (void)siriViewControllerViewDidAppear:(id)arg1 isTopLevelViewController:(_Bool)arg2;	// IMP=0x00000001000111b0
- (_Bool)siriSnippetViewControllerIsVisible:(id)arg1;	// IMP=0x0000000100010e24
- (void)siriSnippetViewControllerViewDidLoad:(id)arg1;	// IMP=0x0000000100010db8
- (void)siriSnippetViewControllerWillBecomeFirstResponder:(id)arg1;	// IMP=0x0000000100010d70
- (void)siriViewController:(id)arg1 setContentOffset:(double)arg2;	// IMP=0x0000000100010bec
- (double)statusBarHeightForSiriViewController:(id)arg1;	// IMP=0x0000000100010bd0
- (struct UIEdgeInsets)siriViewControllerBackgroundInsets:(id)arg1;	// IMP=0x0000000100010a94
- (struct CGSize)siriViewControllerVisibleContentArea:(id)arg1;	// IMP=0x0000000100010a20
- (double)siriViewControllerExpectedWidth:(id)arg1;	// IMP=0x0000000100010904
- (_Bool)_inTextInputMode;	// IMP=0x00000001000108b0
- (_Bool)inTextInputModeForSuggestionsViewController:(id)arg1;	// IMP=0x00000001000108a4
- (_Bool)inTextInputModeForSiriViewController:(id)arg1;	// IMP=0x000000010001088c
- (void)siriViewControllerHeightDidChange:(id)arg1;	// IMP=0x0000000100010448
- (void)siriViewControllerHeightDidChange:(id)arg1 pinTopOfSnippet:(_Bool)arg2;	// IMP=0x000000010001043c
- (void)siriSnippetViewController:(id)arg1 pushSirilandSnippets:(id)arg2;	// IMP=0x0000000100010130
- (id)localeForSiriViewController:(id)arg1;	// IMP=0x00000001000100d4
- (void)removeSiriViewController:(id)arg1;	// IMP=0x0000000100010060
- (void)siriViewController:(id)arg1 startCorrectedSpeechRequestWithText:(id)arg2 correctionIdentifier:(id)arg3 userSelectionResults:(id)arg4;	// IMP=0x000000010000fe18
- (void)siriViewControllerDidEndEditing:(id)arg1;	// IMP=0x000000010000fc4c
- (void)siriViewControllerRequestTearDownEditingViewController:(id)arg1;	// IMP=0x000000010000fc40
- (void)siriViewControllerWillBeginEditing:(id)arg1;	// IMP=0x000000010000fb10
- (void)siriViewControllerRequestKeyboardForTapToEditWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000faa4
- (void)siriViewControllerRequestToPin:(id)arg1;	// IMP=0x000000010000f9fc
- (_Bool)siriViewControllerShouldPreventUserInteraction:(id)arg1;	// IMP=0x000000010000f9a8
- (void)siriDidReceiveViewsWithDialogPhase:(id)arg1;	// IMP=0x000000010000f830
- (void)showCorrectionScreenForSiriViewController:(id)arg1;	// IMP=0x000000010000f654
- (_Bool)shouldEnableInteractionForSiriViewController:(id)arg1;	// IMP=0x000000010000f3a8
- (void)siriViewControllerDidResignFirstResponder:(id)arg1;	// IMP=0x000000010000f360
- (void)siriViewController:(id)arg1 addSelectionResponse:(id)arg2;	// IMP=0x000000010000f254
- (id)siriViewController:(id)arg1 listItemToPickInAutodisambiguationForListItems:(id)arg2;	// IMP=0x000000010000f1d0
- (id)siriViewController:(id)arg1 disambiguationItemForListItem:(id)arg2 disambiguationKey:(id)arg3;	// IMP=0x000000010000f130
- (id)siriViewController:(id)arg1 filteredDisambiguationListItems:(id)arg2;	// IMP=0x000000010000f0ac
- (id)siriViewControllerEffectiveBundleForCoreLocation:(id)arg1;	// IMP=0x000000010000f000
- (void)siriViewController:(id)arg1 setDomainObject:(id)arg2 forIdentifier:(id)arg3;	// IMP=0x000000010000eeb0
- (id)siriViewController:(id)arg1 domainObjectForIdentifier:(id)arg2;	// IMP=0x000000010000ed74
- (id)_domainObjectStore;	// IMP=0x000000010000ed18
- (id)updatedUserUtteranceForSiriViewController:(id)arg1;	// IMP=0x000000010000ec48
- (id)additionalSpeechInterpretationsForSiriViewController:(id)arg1;	// IMP=0x000000010000eb78
- (void)siriViewController:(id)arg1 openURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000ea48
- (_Bool)siriViewController:(id)arg1 openURL:(id)arg2;	// IMP=0x000000010000e9ec
- (void)siriViewController:(id)arg1 performAceCommands:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e2a4
- (void)siriViewController:(id)arg1 performAceCommands:(id)arg2;	// IMP=0x000000010000e250
- (_Bool)_containStartRequest:(id)arg1;	// IMP=0x000000010000e0b8
- (_Bool)logTranscriptContents;	// IMP=0x000000010000df3c
- (id)requestContext;	// IMP=0x000000010000de4c
- (void)siriDidDetectSpeechStartpoint;	// IMP=0x000000010000dc74
- (void)endEditingAndCorrect:(_Bool)arg1;	// IMP=0x000000010000dc10
- (void)siriRequestWillStart;	// IMP=0x000000010000db20
- (void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1;	// IMP=0x000000010000d9dc
- (void)presentationStateDidChangeForItemsAtIndexes:(id)arg1;	// IMP=0x000000010000d970
- (void)removeItemsWithIdentifiers:(id)arg1 atIndexes:(id)arg2;	// IMP=0x000000010000d8e8
- (void)reloadItemsAtIndexes:(id)arg1;	// IMP=0x000000010000d87c
- (void)insertItemsAtIndexes:(id)arg1;	// IMP=0x000000010000d7e0
- (void)reloadData;	// IMP=0x000000010000d588
@property(readonly, nonatomic) _Bool transcriptIsAnimating;
- (void)restoreTranscriptPositionAnimated:(_Bool)arg1;	// IMP=0x000000010000d304
- (void)saveTranscriptPosition;	// IMP=0x000000010000d188
- (void)showTranscriptEnd;	// IMP=0x000000010000d0fc
- (void)showTranscriptStart;	// IMP=0x000000010000d014
@property(readonly, nonatomic) _Bool transcriptEndIsVisible;
@property(readonly, nonatomic) _Bool transcriptStartIsVisible;
- (struct CGPoint)_maxContentOffset;	// IMP=0x000000010000ce74
- (double)_contentHeight;	// IMP=0x000000010000ce00
- (struct CGPoint)_contentOffset;	// IMP=0x000000010000cda4
@property(readonly, nonatomic) NSUUID *identifierOfLastDisplayedItem;
- (void)_showSuggestionsIfNecessary;	// IMP=0x000000010000c8e0
- (void)_stopShowingListeningNudgeIfNecessary;	// IMP=0x000000010000c84c
- (void)_showListeningNudgeIfNecessary;	// IMP=0x000000010000c748
- (void)keyboardHeightDidChange;	// IMP=0x000000010000c664
- (void)statusViewHeightDidChange;	// IMP=0x000000010000c60c
- (void)statusBarFrameDidChange;	// IMP=0x000000010000c600
- (double)_bottomContentOverlayHeight;	// IMP=0x000000010000c5c0
- (double)_bottomMarginHeight;	// IMP=0x000000010000c564
- (_Bool)_isKeyboardVisibleAboveSiriStatusView;	// IMP=0x000000010000c50c
- (void)_updateViewTopMarginHeight;	// IMP=0x000000010000c3e8
- (void)_updateNavigationBarFrame;	// IMP=0x000000010000c2a4
- (_Bool)_isNavigationBarHidden;	// IMP=0x000000010000c258
- (id)_navigationBar;	// IMP=0x000000010000c204
- (void)_updateStatusBarRelatedAttributes;	// IMP=0x000000010000c1d0
- (struct CGRect)_statusBarFrame;	// IMP=0x000000010000c154
- (id)_conversationItemList;	// IMP=0x000000010000c0f8
- (void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(_Bool)arg2;	// IMP=0x000000010000bfc0
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;	// IMP=0x000000010000be94
- (void)siriDidDeactivate;	// IMP=0x000000010000bdd0
- (_Bool)currentSnippetContainsFooterButtons;	// IMP=0x000000010000bcd0
- (void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2;	// IMP=0x000000010000bb7c
- (void)siriWillActivateFromSource:(long long)arg1;	// IMP=0x000000010000bad8
- (id)childViewControllerForHomeIndicatorAutoHidden;	// IMP=0x000000010000ba88
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010000b98c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010000b87c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010000b6c0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010000b200
- (_Bool)_isRootViewController;	// IMP=0x000000010000b100
- (double)_navigationControllerContentOffsetAdjustment;	// IMP=0x000000010000b0f8
- (void)_setNavigationControllerContentInsetAdjustment:(struct UIEdgeInsets)arg1;	// IMP=0x000000010000b0f4
- (id)_collectionView;	// IMP=0x000000010000b0a0
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000010000af0c
- (void)viewDidLayoutSubviews;	// IMP=0x000000010000ae54
- (void)viewDidLoad;	// IMP=0x000000010000ac88
- (void)loadView;	// IMP=0x000000010000aa30
- (void)dealloc;	// IMP=0x000000010000a8c0
- (void)invalidate;	// IMP=0x000000010000a7b4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010000a5b4
- (void)srcvc_setItemIdentifier:(id)arg1;	// IMP=0x0000000100009158
- (id)srcvc_itemIdentifier;	// IMP=0x000000010000914c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SRTranscriptView *view; // @dynamic view;

@end

