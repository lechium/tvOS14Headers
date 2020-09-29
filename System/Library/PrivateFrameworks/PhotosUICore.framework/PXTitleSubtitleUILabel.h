/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:12 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class NSString, PXTitleSubtitleLabelSpec, PXTitleSubtitleCALayerPromise, CALayer, NSArray;

@interface PXTitleSubtitleUILabel : UIView <PXChangeObserver> {

	BOOL _needsUpdateLayerPromise;
	BOOL _rendersTextAsynchronously;
	BOOL _shouldRasterizeTextLayer;
	BOOL _diagnosticsEnabled;
	NSString* _titleText;
	NSString* _subtitleText;
	PXTitleSubtitleLabelSpec* _spec;
	long long _typesettingMode;
	PXTitleSubtitleCALayerPromise* __layerPromise;
	CALayer* __contentLayer;

}

@property (setter=_setLayerPromise:,nonatomic,retain) PXTitleSubtitleCALayerPromise * _layerPromise;              //@synthesize _layerPromise=__layerPromise - In the implementation block
@property (setter=_setContentLayer:,nonatomic,retain) CALayer * _contentLayer;                                    //@synthesize _contentLayer=__contentLayer - In the implementation block
@property (assign,nonatomic) BOOL diagnosticsEnabled;                                                             //@synthesize diagnosticsEnabled=_diagnosticsEnabled - In the implementation block
@property (nonatomic,readonly) NSArray * diagnosticsRenderedLines; 
@property (nonatomic,copy) NSString * titleText;                                                                  //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * subtitleText;                                                               //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,retain) PXTitleSubtitleLabelSpec * spec;                                                     //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) long long typesettingMode;                                                           //@synthesize typesettingMode=_typesettingMode - In the implementation block
@property (assign,nonatomic) BOOL rendersTextAsynchronously;                                                      //@synthesize rendersTextAsynchronously=_rendersTextAsynchronously - In the implementation block
@property (assign,nonatomic) BOOL shouldRasterizeTextLayer;                                                       //@synthesize shouldRasterizeTextLayer=_shouldRasterizeTextLayer - In the implementation block
@property (nonatomic,readonly) double lastBaseline; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(CGRect)contentBounds;
-(NSString *)subtitleText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setDiagnosticsEnabled:(BOOL)arg1 ;
-(BOOL)diagnosticsEnabled;
-(PXTitleSubtitleLabelSpec *)spec;
-(CALayer *)_contentLayer;
-(void)setSpec:(PXTitleSubtitleLabelSpec *)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(double)lastBaseline;
-(void)setRendersTextAsynchronously:(BOOL)arg1 ;
-(BOOL)rendersTextAsynchronously;
-(long long)typesettingMode;
-(void)setTypesettingMode:(long long)arg1 ;
-(NSArray *)diagnosticsRenderedLines;
-(void)_PXTitleSubtitleUILabelCommonInitialization;
-(void)_handleChangeFromBounds:(CGRect)arg1 ;
-(void)setShouldRasterizeTextLayer:(BOOL)arg1 ;
-(void)_setLayerPromise:(id)arg1 ;
-(void)_setContentLayer:(id)arg1 ;
-(void)_invalidateLayerPromise;
-(void)_updateLayerPromiseIfNeeded;
-(void)_updateContentLayer;
-(BOOL)shouldRasterizeTextLayer;
-(PXTitleSubtitleCALayerPromise *)_layerPromise;
@end
