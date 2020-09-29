/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:37 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class NSDictionary, NSMutableDictionary;


@protocol MTLCommandBufferSPI <MTLCommandBuffer>
@property (getter=getListIndex,nonatomic,readonly) unsigned long long listIndex; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (readonly) NSDictionary * profilingResults; 
@property (nonatomic,readonly) NSMutableDictionary * userDictionary; 
@property (readonly) unsigned long long globalTraceObjectID; 
@optional
-(unsigned long long)protectionOptions;
-(unsigned long long)globalTraceObjectID;
-(void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned)arg3;
-(void)setProtectionOptions:(unsigned long long)arg1;
-(void)addPurgedResource:(id)arg1;
-(void)addPurgedHeap:(id)arg1;
-(id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3;
-(unsigned long long)getListIndex;
-(void)commitAndHold;
-(BOOL)commitAndWaitUntilSubmitted;
-(void*)debugBufferContentsWithLength:(unsigned long long*)arg1;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(/*function pointer*/void**)arg1 capacity:(unsigned long long)arg2;
-(id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3;
-(id)sampledComputeCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3;
-(id)debugCommandEncoder;

@required
-(BOOL)isProfilingEnabled;
-(NSMutableDictionary *)userDictionary;
-(void)setProfilingEnabled:(BOOL)arg1;
-(NSDictionary *)profilingResults;

@end

