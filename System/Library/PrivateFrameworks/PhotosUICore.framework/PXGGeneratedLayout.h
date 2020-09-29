/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:59 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGItemsLayout.h>
#import <libobjc.A.dylib/PXGDiagnosticsProvider.h>

@class PXLayoutGenerator, PXGLayoutGuide, NSString;

@interface PXGGeneratedLayout : PXGItemsLayout <PXGDiagnosticsProvider> {

	PXLayoutGenerator* _generator;
	PXLayoutGeometry* _generatorGeometryBuffer;
	long long _generatorGeometryBufferCount;
	BOOL _isUpdatingSprites;
	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	double _interitemSpacing;
	BOOL _useSaliency;
	int _mediaKind;
	long long _keyItemIndex;
	long long _defaultSpriteTag;
	long long _keyItemSpriteTag;
	PXGLayoutGuide* _headerLayoutGuide;
	SCD_Struct_PX81 _cornerRadius;
	UIEdgeInsets _padding;

}

@property (nonatomic,readonly) PXLayoutGenerator * generator; 
@property (assign,nonatomic) long long keyItemIndex;                                      //@synthesize keyItemIndex=_keyItemIndex - In the implementation block
@property (assign,nonatomic) int mediaKind;                                               //@synthesize mediaKind=_mediaKind - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                        //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                                     //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) BOOL useSaliency;                                            //@synthesize useSaliency=_useSaliency - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX82 cornerRadius;                                //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) long long defaultSpriteTag;                                  //@synthesize defaultSpriteTag=_defaultSpriteTag - In the implementation block
@property (assign,nonatomic) long long keyItemSpriteTag;                                  //@synthesize keyItemSpriteTag=_keyItemSpriteTag - In the implementation block
@property (assign,nonatomic,__weak) id<PXGGeneratedLayoutDelegate> delegate; 
@property (nonatomic,readonly) PXGLayoutGuide * headerLayoutGuide;                        //@synthesize headerLayoutGuide=_headerLayoutGuide - In the implementation block
@property (nonatomic,copy,readonly) NSString * diagnosticDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(PXLayoutGenerator *)generator;
-(void)update;
-(SCD_Struct_PX82)cornerRadius;
-(void)setCornerRadius:(SCD_Struct_PX82)arg1 ;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(int)mediaKind;
-(void)setMediaKind:(int)arg1 ;
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(CGSize)sizeForItem:(long long)arg1 ;
-(void)_updateSprites;
-(id)objectReferenceForSpriteIndex:(unsigned)arg1 ;
-(void)referenceSizeDidChange;
-(void)screenScaleDidChange;
-(BOOL)useSaliency;
-(void)setUseSaliency:(BOOL)arg1 ;
-(NSString *)diagnosticDescription;
-(void)didApplySpriteChangeDetails:(id)arg1 ;
-(long long)keyItemIndex;
-(PXGLayoutGuide *)headerLayoutGuide;
-(id)newGenerator;
-(void)getSpriteZPosition:(out float*)arg1 clippingRect:(out CGRect*)arg2 forSpriteKind:(long long)arg3 ;
-(void)enumerateItemsInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)metricsDidChange;
-(void)setKeyItemIndex:(long long)arg1 ;
-(void)setDefaultSpriteTag:(long long)arg1 ;
-(void)setKeyItemSpriteTag:(long long)arg1 ;
-(void)_updateGenerator;
-(void)_updateContentSize;
-(void)_resizeGeometryBufferForSpriteCount:(long long)arg1 ;
-(void)spritesDidUpdate;
-(long long)defaultSpriteTag;
-(long long)keyItemSpriteTag;
@end

