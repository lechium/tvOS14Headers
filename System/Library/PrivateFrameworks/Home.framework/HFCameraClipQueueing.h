/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol HFCameraClipQueueing <NSObject>
@property (nonatomic,readonly) NSArray * queuableItems; 
@required
-(NSArray *)queuableItems;
-(void)removeQueueableItem:(id)arg1;
-(id)createQueueableItemForClipManager:(id)arg1 clip:(id)arg2;
-(void)insertQueueableItem:(id)arg1 afterItem:(id)arg2;
-(void)seekToOffset:(double)arg1 inItem:(id)arg2;

@end
