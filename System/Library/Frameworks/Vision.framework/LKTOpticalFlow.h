/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:48 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <Vision/Vision-Structs.h>
@interface LKTOpticalFlow : NSObject {

	BOOL _isValid;
	BOOL _useNonLocalRegularization;
	int _width;
	int _height;
	int _levelCount;
	int _numScales;
	unsigned _outputPixelFormat;
	int _numWarpings;
	int _nlreg_radius;
	int _nlreg_padding;
	float _nlreg_sigma_l;
	float _nlreg_sigma_c;
	float _nlreg_sigma_w;

}

@property (assign,nonatomic) BOOL isValid;                                //@synthesize isValid=_isValid - In the implementation block
@property (nonatomic,readonly) int width;                                 //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) int height;                                //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) int levelCount;                            //@synthesize levelCount=_levelCount - In the implementation block
@property (nonatomic,readonly) int numScales;                             //@synthesize numScales=_numScales - In the implementation block
@property (assign,nonatomic) unsigned outputPixelFormat;                  //@synthesize outputPixelFormat=_outputPixelFormat - In the implementation block
@property (assign,nonatomic) int numWarpings;                             //@synthesize numWarpings=_numWarpings - In the implementation block
@property (assign,nonatomic) BOOL useNonLocalRegularization;              //@synthesize useNonLocalRegularization=_useNonLocalRegularization - In the implementation block
@property (assign,nonatomic) int nlreg_radius;                            //@synthesize nlreg_radius=_nlreg_radius - In the implementation block
@property (assign,nonatomic) int nlreg_padding;                           //@synthesize nlreg_padding=_nlreg_padding - In the implementation block
@property (assign,nonatomic) float nlreg_sigma_l;                         //@synthesize nlreg_sigma_l=_nlreg_sigma_l - In the implementation block
@property (assign,nonatomic) float nlreg_sigma_c;                         //@synthesize nlreg_sigma_c=_nlreg_sigma_c - In the implementation block
@property (assign,nonatomic) float nlreg_sigma_w;                         //@synthesize nlreg_sigma_w=_nlreg_sigma_w - In the implementation block
-(BOOL)isValid;
-(int)width;
-(int)height;
-(void)waitUntilCompleted;
-(void)setIsValid:(BOOL)arg1 ;
-(BOOL)setOutputUV:(CVBufferRef)arg1 error:(id*)arg2 ;
-(BOOL)estimateFlowFromReference:(CVBufferRef)arg1 target:(CVBufferRef)arg2 error:(id*)arg3 ;
-(BOOL)estimateFlowStream:(CVBufferRef)arg1 error:(id*)arg2 ;
-(id)initWithWidth:(int)arg1 height:(int)arg2 numScales:(int)arg3 ;
-(BOOL)_validateInputImage:(CVBufferRef)arg1 error:(id*)arg2 ;
-(BOOL)_validateOutputImage:(CVBufferRef)arg1 error:(id*)arg2 ;
-(int)levelCount;
-(int)numScales;
-(unsigned)outputPixelFormat;
-(void)setOutputPixelFormat:(unsigned)arg1 ;
-(int)numWarpings;
-(void)setNumWarpings:(int)arg1 ;
-(BOOL)useNonLocalRegularization;
-(void)setUseNonLocalRegularization:(BOOL)arg1 ;
-(int)nlreg_radius;
-(void)setNlreg_radius:(int)arg1 ;
-(int)nlreg_padding;
-(void)setNlreg_padding:(int)arg1 ;
-(float)nlreg_sigma_l;
-(void)setNlreg_sigma_l:(float)arg1 ;
-(float)nlreg_sigma_c;
-(void)setNlreg_sigma_c:(float)arg1 ;
-(float)nlreg_sigma_w;
-(void)setNlreg_sigma_w:(float)arg1 ;
@end

