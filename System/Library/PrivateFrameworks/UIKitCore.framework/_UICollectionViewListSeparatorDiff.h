/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UICollectionViewListSnapshotter, _UIDataSourceUpdateMap, NSMutableDictionary, NSArray;

@interface _UICollectionViewListSeparatorDiff : NSObject {

	_UICollectionViewListSnapshotter* _oldSnapshot;
	_UICollectionViewListSnapshotter* _newSnapshot;
	_UIDataSourceUpdateMap* _map;
	NSMutableDictionary* _insertedIndexPaths;
	NSMutableDictionary* _deletedIndexPaths;
	NSArray* _insertedSeparators;
	NSArray* _deletedSeparators;

}
-(void)_mapUpdateItems:(id)arg1 ;
-(void)_prepareInsertsAndDeletes;
-(id)initWithOldSnapshot:(id)arg1 newSnapshot:(id)arg2 updateItems:(id)arg3 ;
-(id)indexPathsToInsertForSeparators;
-(id)indexPathsToDeleteForSeparators;
@end
