/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:26 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Memories/PHAssetWriter.h>

@class AVAssetExportSession;

@interface PHVideoAssetWriter : PHAssetWriter {

	AVAssetExportSession* _exportSession;

}

@property (nonatomic,retain) AVAssetExportSession * exportSession;              //@synthesize exportSession=_exportSession - In the implementation block
-(id)request;
-(unsigned long long)estimatedOutputSizeWithError:(id*)arg1 ;
-(id)transfer;
-(AVAssetExportSession *)exportSession;
-(unsigned long long)_estimatedOutputSizeWithError:(id*)arg1 ;
-(id)requestWithNetworkAccess:(BOOL)arg1 ;
-(void)setExportSession:(AVAssetExportSession *)arg1 ;
@end

