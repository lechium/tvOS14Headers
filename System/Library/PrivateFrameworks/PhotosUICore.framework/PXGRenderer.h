/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:51 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PXGRenderer <NSObject>
@property (assign,nonatomic,__weak) id<PXGRendererDelegate> delegate; 
@property (assign,nonatomic) CGRect visibleRect; 
@property (assign,nonatomic) SCD_Struct_PX22 interactionState; 
@property (nonatomic,readonly) int presentationType; 
@property (nonatomic,readonly) id<PXGTextureConverter> textureConverter; 
@property (nonatomic,copy) id test_renderSnapshotHandler; 
@optional
-(id)test_renderSnapshotHandler;
-(void)setTest_renderSnapshotHandler:(/*^block*/id)arg1;

@required
-(id<PXGRendererDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)releaseResources;
-(CGRect)visibleRect;
-(int)presentationType;
-(void)setVisibleRect:(CGRect)arg1;
-(void)setNeedsRender;
-(void)updateWithChangeDetails:(id)arg1;
-(void)renderSpritesWithTextures:(id)arg1 dataStore:(id)arg2 presentationDataStore:(id)arg3 presentationMetadataStore:(id)arg4 layout:(id)arg5;
-(SCD_Struct_PX22)interactionState;
-(void)setInteractionState:(SCD_Struct_PX22)arg1;
-(id<PXGTextureConverter>)textureConverter;

@end

