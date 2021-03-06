/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:40 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSystemUI/TVSystemUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIProgressView;

@interface TVSUIOSUpdateView : UIView {

	UIImageView* _logo;
	UILabel* _stepText;
	UILabel* _dontUnplugText;
	UIProgressView* _progress;

}
+(id)viewForUpdateStep1of2;
+(id)viewForDownloadStep;
+(id)imageForStep2of2;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setProgressPercent:(float)arg1 ;
-(void)setStepText:(id)arg1 ;
-(void)_setDontUnplugText:(id)arg1 ;
-(CGRect)_frameForStep2Labels;
@end

