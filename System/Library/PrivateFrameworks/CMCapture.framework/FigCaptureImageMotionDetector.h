/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:42 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <CMCapture/CMCapture-Structs.h>
@interface FigCaptureImageMotionDetector : NSObject {

	int _width;
	int _height;
	int* _intRowSum;
	int* _intColSum;
	SCD_Struct_Fi108* _imgProj;
	double* _tmpSum1;
	double* _tmpSum2;
	double* _corrArray;
	int _rowSumLength;
	int _rowSumCapacity;
	int _colSumLength;
	int _colSumCapacity;
	int _processedBufferCount;
	CGRect _sumROI;
	float _stationaryThreshold;
	int _maximumSearchRange;
	SCD_Struct_Fi109 _motionStatistics;

}

@property (nonatomic,readonly) SCD_Struct_Fi88 motionStatistics;              //@synthesize motionStatistics=_motionStatistics - In the implementation block
@property (assign,nonatomic) float stationaryThreshold;                       //@synthesize stationaryThreshold=_stationaryThreshold - In the implementation block
@property (nonatomic,readonly) int maximumSearchRange;                        //@synthesize maximumSearchRange=_maximumSearchRange - In the implementation block
-(id)init;
-(void)dealloc;
-(int)_computeStatistics;
-(id)initWithWidth:(int)arg1 height:(int)arg2 ;
-(void)setStationaryThreshold:(float)arg1 ;
-(int)setRoi:(CGRect)arg1 actualROI:(CGRect*)arg2 ;
-(int)setCentralROIAndGetRect:(CGRect*)arg1 ;
-(int)processPixelBuffer:(CVBufferRef)arg1 ;
-(SCD_Struct_Fi88)motionStatistics;
-(void)resetProcessingState;
-(id)initWithWidth:(int)arg1 height:(int)arg2 maximumSearchRange:(int)arg3 frameRingSize:(int)arg4 ;
-(int)_allocateArrays:(int)arg1 height:(int)arg2 frameRingSize:(int)arg3 ;
-(int)processPixelBuffer:(CVBufferRef)arg1 metadataDictionary:(id)arg2 ;
-(void)_freeAllocatedArrays;
-(float)stationaryThreshold;
-(int)maximumSearchRange;
@end

