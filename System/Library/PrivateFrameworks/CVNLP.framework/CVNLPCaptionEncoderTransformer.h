/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:41:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CVNLP/CVNLP-Structs.h>
#import <CVNLP/CVNLPCaptionEncoder.h>

@interface CVNLPCaptionEncoderTransformer : CVNLPCaptionEncoder {

	void* encoderPlan;
	void* encoderCtx;
	SCD_Struct_CV1* encoderNet;
	SCD_Struct_CV2* attFeatsBlob;

}
-(void)dealloc;
-(id)initWithOptions:(id)arg1 runTimeParams:(id)arg2 ;
-(void)computeCaptionForImage:(vImage_Buffer*)arg1 outputs:(id*)arg2 ;
-(void)computeCaptionForPixelBuffer:(CVBufferRef)arg1 outputs:(id*)arg2 ;
-(void)computeCaptionForImageImpl:(vImage_Buffer*)arg1 outputs:(id*)arg2 ;
-(void)computeCaptionForPixelBufferImpl:(CVBufferRef)arg1 outputs:(id*)arg2 ;
@end

