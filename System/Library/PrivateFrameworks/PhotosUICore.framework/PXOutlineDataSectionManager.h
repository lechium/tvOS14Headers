/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:59 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXDataSectionManager.h>

@protocol PXOutlineDataSectionManagerDelegate;
@class NSDictionary;

@interface PXOutlineDataSectionManager : PXDataSectionManager {

	NSDictionary* _dataSectionManagersByDataSectionObjects;
	id<PXOutlineDataSectionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PXOutlineDataSectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PXOutlineDataSectionManagerDelegate>)delegate;
-(void)setDelegate:(id<PXOutlineDataSectionManagerDelegate>)arg1 ;
-(id)createDataSection;
-(id)changeDetailsForChildDataSectionManagersChangeDetails:(id)arg1 ;
-(id)changeDetailsForChangedChildDataSectionManager:(id)arg1 childChangeDetails:(id)arg2 ;
-(id)_changeDetailsForNewDataSection:(id)arg1 ;
-(id)childDataSectionManagerForOutlineObject:(id)arg1 ;
-(void)rearrangeSectionContent;
-(unsigned long long)childChangeDescriptorsInvalidatingDataSection;
@end

