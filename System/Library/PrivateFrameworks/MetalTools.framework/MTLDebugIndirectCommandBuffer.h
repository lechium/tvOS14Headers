/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:29 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsIndirectCommandBuffer.h>
#import <libobjc.A.dylib/MTLDebugResourcePurgeable.h>

@protocol MTLIndirectCommandBuffer;
@class NSMutableArray, MTLIndirectCommandBufferDescriptor;

@interface MTLDebugIndirectCommandBuffer : MTLToolsIndirectCommandBuffer <MTLDebugResourcePurgeable> {

	NSMutableArray* _optimizedRangeList;
	MTLIndirectCommandBufferDescriptor* _desc;
	unsigned long long _maxCommandCount;
	id<MTLIndirectCommandBuffer> _iCB;
	BOOL _isRender;
	atomic<int> _purgeableStateToken;
	BOOL _purgeableStateHasBeenSet;

}

@property (readonly) NSMutableArray * optimizedRangeList; 
@property (readonly) MTLIndirectCommandBufferDescriptor * descriptor; 
-(void)dealloc;
-(MTLIndirectCommandBufferDescriptor *)descriptor;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(id)indirectRenderCommandAtIndex:(unsigned long long)arg1 ;
-(id)indirectComputeCommandAtIndex:(unsigned long long)arg1 ;
-(void)resetWithRange:(NSRange)arg1 ;
-(NSMutableArray *)optimizedRangeList;
-(void)lockPurgeableState;
-(void)unlockPurgeableState;
-(BOOL)purgeableStateValidForRendering;
-(id)initWithIndirectCommandBuffer:(id)arg1 device:(id)arg2 descriptor:(id)arg3 maxCommandCount:(unsigned long long)arg4 options:(unsigned long long)arg5 ;
@end
