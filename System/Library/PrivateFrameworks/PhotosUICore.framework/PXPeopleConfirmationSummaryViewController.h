/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:13 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UIViewController.h>

@protocol PXPeopleSummaryDelegate;
@class NSLayoutConstraint, UILabel;

@interface PXPeopleConfirmationSummaryViewController : UIViewController {

	id<PXPeopleSummaryDelegate> _delegate;
	NSLayoutConstraint* _labelSpacingConstraint;
	UILabel* _summaryLabel;

}

@property (retain) NSLayoutConstraint * labelSpacingConstraint;              //@synthesize labelSpacingConstraint=_labelSpacingConstraint - In the implementation block
@property (retain) UILabel * summaryLabel;                                   //@synthesize summaryLabel=_summaryLabel - In the implementation block
@property (__weak) id<PXPeopleSummaryDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<PXPeopleSummaryDelegate>)delegate;
-(void)setDelegate:(id<PXPeopleSummaryDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_updateDynamicTypeSpacing;
-(NSLayoutConstraint *)labelSpacingConstraint;
-(void)setLabelSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(UILabel *)summaryLabel;
-(void)setSummaryLabel:(UILabel *)arg1 ;
@end

