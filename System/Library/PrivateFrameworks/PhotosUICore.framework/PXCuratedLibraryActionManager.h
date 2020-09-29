/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:59 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXActionManager.h>

@class PXCuratedLibraryViewModel, NSDictionary;

@interface PXCuratedLibraryActionManager : PXActionManager {

	PXCuratedLibraryViewModel* _viewModel;
	NSDictionary* _actionPerformersByType;
	NSDictionary* _assetCollectionActionPerformersByType;
	NSDictionary* _constructorSpecificActionPerformersByType;

}

@property (nonatomic,readonly) PXCuratedLibraryViewModel * viewModel;                                 //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) NSDictionary * actionPerformersByType;                                 //@synthesize actionPerformersByType=_actionPerformersByType - In the implementation block
@property (nonatomic,readonly) NSDictionary * assetCollectionActionPerformersByType;                  //@synthesize assetCollectionActionPerformersByType=_assetCollectionActionPerformersByType - In the implementation block
@property (nonatomic,readonly) NSDictionary * constructorSpecificActionPerformersByType;              //@synthesize constructorSpecificActionPerformersByType=_constructorSpecificActionPerformersByType - In the implementation block
+(id)actionsWithActionPerformers;
-(id)init;
-(PXCuratedLibraryViewModel *)viewModel;
-(id)initWithViewModel:(id)arg1 ;
-(id)actionPerformerForActionType:(id)arg1 ;
-(BOOL)canPerformActionType:(id)arg1 ;
-(id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2 ;
-(id)actionPerformerForActionType:(id)arg1 withAssetCollectionReference:(id)arg2 ;
-(id)ellipsisButtonActionPerformerWithAssetCollectionReference:(id)arg1 ;
-(id)showAllActionPerformerWithAssetCollectionReference:(id)arg1 ;
-(id)tapToRadarPerformerAssetCollectionReference:(id)arg1 diagnosticLayout:(id)arg2 ;
-(id)curationDebugPerformerAssetCollectionReference:(id)arg1 diagnosticLayout:(id)arg2 ;
-(id)actionPerformerForHitTestResult:(id)arg1 ;
-(NSDictionary *)actionPerformersByType;
-(NSDictionary *)assetCollectionActionPerformersByType;
-(NSDictionary *)constructorSpecificActionPerformersByType;
@end
