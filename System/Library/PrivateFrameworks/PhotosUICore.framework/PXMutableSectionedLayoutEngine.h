/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:12 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PXMutableSectionedLayoutEngine <PXMutableLayoutEngine>
@property (nonatomic,retain) id<PXSectionedLayoutItem> seedItem; 
@property (assign,nonatomic) CGSize seedSize; 
@required
-(void)setDataSourceSnapshot:(id)arg1 withChangeDetails:(id)arg2;
-(id<PXSectionedLayoutItem>)seedItem;
-(void)setSeedItem:(id)arg1;
-(CGSize)seedSize;
-(void)setSeedSize:(CGSize)arg1;

@end

