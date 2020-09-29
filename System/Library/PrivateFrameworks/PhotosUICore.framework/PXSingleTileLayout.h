/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:04 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXTilingLayout.h>

@interface PXSingleTileLayout : PXTilingLayout {

	CGRect _contentBounds;
	CGSize _preferredSize;
	PXTileIdentifier _tileIdentifier;

}

@property (nonatomic,readonly) PXTileIdentifier tileIdentifier;              //@synthesize tileIdentifier=_tileIdentifier - In the implementation block
@property (assign,nonatomic) CGSize preferredSize;                           //@synthesize preferredSize=_preferredSize - In the implementation block
-(id)init;
-(CGRect)contentBounds;
-(CGSize)preferredSize;
-(void)setPreferredSize:(CGSize)arg1 ;
-(void)prepareLayout;
-(void)setReferenceSize:(CGSize)arg1 ;
-(void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)getGeometry:(out PXTileGeometry*)arg1 group:(out unsigned long long*)arg2 userData:(out id*)arg3 forTileWithIdentifier:(PXTileIdentifier)arg4 ;
-(PXTileIdentifier)tileIdentifier;
-(id)initWithTileIdentifier:(PXTileIdentifier)arg1 ;
@end

