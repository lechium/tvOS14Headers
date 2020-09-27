/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface _TVLSegmentedControl : UIView {

	NSArray* _items;
	long long _selectedIndex;

}

@property (nonatomic,retain) NSArray * items;                      //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) long long selectedIndex;              //@synthesize selectedIndex=_selectedIndex - In the implementation block
-(id)init;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setSelectedIndex:(long long)arg1 ;
-(long long)selectedIndex;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)enumerateLabelFramesWithBlock:(/*^block*/id)arg1 ;
@end
