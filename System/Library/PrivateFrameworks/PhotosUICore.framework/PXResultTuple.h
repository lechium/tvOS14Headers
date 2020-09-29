/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:09 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class PHFetchResult, NSPredicate;

@interface PXResultTuple : NSObject {

	BOOL _fetchedWithReverseSortOrder;
	PHFetchResult* _fetchResult;
	PHFetchResult* _curatedFetchResult;
	PHFetchResult* _keyAssetsFetchResult;
	NSPredicate* _filterPredicate;

}

@property (nonatomic,readonly) PHFetchResult * fetchResult;                       //@synthesize fetchResult=_fetchResult - In the implementation block
@property (nonatomic,readonly) BOOL fetchedWithReverseSortOrder;                  //@synthesize fetchedWithReverseSortOrder=_fetchedWithReverseSortOrder - In the implementation block
@property (nonatomic,readonly) PHFetchResult * curatedFetchResult;                //@synthesize curatedFetchResult=_curatedFetchResult - In the implementation block
@property (nonatomic,readonly) PHFetchResult * keyAssetsFetchResult;              //@synthesize keyAssetsFetchResult=_keyAssetsFetchResult - In the implementation block
@property (nonatomic,readonly) NSPredicate * filterPredicate;                     //@synthesize filterPredicate=_filterPredicate - In the implementation block
-(id)description;
-(PHFetchResult *)fetchResult;
-(NSPredicate *)filterPredicate;
-(PHFetchResult *)keyAssetsFetchResult;
-(PHFetchResult *)curatedFetchResult;
-(id)resultTupleUpdatedWithChange:(id)arg1 ;
-(BOOL)fetchedWithReverseSortOrder;
-(id)initWithFetchResult:(id)arg1 fetchedWithReverseSortOrder:(BOOL)arg2 curatedFetchResult:(id)arg3 keyAssetsFetchResult:(id)arg4 filterPredicate:(id)arg5 ;
@end
