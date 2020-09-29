/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:51 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class PXGadgetNavigationHelper;


@protocol PXGadgetDelegate <NSObject>
@property (nonatomic,readonly) id<PXGadgetTransition> gadgetTransition; 
@property (nonatomic,readonly) PXGadgetNavigationHelper * rootNavigationHelper; 
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> nextGadgetResponder; 
@optional
-(id)gadgetViewControllerHostingGadget:(id)arg1;
-(void)gadget:(id)arg1 animateChanges:(/*^block*/id)arg2;
-(void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
-(id<PXGadgetDelegate>)nextGadgetResponder;
-(void)setNextGadgetResponder:(id)arg1;

@required
-(BOOL)gadget:(id)arg1 transitionToViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)presentGadgetViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)dismissGadgetViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(id<PXGadgetTransition>)gadgetTransition;
-(PXGadgetNavigationHelper *)rootNavigationHelper;

@end
