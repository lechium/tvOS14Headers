/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSCNNSpatialNormalization : MPSCNNKernel {

	float _alpha;
	float _beta;
	float _delta;

}

@property (assign,nonatomic) float alpha;              //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) float beta;               //@synthesize beta=_beta - In the implementation block
@property (assign,nonatomic) float delta;              //@synthesize delta=_delta - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(float)alpha;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 ;
-(void)setAlpha:(float)arg1 ;
-(float)beta;
-(void)setBeta:(float)arg1 ;
-(float)delta;
-(void)setDelta:(float)arg1 ;
@end
