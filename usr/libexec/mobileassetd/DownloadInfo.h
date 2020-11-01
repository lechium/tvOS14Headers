//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MADownloadOptions, NSDate, NSMutableArray, NSString, NSURL, NSURLSessionDownloadTask;
@protocol SZExtractor;

@interface DownloadInfo : NSObject
{
    _Bool _isStalled;	// 8 = 0x8
    _Bool _shouldRetry;	// 9 = 0x9
    _Bool _changingConfig;	// 10 = 0xa
    NSURLSessionDownloadTask *_task;	// 16 = 0x10
    NSString *_startingAt;	// 24 = 0x18
    NSString *_lengthOfRange;	// 32 = 0x20
    id <SZExtractor> _extractor;	// 40 = 0x28
    NSDate *_date;	// 48 = 0x30
    long long _totalBytesThisSlice;	// 56 = 0x38
    long long _previousTotalDownloaded;	// 64 = 0x40
    long long _totalExpectedBytes;	// 72 = 0x48
    long long _currentTotalWritten;	// 80 = 0x50
    NSString *_taskDescriptor;	// 88 = 0x58
    long long _downloadSize;	// 96 = 0x60
    unsigned long long _backtracks;	// 104 = 0x68
    NSMutableArray *_callbacks;	// 112 = 0x70
    NSURL *_originalUrl;	// 120 = 0x78
    NSURL *_cacheServerUrl;	// 128 = 0x80
    MADownloadOptions *_options;	// 136 = 0x88
    NSMutableArray *_rateHistory;	// 144 = 0x90
}

@property(readonly, nonatomic) NSMutableArray *rateHistory; // @synthesize rateHistory=_rateHistory;
@property(readonly, nonatomic) MADownloadOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) NSURL *cacheServerUrl; // @synthesize cacheServerUrl=_cacheServerUrl;
@property(readonly, nonatomic) NSURL *originalUrl; // @synthesize originalUrl=_originalUrl;
@property(readonly, nonatomic) NSMutableArray *callbacks; // @synthesize callbacks=_callbacks;
@property(readonly, nonatomic) unsigned long long backtracks; // @synthesize backtracks=_backtracks;
@property(readonly, nonatomic) _Bool changingConfig; // @synthesize changingConfig=_changingConfig;
@property(nonatomic) _Bool shouldRetry; // @synthesize shouldRetry=_shouldRetry;
@property long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(retain) NSString *taskDescriptor; // @synthesize taskDescriptor=_taskDescriptor;
@property long long currentTotalWritten; // @synthesize currentTotalWritten=_currentTotalWritten;
@property(readonly, nonatomic) _Bool isStalled; // @synthesize isStalled=_isStalled;
@property long long totalExpectedBytes; // @synthesize totalExpectedBytes=_totalExpectedBytes;
@property long long previousTotalDownloaded; // @synthesize previousTotalDownloaded=_previousTotalDownloaded;
@property long long totalBytesThisSlice; // @synthesize totalBytesThisSlice=_totalBytesThisSlice;
@property(retain) NSDate *date; // @synthesize date=_date;
@property(retain) id <SZExtractor> extractor; // @synthesize extractor=_extractor;
@property(retain) NSString *lengthOfRange; // @synthesize lengthOfRange=_lengthOfRange;
@property(retain) NSString *startingAt; // @synthesize startingAt=_startingAt;
@property(retain) NSURLSessionDownloadTask *task; // @synthesize task=_task;
- (id)description;	// IMP=0x0000000100011510
- (id)_taskState;	// IMP=0x0000000100011440
- (void)clearCacheServerUrl;	// IMP=0x0000000100011418
- (void)addNewDownloadInfo:(id)arg1;	// IMP=0x0000000100011400
- (double)currentEstimate;	// IMP=0x0000000100011270
- (void)updateDownloadData:(long long)arg1;	// IMP=0x00000001000111b0
- (_Bool)addNewRateDataPoint:(double)arg1;	// IMP=0x000000010001104c
- (void)dealloc;	// IMP=0x0000000100010fb4
- (void)determineDownloadUrl:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000100010dc0
- (id)initWithUrl:(id)arg1 options:(id)arg2;	// IMP=0x0000000100010d08

@end

