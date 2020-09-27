/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSNNCropAndResizeBilinear : MPSCNNKernel {

	unsigned long long _resizeWidth;
	unsigned long long _resizeHeight;
	unsigned long long _numberOfRegions;
	MPSRegion* _regions;
	Region_paramsRef _gpuRegions;

}

@property (nonatomic,readonly) unsigned long long resizeWidth;                  //@synthesize resizeWidth=_resizeWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long resizeHeight;                 //@synthesize resizeHeight=_resizeHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfRegions;              //@synthesize numberOfRegions=_numberOfRegions - In the implementation block
@property (nonatomic,readonly) const MPSRegion* regions;                        //@synthesize regions=_regions - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(SCD_Struct_MP1*)arg4 ;
-(id)initWithDevice:(id)arg1 resizeWidth:(unsigned long long)arg2 resizeHeight:(unsigned long long)arg3 numberOfRegions:(unsigned long long)arg4 regions:(const MPSRegion*)arg5 ;
-(unsigned long long)resizeWidth;
-(unsigned long long)resizeHeight;
-(unsigned long long)numberOfRegions;
-(const MPSRegion*)regions;
@end
