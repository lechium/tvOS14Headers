/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:56 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class PHCollection, PHFetchResult;

@interface PXSidebarItemChildInfo : NSObject {

	PHCollection* _collection;
	PHFetchResult* _fetchResult;
	long long _childIndexInFetchResult;

}

@property (nonatomic,readonly) PHCollection * collection;                      //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) PHFetchResult * fetchResult;                    //@synthesize fetchResult=_fetchResult - In the implementation block
@property (nonatomic,readonly) long long childIndexInFetchResult;              //@synthesize childIndexInFetchResult=_childIndexInFetchResult - In the implementation block
-(PHCollection *)collection;
-(PHFetchResult *)fetchResult;
-(id)initWithListItem:(id)arg1 dataSection:(id)arg2 childIndex:(long long)arg3 ;
-(long long)childIndexInFetchResult;
@end

