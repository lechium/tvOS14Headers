/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VUICollectionChangeSet;

@interface VUIMediaEntityFetchResponseChanges : NSObject {

	VUICollectionChangeSet* _mediaEntitiesChangeSet;
	VUICollectionChangeSet* _groupingChangeSet;

}

@property (nonatomic,retain) VUICollectionChangeSet * mediaEntitiesChangeSet;              //@synthesize mediaEntitiesChangeSet=_mediaEntitiesChangeSet - In the implementation block
@property (nonatomic,retain) VUICollectionChangeSet * groupingChangeSet;                   //@synthesize groupingChangeSet=_groupingChangeSet - In the implementation block
-(id)description;
-(id)init;
-(VUICollectionChangeSet *)mediaEntitiesChangeSet;
-(id)initWithMediaEntitiesChangeSet:(id)arg1 ;
-(void)setMediaEntitiesChangeSet:(VUICollectionChangeSet *)arg1 ;
-(void)setGroupingChangeSet:(VUICollectionChangeSet *)arg1 ;
-(VUICollectionChangeSet *)groupingChangeSet;
@end

