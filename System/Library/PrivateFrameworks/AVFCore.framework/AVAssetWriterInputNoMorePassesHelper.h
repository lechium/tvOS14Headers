/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetWriterInputHelper.h>

@class AVAssetWriterInputWritingHelper;

@interface AVAssetWriterInputNoMorePassesHelper : AVAssetWriterInputHelper {

	AVAssetWriterInputWritingHelper* _writingHelper;

}
-(void)dealloc;
-(long long)status;
-(void)markAsFinished;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_AV6)arg2 ;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(BOOL)isReadyForMoreMediaData;
-(BOOL)canPerformMultiplePasses;
-(id)currentPassDescription;
-(void)markCurrentPassAsFinished;
-(id)initWithConfigurationState:(id)arg1 ;
-(void)stopRequestingMediaData;
-(long long)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(id)initWithWritingHelper:(id)arg1 ;
@end

