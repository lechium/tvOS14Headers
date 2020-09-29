/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:54 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class PXGadgetSpec, NSString;


@protocol PXGadget <NSObject>
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec; 
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
@optional
-(long long)priority;
-(void)setPriority:(long long)arg1;
-(NSString *)localizedTitle;
-(id)contentView;
-(id)contentViewController;
-(void)preloadResources;
-(void)contentViewWillAppear;
-(void)contentViewDidDisappear;
-(id)previewViewControllerAtLocation:(CGPoint)arg1 fromSourceView:(id)arg2;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
-(void)commitPreviewViewController:(id)arg1;
-(void)userDidSelectGadget;
-(void)userDidSelectAccessoryButton:(id)arg1;
-(void)prepareCollectionViewItem:(id)arg1;
-(void)removeCollectionViewItem:(id)arg1;
-(id)debugURLsForDiagnostics;
-(id)uniqueGadgetIdentifier;
-(void)contentHasBeenSeen;
-(void)gadgetControllerHasAppeared;
-(void)gadgetControllerHasDisappeared;
-(void)prefetchDuringScrollingForWidth:(double)arg1;
-(id)targetPreviewViewForLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2;
-(unsigned long long)accessoryButtonType;
-(NSString *)accessoryButtonTitle;
-(unsigned long long)headerStyle;
-(Class)collectionViewItemClass;
-(CGRect)visibleContentRect;
-(void)setVisibleContentRect:(CGRect)arg1;

@required
-(id<PXGadgetDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(CGSize*)sizeThatFits:(CGSize)arg1;
-(unsigned long long)gadgetType;
-(unsigned long long)gadgetCapabilities;
-(PXGadgetSpec *)gadgetSpec;
-(void)setGadgetSpec:(id)arg1;

@end

