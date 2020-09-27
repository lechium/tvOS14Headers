/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSArray, NSString;

@interface CAGradientLayer : CALayer

@property (retain) id colorMap; 
@property (copy) NSArray * interpolations; 
@property (copy) NSArray * colors; 
@property (copy) NSArray * locations; 
@property (assign) CGPoint startPoint; 
@property (assign) CGPoint endPoint; 
@property (copy) NSString * type; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)_colorSpaceDidChange;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(BOOL)CA_validateValue:(id)arg1 forKey:(id)arg2 ;
-(void)_renderBackgroundInContext:(CGContextRef)arg1 ;
-(NSArray *)colors;
-(void)setColors:(NSArray *)arg1 ;
-(NSArray *)locations;
-(void)setLocations:(NSArray *)arg1 ;
-(CGPoint)startPoint;
-(void)setStartPoint:(CGPoint)arg1 ;
-(CGPoint)endPoint;
-(void)setEndPoint:(CGPoint)arg1 ;
-(NSArray *)interpolations;
-(void)setInterpolations:(NSArray *)arg1 ;
-(id)colorMap;
-(void)setColorMap:(id)arg1 ;
@end
