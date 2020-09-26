//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC8Podcasts24FeedManagerConfiguration : NSObject
{
    MISSING_TYPE *timeoutIntervalForResource;	// 8 = 0x8
    MISSING_TYPE *workQueueConcurrent;	// 16 = 0x10
    MISSING_TYPE *useBackgroundFetchForFeedDownloads;	// 17 = 0x11
    MISSING_TYPE *keepsFeedFileInTempDirAfterDownload;	// 18 = 0x12
    MISSING_TYPE *supportsBatchInsertion;	// 19 = 0x13
    MISSING_TYPE *usesCleanEpisodeTitles;	// 20 = 0x14
}

+ (id)watchConfiguration;	// IMP=0x000000010018123c
+ (id)homepodConfiguration;	// IMP=0x000000010018109c
+ (id)defaultConfiguration;	// IMP=0x0000000100180f0c
- (void).cxx_destruct;	// IMP=0x0000000100181364
- (id)init;	// IMP=0x00000001001813b4
- (id)initWithTimeoutIntervalForResource:(double)arg1 workQueueConcurrent:(_Bool)arg2 useBackgroundFetchForFeedDownloads:(_Bool)arg3 keepsFeedFileInTempDirAfterDownload:(_Bool)arg4 supportsBatchInsertion:(_Bool)arg5 usesCleanEpisodeTitles:(_Bool)arg6;	// IMP=0x0000000100181294
@property(nonatomic, readonly) _Bool usesCleanEpisodeTitles; // @synthesize usesCleanEpisodeTitles;
@property(nonatomic, readonly) _Bool supportsBatchInsertion; // @synthesize supportsBatchInsertion;
@property(nonatomic, readonly) _Bool keepsFeedFileInTempDirAfterDownload; // @synthesize keepsFeedFileInTempDirAfterDownload;
@property(nonatomic, readonly) _Bool useBackgroundFetchForFeedDownloads; // @synthesize useBackgroundFetchForFeedDownloads;
@property(nonatomic, readonly) _Bool workQueueConcurrent; // @synthesize workQueueConcurrent;
@property(nonatomic, readonly) double timeoutIntervalForResource; // @synthesize timeoutIntervalForResource;

@end
