/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBinding.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UILongPressGestureRecognizer, NSString;

@interface OKActionBindingLongPress : OKActionBinding <UIGestureRecognizerDelegate> {

	unsigned long long _numberOfTapsRequired;
	unsigned long long _numberOfTouchesRequired;
	double _minimumPressDuration;
	double _allowableMovement;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;

}

@property (assign,nonatomic) unsigned long long numberOfTapsRequired;                 //@synthesize numberOfTapsRequired=_numberOfTapsRequired - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTouchesRequired;              //@synthesize numberOfTouchesRequired=_numberOfTouchesRequired - In the implementation block
@property (assign,nonatomic) double minimumPressDuration;                             //@synthesize minimumPressDuration=_minimumPressDuration - In the implementation block
@property (assign,nonatomic) double allowableMovement;                                //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)unload;
-(id)initWithSettings:(id)arg1 ;
-(void)setNumberOfTapsRequired:(unsigned long long)arg1 ;
-(void)setMinimumPressDuration:(double)arg1 ;
-(void)setAllowableMovement:(double)arg1 ;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(double)allowableMovement;
-(unsigned long long)numberOfTapsRequired;
-(unsigned long long)numberOfTouchesRequired;
-(double)minimumPressDuration;
-(void)handleLongPress:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2 ;
-(BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(BOOL)ownsGestureRecognizer:(id)arg1 ;
@end
