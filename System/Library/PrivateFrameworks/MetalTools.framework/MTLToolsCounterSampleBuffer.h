/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:35:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLCounterSampleBuffer.h>

@class NSString;

@interface MTLToolsCounterSampleBuffer : MTLToolsObject <MTLCounterSampleBuffer>

@property (readonly) id<MTLDevice> device; 
@property (readonly) NSString * label; 
@property (readonly) unsigned long long sampleCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)label;
-(unsigned long long)sampleCount;
-(id)resolveCounterRange:(NSRange)arg1 ;
@end

