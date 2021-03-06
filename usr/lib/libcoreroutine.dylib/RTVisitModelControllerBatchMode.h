/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/RTVisitModelController.h>

@class RTVisitHyperParameter, RTVisitTrajectorySequenceClassifierBatchMode, NSString;

@interface RTVisitModelControllerBatchMode : NSObject <RTVisitModelController> {

	void* _espressoContext;
	void* _espressoPlan;
	SCD_Struct_RT4* _inputBuffer;
	SCD_Struct_RT4* _outputBuffer;
	RTVisitHyperParameter* _hyperParameter;
	RTVisitTrajectorySequenceClassifierBatchMode* _model;

}

@property (nonatomic,readonly) RTVisitTrajectorySequenceClassifierBatchMode * model;              //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(RTVisitTrajectorySequenceClassifierBatchMode *)model;
-(id)initWithHyperParameter:(id)arg1 ;
-(const float*)batchProcess:(const float*)arg1 featureVectorStride:(unsigned long long)arg2 firstSequenceIndex:(unsigned long long)arg3 firstSequenceLength:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 ;
-(const float*)predictFromInput:(const float*)arg1 featureVectorStride:(unsigned long long)arg2 firstSequenceIndex:(unsigned long long)arg3 firstSequenceLength:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 ;
@end

