/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxTransform : NSObject {

	FxTransformPriv* _priv;

}
+(id)identity;
+(id)transformWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(id)transformWithScale:(CGPoint)arg1 rotate:(float)arg2 translate:(CGPoint)arg3 shear:(CGPoint)arg4 ;
-(void)dealloc;
-(CGPoint)scale;
-(void)setScale:(CGPoint)arg1 ;
-(float)rotation;
-(void)setRotation:(float)arg1 ;
-(id)initWithCGAffineTransform:(CGAffineTransform)arg1 ;
-(CGPoint)translation;
-(void)setTranslation:(CGPoint)arg1 ;
-(CGPoint)shear;
-(void)setShear:(CGPoint)arg1 ;
-(void)setCGAffineTransform:(CGAffineTransform)arg1 ;
-(id)initWithScale:(CGPoint)arg1 rotate:(float)arg2 translate:(CGPoint)arg3 shear:(CGPoint)arg4 ;
-(CGAffineTransform)cgAffineTransform;
@end

