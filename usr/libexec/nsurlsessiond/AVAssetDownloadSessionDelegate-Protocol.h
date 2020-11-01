//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AVAssetDownloadSession, AVMediaSelection, NSArray, NSError;

@protocol AVAssetDownloadSessionDelegate

@optional
- (void)assetDownloadSession:(AVAssetDownloadSession *)arg1 didLoadTimeRange:(CDStruct_3c1748cc)arg2 totalTimeRangesLoaded:(NSArray *)arg3 timeRangeExpectedToLoad:(CDStruct_3c1748cc)arg4 forMediaSelection:(AVMediaSelection *)arg5;
- (void)assetDownloadSession:(AVAssetDownloadSession *)arg1 didResolveMediaSelection:(AVMediaSelection *)arg2;
- (void)assetDownloadSession:(AVAssetDownloadSession *)arg1 didFinishDownloadForMediaSelection:(AVMediaSelection *)arg2;
- (void)assetDownloadSession:(AVAssetDownloadSession *)arg1 didFailWithError:(NSError *)arg2;
- (void)assetDownloadSessionDidFinishDownload:(AVAssetDownloadSession *)arg1;
@end

