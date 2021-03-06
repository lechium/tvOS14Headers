/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableOrderedSet;

@interface WFActionSearchRankedCollection : NSObject {

	NSMutableOrderedSet* _itemsWithExactNameMatch;
	NSMutableOrderedSet* _itemsWithNameMatch;
	NSMutableOrderedSet* _itemsWithCategoryMatch;
	NSMutableOrderedSet* _itemsWithKeywordMatch;

}
-(id)init;
-(id)orderedSetForType:(unsigned long long)arg1 ;
-(void)addItem:(id)arg1 forType:(unsigned long long)arg2 ;
-(void)prioritizeItem:(id)arg1 type:(unsigned long long)arg2 ;
-(id)rankedItems;
@end

