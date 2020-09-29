/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:06 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PXCMMCloudViewViewDelegate;
@class PXRoundedCornerOverlayView, UIButton, PXGradientView, UIImageView, UILabel;

@interface PXCMMCloudView : UIView {

	PXRoundedCornerOverlayView* _roundedCornerOverlayView;
	SCD_Struct_PX71 _delegateRespondsTo;
	id<PXCMMCloudViewViewDelegate> _delegate;
	UIButton* _dismissButton;
	PXGradientView* _graphicGradientView;
	UIImageView* _graphicImageView;
	UILabel* _bodyLabel;
	UIButton* _learnMoreButton;
	unsigned long long _style;

}

@property (nonatomic,readonly) UIButton * dismissButton;                                  //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,readonly) PXGradientView * graphicGradientView;                      //@synthesize graphicGradientView=_graphicGradientView - In the implementation block
@property (nonatomic,readonly) UIImageView * graphicImageView;                            //@synthesize graphicImageView=_graphicImageView - In the implementation block
@property (nonatomic,readonly) UILabel * bodyLabel;                                       //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,readonly) UIButton * learnMoreButton;                                //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                                  //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMCloudViewViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL disableDismissAction; 
-(id<PXCMMCloudViewViewDelegate>)delegate;
-(void)setDelegate:(id<PXCMMCloudViewViewDelegate>)arg1 ;
-(unsigned long long)style;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_setupSubviews;
-(void)setDisableDismissAction:(BOOL)arg1 ;
-(BOOL)disableDismissAction;
-(CGSize)_performLayoutInRect:(CGRect)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(id)_constrainedFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2 ;
-(void)_updateFontAndStyle;
-(void)_learnMoreTapped:(id)arg1 ;
-(void)_didTapDismissButton:(id)arg1 ;
-(UIButton *)dismissButton;
-(PXGradientView *)graphicGradientView;
-(UIImageView *)graphicImageView;
-(UILabel *)bodyLabel;
-(UIButton *)learnMoreButton;
@end

