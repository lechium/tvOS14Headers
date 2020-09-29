/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:59 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PXContentFilterFooterViewDelegate;
@class PXContentFilterState, UILabel, UIButton;

@interface PXContentFilterFooterView : UIView {

	PXContentFilterState* _filterState;
	UILabel* _captionLabel;
	UIButton* _filterButton;
	id<PXContentFilterFooterViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PXContentFilterFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PXContentFilterState * filterState;                                 //@synthesize filterState=_filterState - In the implementation block
-(id<PXContentFilterFooterViewDelegate>)delegate;
-(void)setDelegate:(id<PXContentFilterFooterViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setFilterState:(PXContentFilterState *)arg1 ;
-(PXContentFilterState *)filterState;
-(void)_showFilterUI:(id)arg1 ;
-(void)_updateDisplay;
-(CGSize)_performLayoutInRect:(CGRect)arg1 updateSubviewFrames:(BOOL)arg2 ;
@end
