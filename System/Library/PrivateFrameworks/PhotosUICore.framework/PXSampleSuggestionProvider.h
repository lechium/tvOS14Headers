/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:59 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXOneUpPresentationDelegate.h>

@class PXUIMediaProvider, NSArray, PXAssetReference, PXAssetsDataSourceManager, NSString;

@interface PXSampleSuggestionProvider : PXGadgetProvider <PXOneUpPresentationDelegate> {

	PXUIMediaProvider* _mediaProvider;
	BOOL _includeHorizontal;
	NSArray* _suggestions;
	NSArray* _assets;
	PXAssetReference* _oneUpInitialAssetReference;
	PXAssetsDataSourceManager* _oneUpDataSourceManager;

}

@property (nonatomic,retain) NSArray * suggestions;                                           //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,retain) NSArray * assets;                                                //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) PXAssetReference * oneUpInitialAssetReference;                   //@synthesize oneUpInitialAssetReference=_oneUpInitialAssetReference - In the implementation block
@property (nonatomic,retain) PXAssetsDataSourceManager * oneUpDataSourceManager;              //@synthesize oneUpDataSourceManager=_oneUpDataSourceManager - In the implementation block
@property (assign,nonatomic) BOOL includeHorizontal;                                          //@synthesize includeHorizontal=_includeHorizontal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setSuggestions:(NSArray *)arg1 ;
-(NSArray *)suggestions;
-(NSArray *)assets;
-(void)setAssets:(NSArray *)arg1 ;
-(void)gadget:(id)arg1 didChange:(unsigned long long)arg2 ;
-(void)loadDataForGadgets;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)generateGadgets;
-(id)oneUpPresentationInitialAssetReference:(id)arg1 ;
-(id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2 ;
-(long long)oneUpPresentationActionContext:(id)arg1 ;
-(id)oneUpPresentationDataSourceManager:(id)arg1 ;
-(id)oneUpPresentationMediaProvider:(id)arg1 ;
-(long long)oneUpPresentationOrigin:(id)arg1 ;
-(PXAssetsDataSourceManager *)oneUpDataSourceManager;
-(void)setOneUpDataSourceManager:(PXAssetsDataSourceManager *)arg1 ;
-(id)suggestionGadgetPreviewController:(id)arg1 ;
-(void)suggestionGadget:(id)arg1 commitViewController:(id)arg2 ;
-(id)initWithHorizontalGadget:(BOOL)arg1 ;
-(id)_fetchSingleImage;
-(id)_fetchHistoricImage;
-(id)_fetchSingleLivePhotoAssetWithVariation:(unsigned short)arg1 ;
-(id)_fetchSingleAssetWithVariation:(unsigned short)arg1 ;
-(id)_fetchSinglePortraitImage;
-(id)_fetchSingleVideo;
-(id)_fetchSingleLoopingVideo;
-(id)_fetchSingleAnimatedImage;
-(id)_lastYearsDate;
-(id)_fetchOptionsForHistoricImage;
-(id)_fetchOptionsForPlaybackStyle:(long long)arg1 ;
-(void)_prepareForOneUpPresentationForGadget:(id)arg1 ;
-(void)suggestionGadgetsWantsOneUpPresentation:(id)arg1 animated:(BOOL)arg2 ;
-(void)suggestionGadget:(id)arg1 willDismissPreviewController:(id)arg2 ;
-(id)_gadgetForAssetReference:(id)arg1 ;
-(BOOL)includeHorizontal;
-(void)setIncludeHorizontal:(BOOL)arg1 ;
-(PXAssetReference *)oneUpInitialAssetReference;
-(void)setOneUpInitialAssetReference:(PXAssetReference *)arg1 ;
@end

