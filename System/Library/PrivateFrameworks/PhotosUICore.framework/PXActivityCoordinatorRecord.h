/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:10 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PXActivityCoordinatorItem;
@interface PXActivityCoordinatorRecord : NSObject {

	id<PXActivityCoordinatorItem> _item;

}

@property (assign,nonatomic,__weak) id<PXActivityCoordinatorItem> item;              //@synthesize item=_item - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(void)setItem:(id<PXActivityCoordinatorItem>)arg1 ;
-(id<PXActivityCoordinatorItem>)item;
-(id)initWithItem:(id)arg1 ;
@end
