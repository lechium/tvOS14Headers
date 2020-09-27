/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:37 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView;

@interface TSKTableViewTextCellActivityIndicatorView : UIView {

	UIActivityIndicatorView* _activityIndicatorView;

}

@property (getter=_activityIndicatorView,nonatomic,readonly) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
-(void)setColor:(id)arg1 ;
-(id)initWithActivityIndicatorStyle:(long long)arg1 ;
-(void)startAnimating;
-(void)layoutSubviews;
-(id)_activityIndicatorView;
@end
