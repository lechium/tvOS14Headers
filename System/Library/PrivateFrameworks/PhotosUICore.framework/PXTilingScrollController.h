/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:11 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class PXTilingScrollInfo;


@protocol PXTilingScrollController <NSObject>
@property (assign,nonatomic,__weak) id<PXTilingScrollControllerUpdateDelegate> updateDelegate; 
@property (nonatomic,readonly) CGSize referenceSize; 
@property (nonatomic,readonly) UIEdgeInsets contentInset; 
@property (nonatomic,readonly) CGRect activeRect; 
@property (nonatomic,readonly) CGRect visibleRect; 
@property (nonatomic,readonly) CGRect constrainedVisibleRect; 
@property (nonatomic,readonly) CGRect targetRect; 
@property (assign,nonatomic) CGRect contentBounds; 
@property (nonatomic,copy) PXTilingScrollInfo * scrollInfo; 
@property (assign,nonatomic) BOOL respectsContentZOrder; 
@property (assign,nonatomic) CGSize presentedContentSize; 
@required
-(CGRect)visibleRect;
-(CGRect)contentBounds;
-(void)setNeedsUpdate;
-(void)updateIfNeeded;
-(UIEdgeInsets)contentInset;
-(void)setRespectsContentZOrder:(BOOL)arg1;
-(BOOL)respectsContentZOrder;
-(CGSize)referenceSize;
-(id<PXTilingScrollControllerUpdateDelegate>)updateDelegate;
-(void)setUpdateDelegate:(id)arg1;
-(CGRect)activeRect;
-(void)setContentBounds:(CGRect)arg1;
-(PXTilingScrollInfo *)scrollInfo;
-(CGSize)presentedContentSize;
-(CGRect)constrainedVisibleRect;
-(CGRect)targetRect;
-(void)setScrollInfo:(id)arg1;
-(void)setPresentedContentSize:(CGSize)arg1;

@end

