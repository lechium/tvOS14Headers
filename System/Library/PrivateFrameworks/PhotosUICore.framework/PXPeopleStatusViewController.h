/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:01 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UIViewController.h>

@protocol PXPeopleStatusViewDelegate;
@class PXPeopleStatusView;

@interface PXPeopleStatusViewController : UIViewController {

	id<PXPeopleStatusViewDelegate> _delegate;
	PXPeopleStatusView* _statusView;

}

@property (nonatomic,retain) PXPeopleStatusView * statusView;                             //@synthesize statusView=_statusView - In the implementation block
@property (assign,nonatomic,__weak) id<PXPeopleStatusViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PXPeopleStatusViewDelegate>)delegate;
-(void)setDelegate:(id<PXPeopleStatusViewDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_continuePressed:(id)arg1 ;
-(PXPeopleStatusView *)statusView;
-(void)setStatusView:(PXPeopleStatusView *)arg1 ;
@end

