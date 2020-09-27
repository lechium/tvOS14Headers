/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIControl, UIView;

@interface _MKSmallCalloutPassthroughButton : UIControl {

	UIControl* _targetControl;
	UIView* _highlightView;

}

@property (nonatomic,retain) UIControl * targetControl;              //@synthesize targetControl=_targetControl - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)canBecomeFocused;
-(void)handleTap:(id)arg1 ;
-(void)setTargetControl:(UIControl *)arg1 ;
-(UIControl *)targetControl;
@end
