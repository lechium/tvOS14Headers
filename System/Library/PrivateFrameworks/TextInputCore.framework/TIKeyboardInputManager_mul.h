/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/TIKeyboardInputManager.h>

@interface TIKeyboardInputManager_mul : TIKeyboardInputManager {

	BOOL _isSuspended;

}
-(void)resume;
-(void)suspend;
-(id)keyboardConfiguration;
-(BOOL)updateLanguageModelForKeyboardState;
-(void)enumerateInputModesWithBlock:(/*^block*/id)arg1 ;
-(unsigned)lexiconIDForInputMode:(id)arg1 ;
-(float)weightForInputMode:(id)arg1 ;
-(SCD_Struct_TI10)lexiconInfoForInputMode:(id)arg1 ;
-(vector<KB::LexiconInfo, std::__1::allocator<KB::LexiconInfo> >*)lexiconInformationVector;
-(LanguageModelContainer*)languageModelContainer;
-(BOOL)shouldUpdateDictionary;
-(void)loadDictionaries;
-(void)didUpdateInputModes:(id)arg1 ;
-(void)didUpdateInputModeProbabilities:(id)arg1 ;
-(void)updateLanguagePriors;
-(id)resourceInputModes;
@end
