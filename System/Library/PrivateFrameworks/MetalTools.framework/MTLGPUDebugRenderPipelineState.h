/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:28 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsRenderPipelineState.h>

@class MTLRenderPipelineDescriptor, MTLRenderPipelineReflection, MTLGPUDebugBuffer, MTLGPUDebugFunction;

@interface MTLGPUDebugRenderPipelineState : MTLToolsRenderPipelineState {

	MTLRenderPipelineDescriptor* _descriptor;
	MTLRenderPipelineReflection* _internalReflection;
	MTLRenderPipelineReflection* _userReflection;
	KeyBufferPair _globalConstants;
	unsigned long long _vertexConstantOffset;
	unsigned long long _fragmentConstantOffset;
	MTLGPUDebugBuffer* _indirectStateBuffer;
	BOOL _supportsIndirectCommandBuffers;

}

@property (nonatomic,readonly) MTLGPUDebugFunction * vertexFunction; 
@property (nonatomic,readonly) MTLGPUDebugFunction * fragmentFunction; 
@property (nonatomic,readonly) MTLRenderPipelineReflection * internalReflection; 
@property (nonatomic,readonly) MTLRenderPipelineReflection * userReflection; 
@property (nonatomic,readonly) MTLGPUDebugBuffer * globalConstantsBuffer; 
@property (nonatomic,readonly) unsigned long long vertexConstantOffset; 
@property (nonatomic,readonly) unsigned long long fragmentConstantOffset; 
@property (nonatomic,readonly) MTLGPUDebugBuffer * indirectStateBuffer; 
-(void)dealloc;
-(MTLGPUDebugFunction *)vertexFunction;
-(MTLGPUDebugFunction *)fragmentFunction;
-(MTLGPUDebugBuffer *)globalConstantsBuffer;
-(unsigned long long)vertexConstantOffset;
-(unsigned long long)fragmentConstantOffset;
-(id)initWithRenderPipelineState:(id)arg1 descriptor:(id)arg2 unwrappedDescriptor:(id)arg3 reflection:(id)arg4 device:(id)arg5 pipelineOptions:(unsigned long long)arg6 ;
-(MTLRenderPipelineReflection *)userReflection;
-(void)releaseReflection;
-(void)_initConstantsBuffer:(id)arg1 device:(id)arg2 ;
-(id)vertexLibrary;
-(id)fragmentLibrary;
-(MTLRenderPipelineReflection *)internalReflection;
-(MTLGPUDebugBuffer *)indirectStateBuffer;
@end

