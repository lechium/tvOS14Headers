/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:51 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXPeopleDataSource.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface PXSharingSuggestionDataSource : PXPeopleDataSource <PHPhotoLibraryChangeObserver> {

	NSObject*<OS_dispatch_queue> _fetchQueue;
	BOOL _prefetchingStarted;

}

@property (assign,nonatomic) BOOL prefetchingStarted;               //@synthesize prefetchingStarted=_prefetchingStarted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)titleAtIndex:(unsigned long long)arg1 ;
-(void)setMembers:(id)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(id)initWithName:(id)arg1 objectsReloadBlock:(/*^block*/id)arg2 ;
-(void)startListeningForChanges;
-(void)stopListeningForChanges;
-(void)imageCacheDidChanged:(id)arg1 ;
-(void)prefetchThumbnailsForTargetSize:(CGSize)arg1 maxFetchCount:(unsigned long long)arg2 ;
-(BOOL)prefetchingStarted;
-(void)setPrefetchingStarted:(BOOL)arg1 ;
@end

