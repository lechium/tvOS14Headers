//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTPlaybackContext, MTPlayerManifest;

@interface MTSetPlaybackQueueRequest : NSObject
{
    _Bool _finished;	// 8 = 0x8
    _Bool _dryRun;	// 9 = 0x9
    _Bool _startPlayback;	// 10 = 0xa
    _Bool _suppressMetrics;	// 11 = 0xb
    MTPlayerManifest *_manifest;	// 16 = 0x10
    unsigned long long _playbackDestination;	// 24 = 0x18
    MTPlaybackContext *_context;	// 32 = 0x20
    CDUnknownBlockType _completion;	// 40 = 0x28
}

+ (id)requestWithContext:(id)arg1;	// IMP=0x0000000100144fd0
- (void).cxx_destruct;	// IMP=0x0000000100145248
@property(nonatomic) _Bool suppressMetrics; // @synthesize suppressMetrics=_suppressMetrics;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) MTPlaybackContext *context; // @synthesize context=_context;
@property(nonatomic) unsigned long long playbackDestination; // @synthesize playbackDestination=_playbackDestination;
@property(nonatomic) _Bool startPlayback; // @synthesize startPlayback=_startPlayback;
@property(nonatomic) _Bool dryRun; // @synthesize dryRun=_dryRun;
@property(retain, nonatomic) MTPlayerManifest *manifest; // @synthesize manifest=_manifest;
- (void)finishWithStatus:(long long)arg1;	// IMP=0x0000000100145138
- (_Bool)validate;	// IMP=0x0000000100145048

@end

