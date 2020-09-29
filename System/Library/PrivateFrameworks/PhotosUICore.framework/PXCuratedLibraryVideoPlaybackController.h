/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:04 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGridInlinePlaybackController.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXGDisplayAssetPixelBufferSourcesProvider.h>
#import <libobjc.A.dylib/PXGRectDiagnosticsProvider.h>

@class PXCuratedLibraryViewModel, PXCuratedLibraryLayout, NSString;

@interface PXCuratedLibraryVideoPlaybackController : PXGridInlinePlaybackController <PXChangeObserver, PXGDisplayAssetPixelBufferSourcesProvider, PXGRectDiagnosticsProvider> {

	PXCuratedLibraryViewModel* _viewModel;
	long long _presentedZoomLevel;
	long long _newZoomLevel;
	PXCuratedLibraryLayout* _curatedLibraryLayout;

}

@property (nonatomic,retain) PXCuratedLibraryLayout * curatedLibraryLayout;              //@synthesize curatedLibraryLayout=_curatedLibraryLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)enumerateRectDiagnosticsForLayout:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)pixelBufferSourceForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 spriteReference:(id)arg3 ;
-(void)recyclePixelBufferSourceForDisplayAssets:(id)arg1 ;
-(BOOL)shouldDisplayPreviousNonnullPixelBufferForPixelBufferSource:(id)arg1 ;
-(id)initViewViewModel:(id)arg1 ;
-(id)createPlaybackRecordForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3 ;
-(CGRect)currentVisibleRect;
-(BOOL)canUpdatePlayingRecords;
-(void)didUpdatePlayingRecords;
-(id)filterSortedRecordsToPlay:(id)arg1 ;
-(CGRect)frameForPlaybackRecord:(id)arg1 minPlayableSize:(out CGSize*)arg2 ;
-(BOOL)canProvideGeometriesForRecords;
-(BOOL)shouldEnablePlayback;
-(BOOL)canPlayAsset:(id)arg1 ;
-(BOOL)_canPlayVideosInZoomLevel:(long long)arg1 ;
-(PXCuratedLibraryLayout *)curatedLibraryLayout;
-(void)setCuratedLibraryLayout:(PXCuratedLibraryLayout *)arg1 ;
@end
