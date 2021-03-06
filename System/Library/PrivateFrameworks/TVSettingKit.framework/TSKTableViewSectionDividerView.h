/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:38 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UIView;

@interface TSKTableViewSectionDividerView : UITableViewHeaderFooterView {

	UIView* _lineView;
	double _topPadding;
	unsigned long long _dividerType;

}

@property (assign,nonatomic) unsigned long long dividerType;              //@synthesize dividerType=_dividerType - In the implementation block
+(double)heightForDividerType:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(unsigned long long)dividerType;
-(void)_updatePadding;
-(void)setDividerType:(unsigned long long)arg1 ;
@end

