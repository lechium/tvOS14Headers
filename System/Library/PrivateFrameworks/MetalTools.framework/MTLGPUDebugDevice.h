/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:35:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsDevice.h>

@protocol MTLRenderPipelineState, MTLDepthStencilState;
@class NSData, NSMutableArray;

@interface MTLGPUDebugDevice : MTLToolsDevice {

	MetalBufferHeap* bufferHeap;
	Options boundsCheckOptions;
	GPUDebugDeviceOptions deviceOptions;
	GPUDebugBufferDescriptorHeap* globalBufferHeap;
	GPUDebugConstantBufferCache* constantBufferCache;
	GlobalResidentBufferList* globalICBBufferResidentList;
	NSData* _boundsCheckOptionsData;
	NSMutableArray* _argumentDescriptors;
	once_flag _deviceInitFlag;
	once_flag _icbPipelineInit;
	id<MTLRenderPipelineState> _icbInheritVertexPipelineState;
	id<MTLRenderPipelineState> _icbInheritNoneVertexPipelineState;
	id<MTLRenderPipelineState> _icbInheritBuffersVertexPipelineState;
	id<MTLDepthStencilState> _icbDepthStencilState;

}

@property (nonatomic,readonly) id<MTLRenderPipelineState> ICB_Inherit_PSO_VertexPipelineState; 
@property (nonatomic,readonly) id<MTLRenderPipelineState> ICB_Inherit_None_VertexPipelineState; 
@property (nonatomic,readonly) id<MTLRenderPipelineState> ICB_Inherit_Buffers_VertexPipelineState; 
@property (nonatomic,readonly) id<MTLDepthStencilState> ICB_DepthStencilState; 
-(void)dealloc;
-(id)newArgumentEncoderWithLayout:(id)arg1 ;
-(id)newLibraryWithData:(id)arg1 error:(id*)arg2 ;
-(id)newBinaryArchiveWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsDynamicLibraries;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2 ;
-(id)newLibraryWithCIFilters:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT45*)arg2 error:(id*)arg3 ;
-(id)newCommandQueueWithDescriptor:(id)arg1 ;
-(id)newArgumentEncoderWithArguments:(id)arg1 structType:(id*)arg2 ;
-(BOOL)supportsArgumentBuffersTier2;
-(BOOL)supportsBinaryArchives;
-(BOOL)supportsBinaryLibraries;
-(BOOL)supportsGFXIndirectCommandBuffers;
-(BOOL)supportsCMPIndirectCommandBuffers;
-(id)newLibraryWithFile:(id)arg1 error:(id*)arg2 ;
-(id)newLibraryWithURL:(id)arg1 error:(id*)arg2 ;
-(id)newDefaultLibrary;
-(id)newDefaultLibraryWithBundle:(id)arg1 error:(id*)arg2 ;
-(id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newBinaryLibraryWithOptions:(unsigned long long)arg1 url:(id)arg2 error:(id*)arg3 ;
-(void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newLibraryWithDAG:(id)arg1 functions:(id)arg2 error:(id*)arg3 ;
-(id)newLibraryWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT45*)arg2 error:(id*)arg3 ;
-(id)newCommandQueue;
-(id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1 ;
-(id)newArgumentEncoderWithArguments:(id)arg1 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)newHeapWithDescriptor:(id)arg1 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(/*^block*/id)arg4 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id)newBufferWithIOSurface:(IOSurfaceRef)arg1 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 gpuAddress:(unsigned long long)arg3 ;
-(id)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 gpuAddress:(unsigned long long)arg4 ;
-(id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 gpuAddress:(unsigned long long)arg4 deallocator:(/*^block*/id)arg5 ;
-(id)newLibraryWithCIFiltersForComputePipeline:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT45*)arg2 error:(id*)arg3 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(id)newInternalBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)_modifyPluginData:(id)arg1 ;
-(void)_modifyCompileOptions:(unsigned long long*)arg1 ;
-(void)_modifyRenderPipelineDescriptor:(id)arg1 ;
-(void)_modifyComputePipelineDescriptor:(id)arg1 ;
-(id)unwrapAndModifyRenderPipelineDescriptor:(id)arg1 options:(unsigned long long*)arg2 ;
-(void)onRenderPipelineCreated:(id)arg1 ;
-(id)unwrapAndModifyComputePipelineDescriptor:(id)arg1 options:(unsigned long long*)arg2 ;
-(void)onComputePipelineCreated:(id)arg1 ;
-(BOOL)supportsFunctionPointers;
-(id)newStageBufferArgumentEncoder;
-(id)newStageArgumentBuffer;
-(id<MTLRenderPipelineState>)ICB_Inherit_PSO_VertexPipelineState;
-(id<MTLRenderPipelineState>)ICB_Inherit_None_VertexPipelineState;
-(id<MTLRenderPipelineState>)ICB_Inherit_Buffers_VertexPipelineState;
-(id<MTLDepthStencilState>)ICB_DepthStencilState;
-(BOOL)supportsBufferBoundsChecking;
-(BOOL)supportsRaytracing;
-(BOOL)supportsBinaryFunctionPointers;
@end
