/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UISheetInteractionDelegate <NSObject>
@optional
-(void)sheetInteraction:(id)arg1 didChangeOffset:(CGPoint)arg2;
-(BOOL)sheetInteraction:(id)arg1 shouldBeginHorizontalRubberBandingWithGestureRecognizer:(id)arg2;
-(BOOL)sheetInteraction:(id)arg1 shouldAllowVerticalRubberBandingWithEvent:(id)arg2;
-(CGPoint*)offsetForInterruptedAnimationInSheetInteraction:(id)arg1;

@end

