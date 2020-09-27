/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <UIKitCore/UITableView.h>
#import <libobjc.A.dylib/_UIScrollViewScrollObserver.h>

@class NSMutableArray, UIColor, NSString;

@interface SiriTVUIDividerTableView : UITableView <_UIScrollViewScrollObserver> {

	NSMutableArray* _dividers;
	UIColor* _dividerColor;

}

@property (nonatomic,retain) UIColor * dividerColor;                //@synthesize dividerColor=_dividerColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setDividerColor:(UIColor *)arg1 ;
-(UIColor *)dividerColor;
-(void)_observeScrollViewDidScroll:(id)arg1 ;
-(void)_updateDividers;
@end
