/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <UIKit/UIInterfaceActionDisplayPropertyObserver.h>

@class NSLayoutConstraint, UIInterfaceAction, NSString;

@interface _UIInterfaceActionImagePropertyView : UIImageView <UIInterfaceActionDisplayPropertyObserver> {

	NSLayoutConstraint* _imageWidthConstraint;
	NSLayoutConstraint* _imageHeightConstraint;
	UIInterfaceAction* _action;
	NSString* _imageProperty;

}

@property (nonatomic,readonly) UIInterfaceAction * action;                     //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSString * imageProperty;                       //@synthesize imageProperty=_imageProperty - In the implementation block
@property (nonatomic,readonly) BOOL isUsedToOccupySpaceIfNoImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(UIInterfaceAction *)action;
-(void)setImage:(id)arg1 ;
-(void)tintColorDidChange;
-(void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2 ;
-(void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2 ;
-(id)_visualStyle;
-(void)_applyVisualStyle;
-(void)_reloadImageContent;
-(CGSize)_sizeToOccupy;
-(BOOL)isUsedToOccupySpaceIfNoImage;
-(void)_applyVisualStyleToImageView;
-(id)_interfaceActionViewState;
-(id)initWithAction:(id)arg1 imageProperty:(id)arg2 ;
-(NSString *)imageProperty;
@end

