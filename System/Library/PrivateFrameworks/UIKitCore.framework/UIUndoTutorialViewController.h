/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UIUndoTutorialView;

@interface UIUndoTutorialViewController : UIViewController {

	/*^block*/id _completionHandler;
	UIUndoTutorialView* _tutorialView;

}

@property (nonatomic,copy) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) UIUndoTutorialView * tutorialView;              //@synthesize tutorialView=_tutorialView - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)doneButtonPressed;
-(UIUndoTutorialView *)tutorialView;
-(void)setTutorialView:(UIUndoTutorialView *)arg1 ;
@end
