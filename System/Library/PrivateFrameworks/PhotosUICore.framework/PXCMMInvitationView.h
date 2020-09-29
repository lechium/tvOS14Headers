/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:09 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXCMMInvitationViewDelegate;
@class PXCMMPosterHeaderView, UILabel, PXRoundedCornerOverlayView, PXCMMInvitationViewModel, UIView, NSString;

@interface PXCMMInvitationView : UICollectionViewCell <PXChangeObserver> {

	PXCMMPosterHeaderView* _headerView;
	UILabel* _titleLabel;
	UILabel* _subtitle1Label;
	UILabel* _subtitle2Label;
	PXRoundedCornerOverlayView* _roundedCornerOverlayView;
	id<PXCMMInvitationViewDelegate> _delegate;
	PXCMMInvitationViewModel* _viewModel;

}

@property (nonatomic,retain) PXCMMInvitationViewModel * viewModel;                         //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMInvitationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGRect headerViewBounds; 
@property (nonatomic,readonly) UIView * previewView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)titleFont;
+(long long)subtitle2TextStyle;
+(id)subtitle2Font;
+(long long)subtitle1TextStyle;
+(id)subtitle1Font;
+(long long)titleTextStyle;
+(CGSize)posterHeaderViewSizeForSize:(CGSize)arg1 scale:(double)arg2 ;
+(CGSize)sizeThatFits:(CGSize)arg1 viewModel:(id)arg2 ;
+(CGSize)posterImageSizeThatFits:(CGSize)arg1 scale:(double)arg2 ;
+(id)titleEmphasizedFont;
+(id)titleBulletColor;
+(id)subtitle1Color;
+(id)subtitle2Color;
-(id<PXCMMInvitationViewDelegate>)delegate;
-(void)setDelegate:(id<PXCMMInvitationViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(BOOL)_updateTitle;
-(PXCMMInvitationViewModel *)viewModel;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(void)_updateHeaderView;
-(void)setViewModel:(PXCMMInvitationViewModel *)arg1 ;
-(id)test_title;
-(CGRect)headerViewBounds;
-(UIView *)previewView;
-(BOOL)_updateSubtitle1;
-(BOOL)_updateSubtitle2;
-(void)_updateOpaqueAncestorBackgroundColor;
-(void)_tapGesture:(id)arg1 ;
-(id)test_subtitle1;
-(id)test_subtitle2;
-(BOOL)test_selected;
@end

