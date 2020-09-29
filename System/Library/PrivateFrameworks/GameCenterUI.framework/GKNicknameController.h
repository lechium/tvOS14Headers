/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:19 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/GKNicknameInputAccessoryViewDelegate.h>

@protocol GKNicknameControllerDelegate;
@class UITextField, GKNicknameInputAccessoryView, UIActivityIndicatorView, GKReachability, NSArray, NSString;

@interface GKNicknameController : NSObject <UITextFieldDelegate, GKNicknameInputAccessoryViewDelegate> {

	BOOL _nicknameWasEdited;
	BOOL _nicknameChangeWasCommitted;
	BOOL _shouldShakeTextFieldOnError;
	BOOL _shouldUseSuggestedNicknameOnDefaultNickname;
	UITextField* _nickname;
	GKNicknameInputAccessoryView* _accessoryView;
	UIActivityIndicatorView* _activityIndicator;
	id<GKNicknameControllerDelegate> _delegate;
	GKReachability* _reachability;
	NSArray* _suggestedNicknames;

}

@property (assign,nonatomic) BOOL nicknameWasEdited;                                        //@synthesize nicknameWasEdited=_nicknameWasEdited - In the implementation block
@property (assign,nonatomic) BOOL nicknameChangeWasCommitted;                               //@synthesize nicknameChangeWasCommitted=_nicknameChangeWasCommitted - In the implementation block
@property (nonatomic,retain) GKReachability * reachability;                                 //@synthesize reachability=_reachability - In the implementation block
@property (nonatomic,retain) NSArray * suggestedNicknames;                                  //@synthesize suggestedNicknames=_suggestedNicknames - In the implementation block
@property (nonatomic,retain) UITextField * nickname;                                        //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,retain) GKNicknameInputAccessoryView * accessoryView;                  //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) BOOL shouldShakeTextFieldOnError;                              //@synthesize shouldShakeTextFieldOnError=_shouldShakeTextFieldOnError - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSuggestedNicknameOnDefaultNickname;              //@synthesize shouldUseSuggestedNicknameOnDefaultNickname=_shouldUseSuggestedNicknameOnDefaultNickname - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                   //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (__weak) id<GKNicknameControllerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<GKNicknameControllerDelegate>)delegate;
-(void)setDelegate:(id<GKNicknameControllerDelegate>)arg1 ;
-(UITextField *)nickname;
-(void)setNickname:(UITextField *)arg1 ;
-(void)reset;
-(void)setAccessoryView:(GKNicknameInputAccessoryView *)arg1 ;
-(GKReachability *)reachability;
-(void)setReachability:(GKReachability *)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(GKNicknameInputAccessoryView *)accessoryView;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)setShouldUseSuggestedNicknameOnDefaultNickname:(BOOL)arg1 ;
-(void)nicknameTextChanged:(id)arg1 ;
-(void)setSuggestedNicknames:(NSArray *)arg1 ;
-(void)displayNicknameSuggestions;
-(BOOL)shouldShakeTextFieldOnError;
-(void)shakeNicknameTextFieldWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setNicknameChangeWasCommitted:(BOOL)arg1 ;
-(void)setNicknameWasEdited:(BOOL)arg1 ;
-(void)commitNicknameChanges:(/*^block*/id)arg1 ;
-(NSArray *)suggestedNicknames;
-(void)updateReturnKeyEnabledState;
-(void)loadSuggestedNicknames:(/*^block*/id)arg1 ;
-(BOOL)nicknameWasEdited;
-(void)didSelectSuggestion:(id)arg1 ;
-(void)stopObservingKeyboardEvents;
-(void)startObservingKeyboardEvents;
-(void)textFieldDidBecomeFirstResponder:(id)arg1 ;
-(void)textFieldDidResignFirstResponder:(id)arg1 ;
-(BOOL)nicknameChangeWasCommitted;
-(void)setShouldShakeTextFieldOnError:(BOOL)arg1 ;
-(BOOL)shouldUseSuggestedNicknameOnDefaultNickname;
@end

