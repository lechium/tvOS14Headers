/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface HFItemProviderReloadResults : NSObject <NSCopying> {

	NSSet* _addedItems;
	NSSet* _removedItems;
	NSSet* _existingItems;

}

@property (nonatomic,retain) NSSet * addedItems;                 //@synthesize addedItems=_addedItems - In the implementation block
@property (nonatomic,retain) NSSet * removedItems;               //@synthesize removedItems=_removedItems - In the implementation block
@property (nonatomic,retain) NSSet * existingItems;              //@synthesize existingItems=_existingItems - In the implementation block
@property (nonatomic,readonly) NSSet * allItems; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSSet *)allItems;
-(id)resultsByMergingWithResults:(id)arg1 ;
-(NSSet *)removedItems;
-(void)setRemovedItems:(NSSet *)arg1 ;
-(NSSet *)addedItems;
-(id)initWithAddedItems:(id)arg1 removedItems:(id)arg2 existingItems:(id)arg3 ;
-(void)setAddedItems:(NSSet *)arg1 ;
-(NSSet *)existingItems;
-(void)setExistingItems:(NSSet *)arg1 ;
@end

