/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:05 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXPhotosGridFooterStatusControllerDelegate;
@class PXPhotosViewModel, PXAssetsDataSourceCountsController, PXCPLUIStatusProvider, NSString;

@interface PXPhotosGridFooterStatusController : NSObject <PXChangeObserver> {

	PXPhotosViewModel* _viewModel;
	PXAssetsDataSourceCountsController* _countsController;
	PXCPLUIStatusProvider* _cplUIStatusProvider;
	id<PXPhotosGridFooterStatusControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PXPhotosGridFooterStatusControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PXPhotosGridFooterStatusControllerDelegate>)delegate;
-(void)setDelegate:(id<PXPhotosGridFooterStatusControllerDelegate>)arg1 ;
-(void)viewDidAppear;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)setCplUIStatusProvider:(id)arg1 ;
-(void)_updateHasImportantInformation;
-(id)_createCPLUIStatusProvider;
-(void)_systemPhotoLibraryDidChange;
-(id)initWithViewModel:(id)arg1 itemsCountsController:(id)arg2 ;
-(void)_updateFooterViewModel;
-(void)_refreshCPLUIStatusProvider;
@end

