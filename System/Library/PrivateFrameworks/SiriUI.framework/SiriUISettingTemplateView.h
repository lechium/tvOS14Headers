/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUIBaseTemplateView.h>

@class UILabel;

@interface SiriUISettingTemplateView : SiriUIBaseTemplateView {

	UILabel* _textLabel;

}

@property (assign,nonatomic,__weak) id<SiriUISettingTemplateModel> dataSource; 
-(id)initWithDataSource:(id)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(double)desiredHeight;
@end
