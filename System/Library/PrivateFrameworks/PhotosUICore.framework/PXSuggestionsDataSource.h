/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:03 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedDataSource.h>

@protocol PXDisplaySuggestionFetchResult;
@interface PXSuggestionsDataSource : PXSectionedDataSource {

	id<PXDisplaySuggestionFetchResult> _suggestions;

}

@property (nonatomic,readonly) id<PXDisplaySuggestionFetchResult> suggestions;              //@synthesize suggestions=_suggestions - In the implementation block
-(id)init;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(id<PXDisplaySuggestionFetchResult>)suggestions;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
-(id)initWithSuggestionsFetchResult:(id)arg1 ;
@end

