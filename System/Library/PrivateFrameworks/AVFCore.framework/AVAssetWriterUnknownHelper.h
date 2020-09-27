/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetWriterHelper.h>

@interface AVAssetWriterUnknownHelper : AVAssetWriterHelper {

	short _alternateGroupID;

}
-(void)setDelegate:(id)arg1 ;
-(long long)status;
-(void)setMetadata:(id)arg1 ;
-(void)cancelWriting;
-(void)startWriting;
-(void)addInput:(id)arg1 ;
-(BOOL)canAddInput:(id)arg1 ;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setOverallDurationHint:(SCD_Struct_AV6)arg1 ;
-(void)setDirectoryForTemporaryFiles:(id)arg1 ;
-(void)setShouldOptimizeForNetworkUse:(BOOL)arg1 ;
-(void)setPreferredRate:(float)arg1 ;
-(void)setMovieFragmentInterval:(SCD_Struct_AV6)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(void)setMovieTimeScale:(int)arg1 ;
-(void)setSinglePassFileSize:(long long)arg1 ;
-(void)setSinglePassMediaDataSize:(long long)arg1 ;
-(void)setPreferredOutputSegmentInterval:(SCD_Struct_AV6)arg1 ;
-(void)setInitialSegmentStartTime:(SCD_Struct_AV6)arg1 ;
-(void)setOutputFileTypeProfile:(id)arg1 ;
-(void)setInitialMovieFragmentSequenceNumber:(long long)arg1 ;
-(void)setProducesCombinableFragments:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 fileType:(id)arg2 ;
-(BOOL)canAddInputGroup:(id)arg1 ;
-(void)addInputGroup:(id)arg1 ;
-(id)initWithConfigurationState:(id)arg1 ;
-(void)setDefaultPropertyValuesToConfigurationState:(id)arg1 outputURL:(id)arg2 fileType:(id)arg3 ;
-(BOOL)_canAddInput:(id)arg1 exceptionReason:(id*)arg2 ;
-(BOOL)_canAddInputGroup:(id)arg1 exceptionReason:(id*)arg2 ;
@end
