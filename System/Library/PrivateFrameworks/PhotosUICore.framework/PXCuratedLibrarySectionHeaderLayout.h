/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:50 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>
#import <libobjc.A.dylib/PXGTitleSubtitleSource.h>
#import <libobjc.A.dylib/PXGViewSource.h>
#import <libobjc.A.dylib/PXGNamedImageSource.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXLibrarySummaryOutputPresenter.h>

@protocol OS_dispatch_queue;
@class NSAttributedString, NSString, NSDictionary, NSArray, NSMutableIndexSet, NSObject, PXAssetCollectionReference, PXCuratedLibrarySectionHeaderLayoutSpec, PXCuratedLibraryEllipsisButtonActionPerformer, PXCuratedLibraryFilterActionPerformer, PXCuratedLibraryActionPerformer, NSSet, PXGLayoutGuide, PXTitleSubtitleLabelSpec, PXNumberAnimator;

@interface PXCuratedLibrarySectionHeaderLayout : PXGLayout <PXGTitleSubtitleSource, PXGViewSource, PXGNamedImageSource, PXChangeObserver, PXLibrarySummaryOutputPresenter> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	unsigned short _textVersion;
	unsigned short _ellipsisButtonVersion;
	unsigned short _filterButtonVersion;
	unsigned short _filterIndicatorButtonVersion;
	unsigned short _selectionTitleVersion;
	unsigned short _selectButtonVersion;
	unsigned short _cancelButtonVersion;
	unsigned short _toggleAspectFitButtonVersion;
	unsigned short _zoomInButtonVersion;
	unsigned short _zoomOutButtonVersion;
	unsigned short _controlStackButtonVersion;
	unsigned short _showSidebarButtonVersion;
	NSArray* _itemIdentifierBySpriteIndex;
	BOOL _presentedVisibility;
	BOOL _presentedTitleVisibility;
	NSMutableIndexSet* _axSpriteIndexes;
	unsigned short _gradientResizableCapInsetsIndex;
	CGSize _cachedSizeByButtonIdentifier[11];
	CGSize _cachedExternalTrailingButtonsSize;
	CGSize _cachedExternalLeadingButtonsSize;
	CGSize _cachedExternalTopButtonsSize;
	CGSize _cachedLongestPossibleSelectionTitleSize;
	long long _asyncDateGeneration;
	NSObject*<OS_dispatch_queue> _asyncDateQueue;
	BOOL _wantsOverBackgroundAppearance;
	BOOL _showsBackgroundGradient;
	BOOL _showsDebugDescription;
	BOOL _filterButtonHighlighted;
	BOOL _filterIndicatorButtonHighlighted;
	BOOL _controlStackButtonSelected;
	BOOL _usesCompactToggleAspectFitButton;
	float _buttonsZIndex;
	NSString* _title;
	NSString* _subtitle;
	PXAssetCollectionReference* _assetCollectionReference;
	PXCuratedLibrarySectionHeaderLayoutSpec* _spec;
	double _lateralMargin;
	double _maxPossibleHeight;
	double _titleAlpha;
	double _buttonsAlpha;
	PXCuratedLibraryEllipsisButtonActionPerformer* _ellipsisButtonActionPerformer;
	PXCuratedLibraryFilterActionPerformer* _filterActionPerformer;
	PXCuratedLibraryActionPerformer* _selectButtonActionPerformer;
	PXCuratedLibraryActionPerformer* _cancelButtonActionPerformer;
	PXCuratedLibraryActionPerformer* _zoomInButtonActionPerformer;
	PXCuratedLibraryActionPerformer* _zoomOutButtonActionPerformer;
	PXCuratedLibraryActionPerformer* _toggleAspectFitButtonActionPerformer;
	PXCuratedLibraryActionPerformer* _showSidebarButtonActionPerformer;
	NSString* _selectButtonTitle;
	NSString* _filterButtonCaption;
	NSString* _filterButtonTitle;
	NSString* _selectionTitle;
	NSString* _longestPossibleSelectionTitle;
	NSString* _toggleAspectFitButtonTitle;
	NSSet* _toggleAspectFitButtonPossibleTitles;
	long long _toggleAspectFitCompactButtonSymbol;
	long long _safeAreaBehavior;
	NSArray* _externalTrailingButtonConfigurations;
	NSArray* _externalLeadingButtonConfigurations;
	NSArray* _externalTopButtonConfigurations;
	PXGLayoutGuide* _leadingButtonsLayoutGuide;
	PXCuratedLibrarySectionHeaderLayoutSpec* _effectiveSpec;
	PXTitleSubtitleLabelSpec* _effectiveTitleSubtitleLabelSpec;
	PXTitleSubtitleLabelSpec* _effectiveOverBackgroundTitleSubtitleLabelSpec;
	double _buttonsMaxY;
	double _titleSubtitleTopSpacing;
	double _titleSubtitleLastBaseline;
	double _gradientAlpha;
	PXNumberAnimator* _alternateAppearanceMixAnimator;
	CGRect _titleSubtitleFrame;

}

@property (nonatomic,retain) PXCuratedLibrarySectionHeaderLayoutSpec * effectiveSpec;                                    //@synthesize effectiveSpec=_effectiveSpec - In the implementation block
@property (nonatomic,readonly) PXTitleSubtitleLabelSpec * effectiveTitleSubtitleLabelSpec;                               //@synthesize effectiveTitleSubtitleLabelSpec=_effectiveTitleSubtitleLabelSpec - In the implementation block
@property (nonatomic,readonly) PXTitleSubtitleLabelSpec * effectiveOverBackgroundTitleSubtitleLabelSpec;                 //@synthesize effectiveOverBackgroundTitleSubtitleLabelSpec=_effectiveOverBackgroundTitleSubtitleLabelSpec - In the implementation block
@property (assign,nonatomic) BOOL controlStackButtonSelected;                                                            //@synthesize controlStackButtonSelected=_controlStackButtonSelected - In the implementation block
@property (assign,nonatomic) BOOL usesCompactToggleAspectFitButton;                                                      //@synthesize usesCompactToggleAspectFitButton=_usesCompactToggleAspectFitButton - In the implementation block
@property (nonatomic,readonly) unsigned long long toggleAspectFitButton; 
@property (assign,nonatomic) double buttonsMaxY;                                                                         //@synthesize buttonsMaxY=_buttonsMaxY - In the implementation block
@property (assign,nonatomic) double titleSubtitleTopSpacing;                                                             //@synthesize titleSubtitleTopSpacing=_titleSubtitleTopSpacing - In the implementation block
@property (assign,nonatomic) double titleSubtitleLastBaseline;                                                           //@synthesize titleSubtitleLastBaseline=_titleSubtitleLastBaseline - In the implementation block
@property (assign,nonatomic) double gradientAlpha;                                                                       //@synthesize gradientAlpha=_gradientAlpha - In the implementation block
@property (nonatomic,readonly) PXNumberAnimator * alternateAppearanceMixAnimator;                                        //@synthesize alternateAppearanceMixAnimator=_alternateAppearanceMixAnimator - In the implementation block
@property (nonatomic,retain) PXGLayoutGuide * leadingButtonsLayoutGuide;                                                 //@synthesize leadingButtonsLayoutGuide=_leadingButtonsLayoutGuide - In the implementation block
@property (nonatomic,retain) PXAssetCollectionReference * assetCollectionReference;                                      //@synthesize assetCollectionReference=_assetCollectionReference - In the implementation block
@property (nonatomic,retain) PXCuratedLibrarySectionHeaderLayoutSpec * spec;                                             //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) double lateralMargin;                                                                       //@synthesize lateralMargin=_lateralMargin - In the implementation block
@property (assign,nonatomic) double maxPossibleHeight;                                                                   //@synthesize maxPossibleHeight=_maxPossibleHeight - In the implementation block
@property (assign,nonatomic) double alpha; 
@property (assign,nonatomic) double titleAlpha;                                                                          //@synthesize titleAlpha=_titleAlpha - In the implementation block
@property (assign,nonatomic) double buttonsAlpha;                                                                        //@synthesize buttonsAlpha=_buttonsAlpha - In the implementation block
@property (assign,nonatomic) BOOL wantsOverBackgroundAppearance;                                                         //@synthesize wantsOverBackgroundAppearance=_wantsOverBackgroundAppearance - In the implementation block
@property (assign,nonatomic) BOOL showsBackgroundGradient;                                                               //@synthesize showsBackgroundGradient=_showsBackgroundGradient - In the implementation block
@property (assign,nonatomic) BOOL showsDebugDescription;                                                                 //@synthesize showsDebugDescription=_showsDebugDescription - In the implementation block
@property (assign,nonatomic) float buttonsZIndex;                                                                        //@synthesize buttonsZIndex=_buttonsZIndex - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryEllipsisButtonActionPerformer * ellipsisButtonActionPerformer;              //@synthesize ellipsisButtonActionPerformer=_ellipsisButtonActionPerformer - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryFilterActionPerformer * filterActionPerformer;                              //@synthesize filterActionPerformer=_filterActionPerformer - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryActionPerformer * selectButtonActionPerformer;                              //@synthesize selectButtonActionPerformer=_selectButtonActionPerformer - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryActionPerformer * cancelButtonActionPerformer;                              //@synthesize cancelButtonActionPerformer=_cancelButtonActionPerformer - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryActionPerformer * zoomInButtonActionPerformer;                              //@synthesize zoomInButtonActionPerformer=_zoomInButtonActionPerformer - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryActionPerformer * zoomOutButtonActionPerformer;                             //@synthesize zoomOutButtonActionPerformer=_zoomOutButtonActionPerformer - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryActionPerformer * toggleAspectFitButtonActionPerformer;                     //@synthesize toggleAspectFitButtonActionPerformer=_toggleAspectFitButtonActionPerformer - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryActionPerformer * showSidebarButtonActionPerformer;                         //@synthesize showSidebarButtonActionPerformer=_showSidebarButtonActionPerformer - In the implementation block
@property (nonatomic,copy) NSString * selectButtonTitle;                                                                 //@synthesize selectButtonTitle=_selectButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * filterButtonCaption;                                                               //@synthesize filterButtonCaption=_filterButtonCaption - In the implementation block
@property (nonatomic,copy) NSString * filterButtonTitle;                                                                 //@synthesize filterButtonTitle=_filterButtonTitle - In the implementation block
@property (assign,nonatomic) BOOL filterButtonHighlighted;                                                               //@synthesize filterButtonHighlighted=_filterButtonHighlighted - In the implementation block
@property (assign,nonatomic) BOOL filterIndicatorButtonHighlighted;                                                      //@synthesize filterIndicatorButtonHighlighted=_filterIndicatorButtonHighlighted - In the implementation block
@property (nonatomic,copy) NSString * selectionTitle;                                                                    //@synthesize selectionTitle=_selectionTitle - In the implementation block
@property (nonatomic,copy) NSString * longestPossibleSelectionTitle;                                                     //@synthesize longestPossibleSelectionTitle=_longestPossibleSelectionTitle - In the implementation block
@property (nonatomic,copy) NSString * toggleAspectFitButtonTitle;                                                        //@synthesize toggleAspectFitButtonTitle=_toggleAspectFitButtonTitle - In the implementation block
@property (nonatomic,copy) NSSet * toggleAspectFitButtonPossibleTitles;                                                  //@synthesize toggleAspectFitButtonPossibleTitles=_toggleAspectFitButtonPossibleTitles - In the implementation block
@property (assign,nonatomic) long long toggleAspectFitCompactButtonSymbol;                                               //@synthesize toggleAspectFitCompactButtonSymbol=_toggleAspectFitCompactButtonSymbol - In the implementation block
@property (nonatomic,readonly) CGRect titleSubtitleFrame;                                                                //@synthesize titleSubtitleFrame=_titleSubtitleFrame - In the implementation block
@property (assign,nonatomic) long long safeAreaBehavior;                                                                 //@synthesize safeAreaBehavior=_safeAreaBehavior - In the implementation block
@property (nonatomic,copy) NSArray * externalTrailingButtonConfigurations;                                               //@synthesize externalTrailingButtonConfigurations=_externalTrailingButtonConfigurations - In the implementation block
@property (nonatomic,copy) NSArray * externalLeadingButtonConfigurations;                                                //@synthesize externalLeadingButtonConfigurations=_externalLeadingButtonConfigurations - In the implementation block
@property (nonatomic,copy) NSArray * externalTopButtonConfigurations;                                                    //@synthesize externalTopButtonConfigurations=_externalTopButtonConfigurations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSAttributedString * attributedTitle; 
@property (nonatomic,copy) NSString * title;                                                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                                          //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL wantsDisclosureIndicator; 
@property (nonatomic,readonly) NSDictionary * defaultAttributes; 
@property (nonatomic,readonly) NSDictionary * emphasizedAttributes; 
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)update;
-(PXCuratedLibrarySectionHeaderLayoutSpec *)spec;
-(void)safeAreaInsetsDidChange;
-(void)setSpec:(PXCuratedLibrarySectionHeaderLayoutSpec *)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)imageConfigurationAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(Class)viewClassForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(id)viewUserDataForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)didRenderTitleAndSubtitleSpriteAtIndex:(unsigned)arg1 layoutVersion:(long long)arg2 withLastBaseline:(double)arg3 ;
-(id)titleForSpriteAtIndex:(unsigned)arg1 ;
-(id)subtitleForSpriteAtIndex:(unsigned)arg1 ;
-(id)titleSubtitleSpecForSpriteAtIndex:(unsigned)arg1 ;
-(void)_updateSprites;
-(void)_updateButtonActionPerformers;
-(void)_updateSpriteTags;
-(void)_updateSpritesAlpha;
-(UIEdgeInsets)safeAreaInsetsWithCurrentBehavior;
-(void)setUsesCompactToggleAspectFitButton:(BOOL)arg1 ;
-(unsigned long long)toggleAspectFitButton;
-(id)_selectionTitleLabelConfigurationWithTitle:(id)arg1 ;
-(id)objectReferenceForSpriteIndex:(unsigned)arg1 ;
-(unsigned)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
-(void)setVisibleRect:(CGRect)arg1 ;
-(void)visibleRectDidChange;
-(void)referenceSizeDidChange;
-(void)referenceOptionsDidChange;
-(void)screenScaleDidChange;
-(void)alphaDidChange;
-(void)setAssetCollectionReference:(PXAssetCollectionReference *)arg1 ;
-(void)setEffectiveSpec:(PXCuratedLibrarySectionHeaderLayoutSpec *)arg1 ;
-(void)setLateralMargin:(double)arg1 ;
-(void)setShowsBackgroundGradient:(BOOL)arg1 ;
-(void)setShowsDebugDescription:(BOOL)arg1 ;
-(void)setButtonsMaxY:(double)arg1 ;
-(void)setTitleSubtitleLastBaseline:(double)arg1 ;
-(void)setTitleSubtitleTopSpacing:(double)arg1 ;
-(void)_updateLastBaseline;
-(void)setEllipsisButtonActionPerformer:(PXCuratedLibraryEllipsisButtonActionPerformer *)arg1 ;
-(void)setFilterActionPerformer:(PXCuratedLibraryFilterActionPerformer *)arg1 ;
-(void)setSelectButtonActionPerformer:(PXCuratedLibraryActionPerformer *)arg1 ;
-(void)setCancelButtonActionPerformer:(PXCuratedLibraryActionPerformer *)arg1 ;
-(void)setZoomInButtonActionPerformer:(PXCuratedLibraryActionPerformer *)arg1 ;
-(void)setZoomOutButtonActionPerformer:(PXCuratedLibraryActionPerformer *)arg1 ;
-(void)setToggleAspectFitButtonActionPerformer:(PXCuratedLibraryActionPerformer *)arg1 ;
-(void)setShowSidebarButtonActionPerformer:(PXCuratedLibraryActionPerformer *)arg1 ;
-(void)setControlStackButtonSelected:(BOOL)arg1 ;
-(void)setSelectButtonTitle:(NSString *)arg1 ;
-(void)setFilterButtonCaption:(NSString *)arg1 ;
-(void)setFilterButtonTitle:(NSString *)arg1 ;
-(void)setFilterButtonHighlighted:(BOOL)arg1 ;
-(void)_invalidateFilterButton;
-(void)setFilterIndicatorButtonHighlighted:(BOOL)arg1 ;
-(void)_invalidateFilterIndicatorButton;
-(void)setSelectionTitle:(NSString *)arg1 ;
-(void)setLongestPossibleSelectionTitle:(NSString *)arg1 ;
-(void)setToggleAspectFitButtonTitle:(NSString *)arg1 ;
-(void)setToggleAspectFitButtonPossibleTitles:(NSSet *)arg1 ;
-(void)setToggleAspectFitCompactButtonSymbol:(long long)arg1 ;
-(void)setExternalTrailingButtonConfigurations:(NSArray *)arg1 ;
-(void)setExternalLeadingButtonConfigurations:(NSArray *)arg1 ;
-(void)setExternalTopButtonConfigurations:(NSArray *)arg1 ;
-(void)_updateEffectiveSpec;
-(id)_effectiveTitleSubtitleLabelSpec:(id)arg1 ;
-(void)_updateTitleAndSubtitle;
-(void)_handleAsyncDateDescription:(id)arg1 placement:(long long)arg2 generation:(long long)arg3 ;
-(void)setMaxPossibleHeight:(double)arg1 ;
-(void)setTitleAlpha:(double)arg1 ;
-(void)setButtonsAlpha:(double)arg1 ;
-(void)setWantsOverBackgroundAppearance:(BOOL)arg1 ;
-(id)_titleSubtitleSpecForItemIdentifier:(id)arg1 ;
-(CGSize)_sizeOfButton:(unsigned long long)arg1 ;
-(void)_discardAllCachedButtonSizes;
-(id)configurationForButton:(unsigned long long)arg1 spec:(id)arg2 ;
-(id)_configurationForButton:(unsigned long long)arg1 ;
-(id)_configurationForButton:(unsigned long long)arg1 overBackgroundVariant:(BOOL)arg2 ;
-(id)hitTestResultForSpriteIndex:(unsigned)arg1 ;
-(id)axSpriteIndexes;
-(id)axSpriteIndexesInRect:(CGRect)arg1 ;
-(unsigned)axSpriteIndexClosestToSpriteIndex:(unsigned)arg1 inDirection:(unsigned long long)arg2 ;
-(PXAssetCollectionReference *)assetCollectionReference;
-(double)lateralMargin;
-(double)maxPossibleHeight;
-(double)titleAlpha;
-(double)buttonsAlpha;
-(BOOL)wantsOverBackgroundAppearance;
-(BOOL)showsBackgroundGradient;
-(BOOL)showsDebugDescription;
-(float)buttonsZIndex;
-(void)setButtonsZIndex:(float)arg1 ;
-(PXCuratedLibraryEllipsisButtonActionPerformer *)ellipsisButtonActionPerformer;
-(PXCuratedLibraryFilterActionPerformer *)filterActionPerformer;
-(PXCuratedLibraryActionPerformer *)selectButtonActionPerformer;
-(PXCuratedLibraryActionPerformer *)cancelButtonActionPerformer;
-(PXCuratedLibraryActionPerformer *)zoomInButtonActionPerformer;
-(PXCuratedLibraryActionPerformer *)zoomOutButtonActionPerformer;
-(PXCuratedLibraryActionPerformer *)toggleAspectFitButtonActionPerformer;
-(PXCuratedLibraryActionPerformer *)showSidebarButtonActionPerformer;
-(NSString *)selectButtonTitle;
-(NSString *)filterButtonCaption;
-(NSString *)filterButtonTitle;
-(BOOL)filterButtonHighlighted;
-(BOOL)filterIndicatorButtonHighlighted;
-(NSString *)selectionTitle;
-(NSString *)longestPossibleSelectionTitle;
-(NSString *)toggleAspectFitButtonTitle;
-(NSSet *)toggleAspectFitButtonPossibleTitles;
-(long long)toggleAspectFitCompactButtonSymbol;
-(CGRect)titleSubtitleFrame;
-(long long)safeAreaBehavior;
-(void)setSafeAreaBehavior:(long long)arg1 ;
-(NSArray *)externalTrailingButtonConfigurations;
-(NSArray *)externalLeadingButtonConfigurations;
-(NSArray *)externalTopButtonConfigurations;
-(PXGLayoutGuide *)leadingButtonsLayoutGuide;
-(void)setLeadingButtonsLayoutGuide:(PXGLayoutGuide *)arg1 ;
-(PXCuratedLibrarySectionHeaderLayoutSpec *)effectiveSpec;
-(PXTitleSubtitleLabelSpec *)effectiveTitleSubtitleLabelSpec;
-(PXTitleSubtitleLabelSpec *)effectiveOverBackgroundTitleSubtitleLabelSpec;
-(BOOL)controlStackButtonSelected;
-(BOOL)usesCompactToggleAspectFitButton;
-(double)buttonsMaxY;
-(double)titleSubtitleTopSpacing;
-(double)titleSubtitleLastBaseline;
-(double)gradientAlpha;
-(void)setGradientAlpha:(double)arg1 ;
-(PXNumberAnimator *)alternateAppearanceMixAnimator;
@end

