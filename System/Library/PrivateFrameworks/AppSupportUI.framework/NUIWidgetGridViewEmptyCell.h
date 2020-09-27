/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NUIWidgetGridViewCell.h>

@class NUIWidgetGridView;

@interface NUIWidgetGridViewEmptyCell : UIView <NUIWidgetGridViewCell> {

	NUIWidgetGridView* _gridView;
	double _width;
	unsigned long long _index;

}

@property (nonatomic,readonly) unsigned long long index; 
-(unsigned long long)index;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(CGSize)donatableSpaceAllowRemeasure:(BOOL)arg1 ;
-(id)initWithWidgetGridView:(id)arg1 item:(id)arg2 index:(unsigned long long)arg3 ;
-(CGSize)donatableSpace;
@end
