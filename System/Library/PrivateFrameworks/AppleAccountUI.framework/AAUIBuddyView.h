/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccountUI/AppleAccountUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILayoutGuide;

@interface AAUIBuddyView : UIView {

	UILayoutGuide* _contentLayoutGuide;

}

@property (nonatomic,readonly) UILayoutGuide * contentLayoutGuide;              //@synthesize contentLayoutGuide=_contentLayoutGuide - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILayoutGuide *)contentLayoutGuide;
@end
