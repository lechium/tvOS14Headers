/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:50 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardModel.framework/HeadBoardModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSSet;

@interface HBMStoreChangeSet : NSObject {

	NSDictionary* _updatedItems;
	NSSet* _removedItemIDs;

}

@property (nonatomic,copy,readonly) NSDictionary * updatedItems;              //@synthesize updatedItems=_updatedItems - In the implementation block
@property (nonatomic,copy,readonly) NSSet * removedItemIDs;                   //@synthesize removedItemIDs=_removedItemIDs - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
-(id)init;
-(BOOL)isEmpty;
-(NSDictionary *)updatedItems;
-(id)initWithUpdatedItems:(id)arg1 removedItemIDs:(id)arg2 ;
-(NSSet *)removedItemIDs;
-(id)changeSetByAddingChangeSet:(id)arg1 ;
@end
