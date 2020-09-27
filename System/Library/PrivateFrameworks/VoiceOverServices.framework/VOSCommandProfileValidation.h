/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VOSCommand, NSString;

@interface VOSCommandProfileValidation : NSObject {

	long long _validationType;
	VOSCommand* _previouslyBoundCommand;

}

@property (nonatomic,readonly) BOOL isSuccessful; 
@property (nonatomic,readonly) BOOL isGestureAlreadyAssignedToCommand; 
@property (nonatomic,readonly) BOOL isGestureAssignedToOtherCommand; 
@property (nonatomic,readonly) BOOL isKeyboardShortcutAlreadyAssignedToCommand; 
@property (nonatomic,readonly) BOOL isKeyboardShortcutAssignedToOtherCommand; 
@property (nonatomic,readonly) NSString * localizedErrorTitle; 
@property (nonatomic,readonly) NSString * localizedErrorMessage; 
@property (nonatomic,retain) VOSCommand * previouslyBoundCommand;                            //@synthesize previouslyBoundCommand=_previouslyBoundCommand - In the implementation block
+(id)successfulValidation;
+(id)gestureAssignedToOtherCommandValidation:(id)arg1 ;
+(id)keyboardShortcutAssignedToOtherCommandValidation:(id)arg1 ;
-(id)init;
-(id)initWithType:(long long)arg1 ;
-(NSString *)localizedErrorMessage;
-(BOOL)isSuccessful;
-(void)setPreviouslyBoundCommand:(VOSCommand *)arg1 ;
-(VOSCommand *)previouslyBoundCommand;
-(BOOL)isGestureAlreadyAssignedToCommand;
-(BOOL)isGestureAssignedToOtherCommand;
-(BOOL)isKeyboardShortcutAlreadyAssignedToCommand;
-(BOOL)isKeyboardShortcutAssignedToOtherCommand;
-(NSString *)localizedErrorTitle;
@end
