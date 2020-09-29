/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:23 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAETile : PAEFilterDefaultBase
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_OZ18*)arg3 ;
-(BOOL)frameSetup:(SCD_Struct_OZ18*)arg1 inputInfo:(SCD_Struct_PA29)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
-(void)getEdgeMode:(unsigned*)arg1 withInfo:(SCD_Struct_OZ18*)arg2 ;
-(HGRef<HGNode>*)transformAndTile:(HGRef<HGNode>*)arg1 withXValue:(double)arg2 YValue:(double)arg3 skew:(double)arg4 scale:(double)arg5 stretch:(double)arg6 rotation:(double)arg7 resolution:(PCVector2<double>)arg8 inputImage:(id)arg9 ;
-(void)_compute_2x2_matrix:(float*)arg1 withScale:(float)arg2 angle:(float)arg3 skew:(float)arg4 stretch:(float)arg5 ;
-(void)retrieveXValue:(double*)arg1 YValue:(double*)arg2 skew:(double*)arg3 scale:(double*)arg4 stretch:(double*)arg5 rotation:(double*)arg6 forOutputImage:(id)arg7 withRenderInfo:(SCD_Struct_OZ18*)arg8 ;
@end

