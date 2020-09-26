//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AFUserUtterance, AFUserUtteranceSelectionResults, AceObject, BKSAnimationFenceHandle, NSArray, NSBundle, NSDate, NSDictionary, NSIndexPath, NSLocale, NSString, NSURL, NSUUID, SASRequestOptions, SASSpeechRecognized, UIViewController;
@protocol SAAceCommand, SiriUIPresentation;

@protocol SiriUIPresentationDelegate <NSObject>
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 viewDidDisappearWithClassDescriptor:(NSString *)arg2 identifier:(NSString *)arg3;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 viewDidAppearWithClassDescriptor:(NSString *)arg2 identifier:(NSString *)arg3;
- (void)userTouchedSnippet;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 requestHostBlurVisible:(_Bool)arg2 reason:(long long)arg3 fence:(BKSAnimationFenceHandle *)arg4;
- (void)siriPresentationDidHideUnlockScreen:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationDidResignFirstResponder:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationDidEndEditing:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationWillBeginEditing:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationRequestKeyboardForTapToEditWithCompletion:(void (^)(_Bool))arg1;
- (AFUserUtterance *)siriPresentation:(id <SiriUIPresentation>)arg1 updatedUserUtteranceForRefId:(NSString *)arg2;
- (NSArray *)siriPresentation:(id <SiriUIPresentation>)arg1 additionalSpeechInterpretationsForRefId:(NSString *)arg2;
- (void)siriPresentationClearContext:(id <SiriUIPresentation>)arg1;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didChangePeekMode:(unsigned long long)arg2;
- (void)siriPresentationMicButtonLongPressEnded:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationMicButtonLongPressBegan:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationMicButtonWasTapped:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationDidPresentCarPlayGatekeeper:(id <SiriUIPresentation>)arg1;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didShowGuideStartTime:(NSDate *)arg2 endTime:(NSDate *)arg3;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didShowTipWithIdentifier:(NSUUID *)arg2 startDate:(NSDate *)arg3 endDate:(NSDate *)arg4 flowID:(NSString *)arg5;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didShowAceViewWithIdentifier:(NSUUID *)arg2 aceViewClass:(Class)arg3 metricsContext:(NSString *)arg4 forInterval:(double)arg5;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didScrollForInterval:(double)arg2 metricsContext:(NSString *)arg3;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didEditSpeechRecognized:(SASSpeechRecognized *)arg2 forInterval:(double)arg3;
- (void)siriPresentationDidPresentUserInterface:(id <SiriUIPresentation>)arg1;
- (_Bool)inTextInputModeForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (_Bool)siriPresentationShouldDelaySuggestions:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationDidDismissBugReporter:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationDidPresentBugReporter:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationDidPresentConversationFromBreadcrumb:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationPulseHelpButton:(id <SiriUIPresentation>)arg1;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 setBugReportingAvailable:(_Bool)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 setHelpButtonEmphasized:(_Bool)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didDismissViewController:(UIViewController *)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didPresentViewController:(UIViewController *)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(void (^)(_Bool))arg4;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 setStatusViewDisabled:(_Bool)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 setStatusViewUserInteractionEnabled:(_Bool)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 setCarDisplaySnippetMode:(long long)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 setFullScreenDimmingLayerVisible:(_Bool)arg2 animated:(_Bool)arg3;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 setStatusViewHidden:(_Bool)arg2;
- (void)handlePasscodeUnlockForSiriPresentation:(id <SiriUIPresentation>)arg1 withCompletion:(void (^)(long long))arg2;
- (void)siriPresentationRemoveAcousticIDSpinner:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationPresentAcousticIDSpinner:(id <SiriUIPresentation>)arg1;
- (void)getScreenshotImageForSiriPresentation:(id <SiriUIPresentation>)arg1 withCompletion:(void (^)(UIImage *))arg2;
- (void)disableIdleTimerForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (void)enableIdleTimerForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 openURL:(NSURL *)arg2 appBundleID:(NSString *)arg3 allowSiriDismissal:(_Bool)arg4;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 openURL:(NSURL *)arg2 conversationItemIdentifier:(NSUUID *)arg3 completion:(void (^)(_Bool))arg4;
- (NSBundle *)effectiveCoreLocationBundleForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 performAceCommand:(AceObject<SAAceCommand> *)arg2 conversationItemIdentifier:(NSUUID *)arg3 completion:(void (^)(_Bool))arg4;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didCorrectRecognition:(NSString *)arg2 correctionIdentifier:(id)arg3 forItemAtIndexPath:(NSIndexPath *)arg4;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 startEditedRequestWithText:(NSString *)arg2 correctionIdentifier:(NSDictionary *)arg3 userSelectionResults:(AFUserUtteranceSelectionResults *)arg4;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didCorrectRecognition:(NSString *)arg2 correctionIdentifier:(id)arg3 forConversationItemWithIdentifier:(NSUUID *)arg4 userSelectionResults:(AFUserUtteranceSelectionResults *)arg5;
- (void)stopSpeakingForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 synthesizeSpeechWithPhoneticText:(NSString *)arg2 completion:(void (^)(void))arg3;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 synthesizeSpeechWithText:(NSString *)arg2 completion:(void (^)(void))arg3;
- (unsigned long long)siriDeviceLockStateForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (_Bool)siriIsSpeakingForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didDelayPresentationOfItemsWithIdentifiers:(NSArray *)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 willDiscardConversationItemsWithIdentifiers:(NSArray *)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didPresentItemsAtIndexPaths:(NSArray *)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didPresentConversationItemsWithIdentifiers:(NSArray *)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didPrepareAnimationLinkedConversationItem:(NSUUID *)arg2 animationBlock:(void (^)(void))arg3;
- (void)endSiriSessionForSiriPresentation:(id <SiriUIPresentation>)arg1 delayForTTS:(_Bool)arg2 withDismissalReason:(unsigned long long)arg3;
- (void)endSiriSessionForSiriPresentation:(id <SiriUIPresentation>)arg1 delayForTTS:(_Bool)arg2;
- (void)endSiriSessionForSiriPresentation:(id <SiriUIPresentation>)arg1 withDismissalReason:(unsigned long long)arg2;
- (void)endSiriSessionForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (void)forceAudioSessionInactiveForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (void)cancelRequestForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (void)stopRecordingSpeechForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 startRequestWithOptions:(SASRequestOptions *)arg2;
- (double)statusViewHeightForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (struct CGRect)statusBarFrameForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (double)contentWidthForForSiriPresentation:(id <SiriUIPresentation>)arg1;

@optional
- (NSLocale *)localeForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationDidPresentDynamicSnippetWithInfo:(NSDictionary *)arg1;
- (void)siriPresentationDidRequestRestartSpeechSynthesis:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationDidRequestCancelSpeechSynthesis:(id <SiriUIPresentation>)arg1;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 setTypeToSiriViewHidden:(_Bool)arg2;
- (void)siriPresentationWillSendStartRequest:(id <SiriUIPresentation>)arg1;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 failTest:(NSString *)arg2 withReason:(NSString *)arg3;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didFinishTest:(NSString *)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 willStartTest:(NSString *)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didPresentIntentWithBundleId:(NSString *)arg2;
@end

