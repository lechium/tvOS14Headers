/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@class MPSNNReduceFeatureChannelsAndWeightsSum;

@interface MPSCNNSoftMaxGradient : MPSCNNGradientKernel {

	MPSNNReduceFeatureChannelsAndWeightsSum* _reductionKernel;

}
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(unsigned long long)maxBatchSize;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
@end
