/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSUndoManager.h>

@class UITextInputController;

@interface _UITextUndoManager : NSUndoManager {

	UITextInputController* _inputController;

}

@property (assign,nonatomic,__weak) UITextInputController * inputController;              //@synthesize inputController=_inputController - In the implementation block
-(BOOL)canRedo;
-(BOOL)canUndo;
-(void)removeAllActions;
-(UITextInputController *)inputController;
-(void)setInputController:(UITextInputController *)arg1 ;
@end
