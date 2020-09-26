//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, SiriUISuggestionsView, UIView;

@protocol SiriUISuggestionsViewDelegate <NSObject>

@optional
- (_Bool)suggestionsViewIsInTextInputMode:(SiriUISuggestionsView *)arg1;
- (double)contentWidthForSuggestionsView:(SiriUISuggestionsView *)arg1;
- (void)suggestionsView:(SiriUISuggestionsView *)arg1 didHideVibrantView:(UIView *)arg2;
- (double)statusViewHeightForSuggestionsView:(SiriUISuggestionsView *)arg1;
- (double)statusBarHeightForSuggestionsView:(SiriUISuggestionsView *)arg1;
- (void)didShowSuggestionsForSuggestionsView:(SiriUISuggestionsView *)arg1;
- (NSArray *)nextSuggestionsForSuggestionsView:(SiriUISuggestionsView *)arg1 maxSuggestions:(unsigned long long)arg2;
- (void)getNextSuggestionsForSuggestionsView:(SiriUISuggestionsView *)arg1 maxSuggestions:(unsigned long long)arg2 completion:(void (^)(NSArray *))arg3;
@end

