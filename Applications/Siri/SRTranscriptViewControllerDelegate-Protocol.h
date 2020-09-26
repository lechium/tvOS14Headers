//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AFUserUtterance, AFUserUtteranceSelectionResults, AceObject, NSArray, NSBundle, NSDate, NSString, NSURL, NSUUID, SASSpeechRecognized, SRTranscriptViewController, UIView, UIViewController;
@protocol SAAceCommand;

@protocol SRTranscriptViewControllerDelegate <NSObject>
- (void)willSendStartRequestForTranscriptViewController:(SRTranscriptViewController *)arg1;
- (unsigned long long)navigationIndexOfTranscriptViewController:(SRTranscriptViewController *)arg1;
- (_Bool)inTextInputModeForTranscriptViewController:(SRTranscriptViewController *)arg1;
- (CDStruct_a82615c4)keyboardInfoForTranscriptViewController:(SRTranscriptViewController *)arg1;
- (void)transcriptViewControllerDidResignFirstResponder:(SRTranscriptViewController *)arg1;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 viewDidSetContentSize:(struct CGSize)arg2;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 requestPasscodeUnlockWithCompletion:(void (^)(long long))arg2;
- (unsigned long long)deviceLockStateForTranscriptViewController:(SRTranscriptViewController *)arg1;
- (AFUserUtterance *)transcriptViewController:(SRTranscriptViewController *)arg1 updatedUserUtteranceForRefId:(NSString *)arg2;
- (NSArray *)transcriptViewController:(SRTranscriptViewController *)arg1 additionalSpeechInterpretationsForRefId:(NSString *)arg2;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 didShowGuideStartDate:(NSDate *)arg2 endDate:(NSDate *)arg3;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 didShowTipWithIdentifier:(NSUUID *)arg2 startDate:(NSDate *)arg3 endDate:(NSDate *)arg4 flowID:(NSString *)arg5;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 didShowAceViewWithIdentifier:(NSUUID *)arg2 aceViewClass:(Class)arg3 metricsContext:(NSString *)arg4 forInterval:(double)arg5;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 didScrollForInterval:(double)arg2;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 didEditSpeechRecognized:(SASSpeechRecognized *)arg2 forInterval:(double)arg3;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 shouldPresentPicker:(UIViewController *)arg2 completion:(void (^)(_Bool))arg3;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(void (^)(_Bool))arg4;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 didDismissViewController:(UIViewController *)arg2;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 didPresentViewController:(UIViewController *)arg2;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 setTypeToSiriViewHidden:(_Bool)arg2;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 setStatusViewHidden:(_Bool)arg2;
- (void)cancelSpeakingForTranscriptViewController:(SRTranscriptViewController *)arg1;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 speakText:(NSString *)arg2 isPhonetic:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)cancelRequestForTranscriptViewController:(SRTranscriptViewController *)arg1;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;
- (void)transcriptViewControllerDidEndEditing:(SRTranscriptViewController *)arg1;
- (void)transcriptViewControllerWillBeginEditing:(SRTranscriptViewController *)arg1;
- (void)transcriptViewControllerRequestKeyboardForTapToEditWithCompletion:(void (^)(_Bool))arg1;
- (_Bool)transcriptViewControllerShouldPreventUserInteraction:(SRTranscriptViewController *)arg1;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 showSiriStatusWithText:(NSString *)arg2 speakableDescription:(NSString *)arg3;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 didCorrectRecognition:(NSString *)arg2 correctionIdentifier:(id)arg3 forItemAtIndex:(long long)arg4 userSelectionResults:(AFUserUtteranceSelectionResults *)arg5;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 openURL:(NSURL *)arg2 conversationItemIdentifier:(NSUUID *)arg3 completion:(void (^)(_Bool))arg4;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 performAceCommand:(AceObject<SAAceCommand> *)arg2 conversationItemIdentifier:(NSUUID *)arg3 completion:(void (^)(_Bool))arg4;
- (NSBundle *)effectiveCoreLocationBundleForTranscriptViewController:(SRTranscriptViewController *)arg1;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 didDelayPresentationOfItemsWithIdentifiers:(NSArray *)arg2;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 willDiscardConversationItemsWithIdentifiers:(NSArray *)arg2;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 didPresentConversationItemsWithIdentifiers:(NSArray *)arg2;
- (void)transcriptViewController:(SRTranscriptViewController *)arg1 didHideVibrantView:(UIView *)arg2;
- (void)transcriptViewControllerDidShowSuggestions:(SRTranscriptViewController *)arg1;
- (_Bool)transcriptViewControllerWillShowSuggestions:(SRTranscriptViewController *)arg1;
- (_Bool)transcriptViewControllerShouldDelaySuggestions:(SRTranscriptViewController *)arg1;
- (long long)initialDisplayTypeForTranscriptViewController:(SRTranscriptViewController *)arg1;
- (double)statusViewHeightForTranscriptViewController:(SRTranscriptViewController *)arg1;
- (struct CGRect)statusBarFrameForTranscriptViewController:(SRTranscriptViewController *)arg1;
- (struct CGSize)estimatedVisibleContentSizeForTranscriptViewController:(SRTranscriptViewController *)arg1;
- (double)contentWidthForTranscriptViewController:(SRTranscriptViewController *)arg1;
@end

