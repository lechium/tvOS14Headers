/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:58 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UITableViewCell.h>

@class PHMemory;

@interface PXDebugMemoryGeneratorsViewControllerCell : UITableViewCell {

	PHMemory* _memory;

}

@property (retain) PHMemory * memory;              //@synthesize memory=_memory - In the implementation block
-(PHMemory *)memory;
-(void)setMemory:(PHMemory *)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)persist:(id)arg1 ;
@end

