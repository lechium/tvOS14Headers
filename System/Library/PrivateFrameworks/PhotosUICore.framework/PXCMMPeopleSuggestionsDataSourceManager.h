/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:06 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXSectionedDataSourceManager.h>

@class PXCMMPeopleSuggestionsDataSource;

@interface PXCMMPeopleSuggestionsDataSourceManager : PXSectionedDataSourceManager

@property (nonatomic,readonly) PXCMMPeopleSuggestionsDataSource * dataSource; 
-(void)startLoading;
-(BOOL)isLoading;
-(void)cancelLoading;
-(void)boostLoading;
@end

