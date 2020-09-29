/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:09 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, PXPhotosDataSourceSectionCache, NSDictionary, NSMutableDictionary, NSMutableSet, PXBackgroundFetchToken, PXLIFOQueue, NSMutableOrderedSet, NSArray, PHFetchResult, NSNumber, PHCollection, PHAsset, NSPredicate, NSSet, PHPhotoLibrary, PHAssetCollection, NSString;

@interface PXPhotosDataSource : NSObject <PXPhotoLibraryUIChangeObserver> {

	NSObject*<OS_dispatch_queue> _observersQueue;
	BOOL _observersQueue_shouldCopyChangeObserversOnWrite;
	NSHashTable* _observersQueue_observers;
	PXPhotosDataSourceSectionCache* __sectionCache;
	PXPhotosDataSourceSectionCache* __preparedSectionCache;
	NSDictionary* _hintIndexPathByAssetReferenceCache;
	NSDictionary* _preparedIndexPathByAssetReferenceCache;
	NSDictionary* _preparedResultRecordChangeDetailsByAssetCollection;
	NSMutableDictionary* _resultRecordByAssetCollection;
	NSMutableSet* __inaccurateAssetCollections;
	BOOL _inaccurateAssetCollectionsNeedsUpdate;
	NSMutableDictionary* _preparedChangeDetailsByAssetCollection;
	NSMutableDictionary* _infoForAssetCollection;
	BOOL _backgroundFetchOriginSectionChanged;
	BOOL _needToStartBackgroundFetch;
	PXBackgroundFetchToken* _backgroundFetchToken;
	BOOL _interruptBackgroundFetch;
	BOOL _pauseBackgroundFetchResultsDelivery;
	NSMutableSet* _pauseLibraryChangeDeliveryTokens;
	Ai _backgroundFetchId;
	NSMutableDictionary* _pendingResultsByAssetCollection;
	NSObject*<OS_dispatch_queue> _pendingResultsIsolationQueue;
	BOOL _processAndPublishScheduledOnRunloop;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	PXLIFOQueue* _backgroundLIFOQueue;
	NSMutableOrderedSet* _queuedAssetCollectionsToFetch;
	NSObject*<OS_dispatch_queue> _prefetchQueue;
	NSMutableDictionary* _facesByAssetCache;
	NSMutableDictionary* _weightByAssetCache;
	NSArray* _filterPersons;
	BOOL _hideHiddenAssets;
	NSArray* _fetchPropertySets;
	long long _curationType;
	PHFetchResult* _emptyAssetsFetchResult;
	NSNumber* _cachedIsEmpty;
	long long _nestedChanges;
	BOOL _reverseSortOrder;
	BOOL _wantsCurationByDefault;
	BOOL _isBackgroundFetching;
	BOOL _allowNextChangeDeliveryOnAllRunLoopModes;
	PHCollection* _containerCollection;
	unsigned long long _options;
	unsigned long long _versionIdentifier;
	PHFetchResult* _collectionListFetchResult;
	PHAsset* _referenceAsset;
	long long _backgroundFetchOriginSection;
	NSPredicate* _basePredicate;
	NSPredicate* _filterPredicate;
	NSSet* _allowedUUIDs;
	NSSet* _allowedOIDs;
	unsigned long long _fetchLimit;
	NSArray* _sortDescriptors;
	unsigned long long __previousCollectionsCount;
	PHPhotoLibrary* _photoLibrary;

}

@property (assign,setter=_setPreviousCollectionsCount:,nonatomic) unsigned long long _previousCollectionsCount;              //@synthesize _previousCollectionsCount=__previousCollectionsCount - In the implementation block
@property (assign,nonatomic) BOOL isBackgroundFetching;                                                                      //@synthesize isBackgroundFetching=_isBackgroundFetching - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;                                                                //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) BOOL allowNextChangeDeliveryOnAllRunLoopModes;                                                  //@synthesize allowNextChangeDeliveryOnAllRunLoopModes=_allowNextChangeDeliveryOnAllRunLoopModes - In the implementation block
@property (nonatomic,readonly) BOOL wantsCurationForFirstAssetCollection; 
@property (nonatomic,readonly) unsigned long long options;                                                                   //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) unsigned long long versionIdentifier;                                                         //@synthesize versionIdentifier=_versionIdentifier - In the implementation block
@property (nonatomic,retain) PHFetchResult * collectionListFetchResult;                                                      //@synthesize collectionListFetchResult=_collectionListFetchResult - In the implementation block
@property (nonatomic,readonly) PHCollection * containerCollection;                                                           //@synthesize containerCollection=_containerCollection - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * containerAssetCollection; 
@property (nonatomic,readonly) PHAsset * referenceAsset;                                                                     //@synthesize referenceAsset=_referenceAsset - In the implementation block
@property (nonatomic,readonly) BOOL isImmutable; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) BOOL containsMultipleAssets; 
@property (nonatomic,readonly) long long estimatedPhotosCount; 
@property (nonatomic,readonly) long long estimatedVideosCount; 
@property (nonatomic,readonly) long long estimatedOtherCount; 
@property (nonatomic,readonly) BOOL areAllSectionsConsideredAccurate; 
@property (assign,nonatomic) long long backgroundFetchOriginSection;                                                         //@synthesize backgroundFetchOriginSection=_backgroundFetchOriginSection - In the implementation block
@property (nonatomic,readonly) NSPredicate * basePredicate;                                                                  //@synthesize basePredicate=_basePredicate - In the implementation block
@property (nonatomic,retain) NSPredicate * filterPredicate;                                                                  //@synthesize filterPredicate=_filterPredicate - In the implementation block
@property (nonatomic,copy) NSSet * allowedUUIDs;                                                                             //@synthesize allowedUUIDs=_allowedUUIDs - In the implementation block
@property (nonatomic,copy) NSSet * allowedOIDs;                                                                              //@synthesize allowedOIDs=_allowedOIDs - In the implementation block
@property (assign,nonatomic) unsigned long long fetchLimit;                                                                  //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                                                                        //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) BOOL reverseSortOrder;                                                                          //@synthesize reverseSortOrder=_reverseSortOrder - In the implementation block
@property (assign,nonatomic) BOOL wantsCurationByDefault;                                                                    //@synthesize wantsCurationByDefault=_wantsCurationByDefault - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)backgroundFetchingGroup;
+(id)_sharedPrefetchQueue;
+(id)_curationSharedBackgroundQueue;
+(void)waitForAllBackgroundFetchingToFinish;
-(NSString *)description;
-(void)dealloc;
-(BOOL)isEmpty;
-(unsigned long long)options;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(unsigned long long)fetchLimit;
-(void)_commonInit;
-(unsigned long long)versionIdentifier;
-(long long)numberOfSections;
-(BOOL)isImmutable;
-(PHPhotoLibrary *)photoLibrary;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)estimatedPhotosCount;
-(long long)estimatedVideosCount;
-(BOOL)reverseSortOrder;
-(void)setReverseSortOrder:(BOOL)arg1 ;
-(void)registerChangeObserver:(id)arg1 ;
-(void)unregisterChangeObserver:(id)arg1 ;
-(PHAsset *)referenceAsset;
-(NSPredicate *)filterPredicate;
-(NSPredicate *)basePredicate;
-(id)assetAtIndexPath:(id)arg1 ;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(long long)estimatedOtherCount;
-(BOOL)hasCurationForAssetCollection:(id)arg1 ;
-(long long)numberOfSectionsWithEnrichmentState:(unsigned short)arg1 ;
-(long long)estimatedAssetsCountWithEnrichmentState:(unsigned short)arg1 ;
-(PHCollection *)containerCollection;
-(id)firstAssetCollection;
-(id)lastAssetCollection;
-(BOOL)areAllSectionsConsideredAccurate;
-(void)setFilterPredicate:(NSPredicate *)arg1 ;
-(BOOL)forceAccurateAllSectionsIfNeeded;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg1 ;
-(BOOL)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2 ;
-(void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1 ;
-(void)startBackgroundFetchIfNeeded;
-(void)forceIncludeAssetsAtIndexPaths:(id)arg1 ;
-(void)stopForceIncludingAllAssets;
-(void)stopExcludingAssets:(id)arg1 ;
-(void)setFilterPredicate:(id)arg1 provideIncrementalChangeDetailsForAssetCollections:(id)arg2 ;
-(long long)backgroundFetchOriginSection;
-(void)setBackgroundFetchOriginSection:(long long)arg1 ;
-(BOOL)isBackgroundFetching;
-(id)indexPathForAssetReference:(id)arg1 ;
-(void)_observersQueue_copyChangeObserversForWriteIfNeeded;
-(BOOL)isAssetAtIndexPathPartOfCuratedSet:(PXSimpleIndexPath)arg1 ;
-(PHFetchResult *)collectionListFetchResult;
-(NSSet *)allowedUUIDs;
-(void)setAllowedUUIDs:(NSSet *)arg1 ;
-(NSSet *)allowedOIDs;
-(void)setAllowedOIDs:(NSSet *)arg1 ;
-(void)_interruptBackgroundFetch;
-(id)initWithPhotosDataSourceConfiguration:(id)arg1 ;
-(id)initWithPhotosDataSource:(id)arg1 options:(unsigned long long)arg2 ;
-(id)createDataSourceWithAssetsAtIndexPaths:(id)arg1 ;
-(void)_initResultRecordsWithOldOptions:(unsigned long long)arg1 newOptions:(unsigned long long)arg2 ;
-(void)_enumerateChangeObserversWithBlock:(/*^block*/id)arg1 ;
-(id)_fetcher;
-(BOOL)_allSectionsConsideredAccurate;
-(unsigned long long)_assetCollectionFetchStatus:(id)arg1 ;
-(BOOL)_reverseSortOrderForAssetCollection:(id)arg1 ;
-(id)_filterPredicateForAssetCollection:(id)arg1 ;
-(id)_allowedUUIDsForAssetCollection:(id)arg1 ;
-(id)_allowedOIDsForAssetCollection:(id)arg1 ;
-(id)_finalFilterPredicateForAssetCollection:(id)arg1 ;
-(id)_inclusionPredicateForAssetCollection:(id)arg1 ;
-(id)_createResultRecordForAssetCollection:(id)arg1 ;
-(id)_resultRecordForAssetCollection:(id)arg1 ;
-(id)_mutableResultRecordForAssetCollection:(id)arg1 ;
-(id)_assetOidsByAssetCollectionForAssetsAtIndexPathsInSet:(id)arg1 ;
-(void)_performManualChangesForAssetCollections:(id)arg1 changeBlock:(/*^block*/id)arg2 ;
-(void)_performManualChangesForAssetCollections:(id)arg1 collectionsToDiff:(id)arg2 changeBlock:(/*^block*/id)arg3 ;
-(void)_performManualChangesForAssetCollections:(id)arg1 collectionsToDiff:(id)arg2 collectionsToChange:(id)arg3 changeBlock:(/*^block*/id)arg4 ;
-(void)_performManualReloadWithChangeBlock:(/*^block*/id)arg1 ;
-(void)_getFetchLimit:(unsigned long long*)arg1 fetchWithReverseSortOrder:(BOOL*)arg2 forAssetCollection:(id)arg3 isLimitedInitialFetch:(BOOL)arg4 ;
-(id)_fetchTupleForAssetCollection:(id)arg1 calledOnMainQueue:(BOOL)arg2 isLimitedInitialFetch:(BOOL)arg3 ;
-(void)_publishReloadChange;
-(void)_publishWillChange;
-(void)_publishChange:(id)arg1 ;
-(void)_publishDidReceivePhotoLibraryChange:(id)arg1 ;
-(id)_observerInterestingAssetReferences;
-(id)_closestIndexPathToIndexPath:(id)arg1 ;
-(BOOL)_isResulTupleApplicable:(id)arg1 forAssetCollection:(id)arg2 ;
-(unsigned long long)_cachedSectionForAssetCollection:(id)arg1 ;
-(id)_sectionCache;
-(void)pauseChangeDeliveryFor:(double)arg1 ;
-(id)pauseChangeDeliveryAndBackgroundLoadingWithTimeout:(double)arg1 ;
-(void)_incrementVersionIdentifier;
-(void)setCollectionListFetchResult:(PHFetchResult *)arg1 ;
-(void)setKeyAsset:(id)arg1 forAssetCollection:(id)arg2 ;
-(void)setWantsCuration:(BOOL)arg1 forAssetCollection:(id)arg2 ;
-(void)setWantsCurationForAllCollections:(BOOL)arg1 collectionsToDiff:(id)arg2 ;
-(id)assetCollectionForSection:(long long)arg1 ;
-(unsigned long long)sectionForAssetCollection:(id)arg1 ;
-(id)sectionsForAssetCollections:(id)arg1 ;
-(id)infoForAssetCollection:(id)arg1 ;
-(id)keyAssetsInSection:(long long)arg1 ;
-(id)_keyAssetsForAssetCollection:(id)arg1 ;
-(long long)keyAssetIndexInSection:(long long)arg1 ;
-(id)assetsInSection:(long long)arg1 ;
-(id)_assetsForAssetCollection:(id)arg1 ;
-(id)assetAtSimpleIndexPath:(PXSimpleIndexPath)arg1 ;
-(double)weightForAsset:(id)arg1 ;
-(id)facesAtSimpleIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)approximateAssetsAtIndexPaths:(id)arg1 ;
-(id)indexPathForAsset:(id)arg1 inCollection:(id)arg2 ;
-(id)indexPathForAsset:(id)arg1 hintIndexPath:(id)arg2 hintCollection:(id)arg3 ;
-(id)indexPathForAsset:(id)arg1 hintIndexPath:(id)arg2 hintCollections:(id)arg3 ;
-(long long)indexForAsset:(id)arg1 inCollection:(id)arg2 hintIndex:(long long)arg3 ;
-(id)indexPathForAssetWithUUID:(id)arg1 orBurstIdentifier:(id)arg2 hintIndexPath:(id)arg3 hintCollection:(id)arg4 ;
-(id)indexPathForAssetWithUUID:(id)arg1 orBurstIdentifier:(id)arg2 hintIndexPath:(id)arg3 hintCollections:(id)arg4 ;
-(id)assetReferenceForAsset:(id)arg1 containedInAssetCollectionWithType:(long long)arg2 ;
-(id)assetReferenceAtIndexPath:(id)arg1 ;
-(id)indexPathForFirstAsset;
-(id)indexPathForLastAsset;
-(void)enumerateStartingAtIndexPath:(id)arg1 reverseDirection:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)fetchResultsByAssetCollection;
-(void)forceIncludeAssetsAtIndexes:(id)arg1 ;
-(void)forceExcludeAssetsAtIndexes:(id)arg1 ;
-(void)forceExcludeAssetsAtIndexPaths:(id)arg1 ;
-(void)clearResultsForAssetCollection:(id)arg1 ;
-(void)clearResultsForAssetCollections:(id)arg1 ;
-(void)refetchResultsForAssetCollection:(id)arg1 ;
-(BOOL)wantsCurationForFirstAssetCollection;
-(BOOL)wantsCurationForAssetCollection:(id)arg1 ;
-(BOOL)isCuratedAssetsEmptyForAssetCollection:(id)arg1 ;
-(BOOL)isCuratedAssetsFutilelyForAssetCollection:(id)arg1 ;
-(id)curatedAssetsForAssetCollection:(id)arg1 ;
-(id)uncuratedAssetsForAssetCollection:(id)arg1 ;
-(id)curatedAssetsInSection:(long long)arg1 ;
-(id)uncuratedAssetsInSection:(long long)arg1 ;
-(BOOL)containsMultipleAssets;
-(id)assetsStartingAtIndexPath:(id)arg1 ;
-(id)_fetchAssetsStartingAtIndexPath:(id)arg1 ;
-(id)fetchResultWithAssetsInSections:(id)arg1 ;
-(id)fetchResultWithAssetsAtIndexPaths:(id)arg1 ;
-(id)assetsAtIndexPaths:(id)arg1 ;
-(PHAssetCollection *)containerAssetCollection;
-(BOOL)supportsDynamicBackgroundFetching;
-(void)setDisableFilters:(BOOL)arg1 forAssetCollection:(id)arg2 ;
-(BOOL)_areFiltersDisabledForAssetCollection:(id)arg1 ;
-(BOOL)_forceAccurateSection:(long long)arg1 andNumberOfSurroundingSectionsWithContent:(long long)arg2 ;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg1 reloadChanges:(BOOL)arg2 ;
-(BOOL)forceAccurateAssetCollectionsIfNeeded:(id)arg1 reloadChanges:(BOOL)arg2 ;
-(BOOL)forceAccurateIndexPath:(id)arg1 andAssetsBeforeAndAfter:(long long)arg2 ;
-(void)prefetchApproximateAssetsAtIndexPaths:(id)arg1 ;
-(void)prefetchApproximateAssetsAtIndexPaths:(id)arg1 reverseOrder:(BOOL)arg2 ;
-(void)prefetchAssetsAtIndexPaths:(id)arg1 onlyThumbnailAssets:(BOOL)arg2 ;
-(void)prefetchAssetsInSections:(id)arg1 ;
-(void)_prefetchIndexesByFetchResult:(id)arg1 onlyThumbnails:(BOOL)arg2 ;
-(id)_inaccurateAssetCollections;
-(void)_updateInaccurateAssetCollectionsIfNeeded;
-(void)setIsBackgroundFetching:(BOOL)arg1 ;
-(long long)_nextBackgroundFetchId;
-(void)_cancelBackgroundFetchIfNeeded;
-(void)_fetchRemainingCollectionsBackgroundLoopWithId:(long long)arg1 ;
-(void)_processAndPublishPendingCollectionFetchResultsWhenAppropriate;
-(void)_prepareDiffsForPendingResultsWithCompletion:(/*^block*/id)arg1 ;
-(void)_performProcessAndPublishSelectorInDefaultRunLoopMode;
-(void)_processAndPublishPendingCollectionFetchResults;
-(BOOL)_addResultTuple:(id)arg1 forAssetCollection:(id)arg2 toMutableResultRecord:(id)arg3 ;
-(void)_didFinishBackgroundFetchingForId:(long long)arg1 ;
-(BOOL)_areSecondaryFetchesEnabled;
-(BOOL)wantsCurationByDefault;
-(void)setWantsCurationByDefault:(BOOL)arg1 ;
-(unsigned long long)_previousCollectionsCount;
-(void)_setPreviousCollectionsCount:(unsigned long long)arg1 ;
-(BOOL)allowNextChangeDeliveryOnAllRunLoopModes;
-(void)setAllowNextChangeDeliveryOnAllRunLoopModes:(BOOL)arg1 ;
@end

