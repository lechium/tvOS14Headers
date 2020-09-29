/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:53 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PXGItemsLayoutDelegate <NSObject>
@optional
-(long long)itemsLayout:(id)arg1 itemForObjectReference:(id)arg2 options:(unsigned long long)arg3;
-(id)itemsLayout:(id)arg1 objectReferenceForItem:(long long)arg2;
-(id)itemsLayout:(id)arg1 objectReferenceForAccessoryItem:(long long)arg2;
-(double)itemsLayout:(id)arg1 aspectRatioForItem:(long long)arg2;
-(CGRect*)itemsLayout:(id)arg1 bestCropRectForItem:(long long)arg2 withAspectRatio:(double)arg3;
-(unsigned short)itemsLayout:(id)arg1 effectIdForItem:(long long)arg2;
-(void)itemsLayout:(id)arg1 updateTagsInSpriteInfos:(SCD_Struct_PX15*)arg2 forItemsInRange:(NSRange)arg3;

@end

