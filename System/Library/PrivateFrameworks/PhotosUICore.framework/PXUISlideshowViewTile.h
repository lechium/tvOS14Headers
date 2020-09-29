/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:08 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXUIImageTile.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>

@protocol PXUISlideshowViewTileDelegate;
@class UIView, PXUIFloatingContentView, UIViewController, NSString;

@interface PXUISlideshowViewTile : PXUIImageTile <PXUIViewBasicTile> {

	UIView* _containerView;
	PXUIFloatingContentView* _floatingView;
	BOOL _slideshowViewHidden;
	UIViewController* _slideshowViewController;
	id<PXUISlideshowViewTileDelegate> _delegate;
	UIView* __contentView;
	UIView* __slideshowSnapshotView;

}

@property (setter=_setContentView:,nonatomic,retain) UIView * _contentView;                                  //@synthesize _contentView=__contentView - In the implementation block
@property (setter=_setSlideshowSnapshotView:,nonatomic,retain) UIView * _slideshowSnapshotView;              //@synthesize _slideshowSnapshotView=__slideshowSnapshotView - In the implementation block
@property (nonatomic,retain) UIViewController * slideshowViewController;                                     //@synthesize slideshowViewController=_slideshowViewController - In the implementation block
@property (assign,getter=isSlideshowViewHidden,nonatomic) BOOL slideshowViewHidden;                          //@synthesize slideshowViewHidden=_slideshowViewHidden - In the implementation block
@property (assign,nonatomic,__weak) id<PXUISlideshowViewTileDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PXUISlideshowViewTileDelegate>)delegate;
-(void)setDelegate:(id<PXUISlideshowViewTileDelegate>)arg1 ;
-(void)prepareForReuse;
-(UIView *)view;
-(UIView *)_contentView;
-(void)_updateSubviewOrdering;
-(void)_setContentView:(id)arg1 ;
-(void)becomeReusable;
-(void)willAnimateToGeometry:(PXTileGeometry*)arg1 toUserData:(id)arg2 withOptions:(id)arg3 ;
-(void)didAnimateToGeometry:(PXTileGeometry*)arg1 toUserData:(id)arg2 withOptions:(id)arg3 ;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)_updateContentViewFrame;
-(void)setSlideshowViewController:(UIViewController *)arg1 ;
-(void)setSlideshowViewHidden:(BOOL)arg1 ;
-(void)_updateContentViewVisibility;
-(UIViewController *)slideshowViewController;
-(BOOL)isSlideshowViewHidden;
-(UIView *)_slideshowSnapshotView;
-(void)_setSlideshowSnapshotView:(id)arg1 ;
@end

