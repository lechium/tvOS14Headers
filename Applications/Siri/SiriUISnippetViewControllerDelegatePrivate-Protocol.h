//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AFUserUtteranceSelectionResults, NSLocale, NSString, UIViewController;
@protocol SiriUIViewController;

@protocol SiriUISnippetViewControllerDelegatePrivate <NSObject>
- (NSLocale *)localeForSiriViewController:(id <SiriUIViewController>)arg1;
- (void)removeSiriViewController:(id <SiriUIViewController>)arg1;
- (void)siriViewController:(id <SiriUIViewController>)arg1 startCorrectedSpeechRequestWithText:(NSString *)arg2 correctionIdentifier:(id)arg3 userSelectionResults:(AFUserUtteranceSelectionResults *)arg4;
- (void)siriViewControllerRequestTearDownEditingViewController:(id <SiriUIViewController>)arg1;
- (void)siriViewControllerDidEndEditing:(id <SiriUIViewController>)arg1;
- (void)siriViewControllerWillBeginEditing:(id <SiriUIViewController>)arg1;
- (_Bool)siriViewControllerShouldPreventUserInteraction:(id <SiriUIViewController>)arg1;
- (void)cancelSpeakingForSiriViewController:(id <SiriUIViewController>)arg1;
- (void)siriSnippetViewController:(id <SiriUIViewController>)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;
- (void)siriSnippetViewController:(id <SiriUIViewController>)arg1 didDismissViewController:(UIViewController *)arg2;
- (void)siriSnippetViewController:(id <SiriUIViewController>)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)siriSnippetViewController:(id <SiriUIViewController>)arg1 didPresentViewController:(UIViewController *)arg2;
- (void)siriSnippetViewController:(id <SiriUIViewController>)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)siriViewController:(id <SiriUIViewController>)arg1 speakText:(NSString *)arg2 completion:(void (^)(void))arg3;
@end

