/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFAnalyticsDialogIdentifierAssociationProvider.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableDictionary, NSUserDefaults, AFAnalyticsTurnBasedInstrumentationContext;

@interface SiriUIInstrumentationManager : NSObject <AFAnalyticsDialogIdentifierAssociationProvider> {

	NSString* _lastDismissedIdentifier;
	NSObject*<OS_dispatch_queue> _instrumenrationManagerQueue;
	NSMutableDictionary* _aceViewDialogIdentifiers;
	NSMutableDictionary* _aceViewDialogIdentifiersForMessageConstruction;
	NSMutableDictionary* _cardInfo;
	NSUserDefaults* _userDefaults;
	BOOL _shouldInstrument;
	int _currentSiriUIState;
	AFAnalyticsTurnBasedInstrumentationContext* _currentInstrumentationTurnContext;
	NSString* _clientGeneratedDialogIdentifier;

}

@property (retain) AFAnalyticsTurnBasedInstrumentationContext * currentInstrumentationTurnContext;              //@synthesize currentInstrumentationTurnContext=_currentInstrumentationTurnContext - In the implementation block
@property (assign) int currentSiriUIState;                                                                      //@synthesize currentSiriUIState=_currentSiriUIState - In the implementation block
@property (nonatomic,copy) NSString * clientGeneratedDialogIdentifier;                                          //@synthesize clientGeneratedDialogIdentifier=_clientGeneratedDialogIdentifier - In the implementation block
+(id)sharedManager;
-(id)init;
-(id)associatedDialogIdentifiersForAceObjectIdentifier:(id)arg1 ;
-(void)emitInstrumentation:(id)arg1 ;
-(void)setCurrentInstrumentationTurnContext:(AFAnalyticsTurnBasedInstrumentationContext *)arg1 ;
-(void)_emitInstrumentation:(id)arg1 ;
-(void)setCurrentSiriUIState:(int)arg1 ;
-(BOOL)_hasDismissedForTurnContext:(id)arg1 ;
-(int)currentSiriUIState;
-(void)emitUUFRShownForAceObject:(id)arg1 presentationType:(int)arg2 dialogPhase:(id)arg3 mode:(int)arg4 viewRegion:(int)arg5 ;
-(id)_responseContextWithPresentationType:(int)arg1 dialogPhase:(id)arg2 mode:(int)arg3 ;
-(void)storeCurrentInstrumentationTurnContext:(id)arg1 ;
-(id)latestStoredTurn;
-(id)cardIDforSnippetAceID:(id)arg1 ;
-(void)setDialogIdentifiers:(id)arg1 forAceViewSpeakableTextWithIdentifier:(id)arg2 ;
-(void)storeClientGeneratedDUC:(id)arg1 ;
-(void)storeCardID:(id)arg1 forSnippetAceID:(id)arg2 ;
-(void)emitUIStateTransitionEventWithFromState:(int)arg1 toState:(int)arg2 withPresentationType:(int)arg3 ;
-(void)emitUIStateTransitionForSiriDismissalWithReason:(int)arg1 ;
-(void)emitPartialSpeechTranscriptionEventForAceObjectWithIdentifier:(id)arg1 ;
-(void)emitFinalSpeechTranscriptionEventForAceObjectWithIdentifier:(id)arg1 ;
-(void)emitRevealSpeechTranscriptionEventForAceObjectWithIdentifier:(id)arg1 ;
-(void)emitTextToSpeechBeginEvent:(id)arg1 ;
-(void)emitTextToSpeechEndEvent:(id)arg1 ;
-(void)emitUUFRPresentedEventWith:(id)arg1 snippetClass:(id)arg2 dialogIdentifier:(id)arg3 dialogPhase:(id)arg4 ;
-(void)emitCasinoRelationshipEventWithViewIDFrom:(id)arg1 ViewIDTo:(id)arg2 casinoFromType:(int)arg3 ;
-(void)emitDialogOutputEventWith:(id)arg1 canUseServerTTS:(BOOL)arg2 spokenDialogOutput:(id)arg3 displayedDialogOutput:(id)arg4 ;
-(void)emitUUFRShownForAceObject:(id)arg1 presentationType:(int)arg2 dialogPhase:(id)arg3 ;
-(void)emitUUFRSpokenForAceObject:(id)arg1 presentationType:(int)arg2 dialogPhase:(id)arg3 mode:(int)arg4 ;
-(void)emitPunchOutEventWithURL:(id)arg1 appID:(id)arg2 ;
-(void)_prepareForTesting;
-(AFAnalyticsTurnBasedInstrumentationContext *)currentInstrumentationTurnContext;
-(NSString *)clientGeneratedDialogIdentifier;
-(void)setClientGeneratedDialogIdentifier:(NSString *)arg1 ;
@end

