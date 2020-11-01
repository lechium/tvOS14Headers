//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber;

@interface HRMakeRunnableData : NSObject
{
    NSNumber *_topBlockingThreadId;	// 8 = 0x8
    NSNumber *_topBlockingPid;	// 16 = 0x10
    NSDictionary *_blockingThreadInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000127f0
@property(retain) NSDictionary *blockingThreadInfo; // @synthesize blockingThreadInfo=_blockingThreadInfo;
@property(retain) NSNumber *topBlockingPid; // @synthesize topBlockingPid=_topBlockingPid;
@property(retain) NSNumber *topBlockingThreadId; // @synthesize topBlockingThreadId=_topBlockingThreadId;
- (long long)findBlockingThreadForTailspin:(id)arg1 sampleStore:(id)arg2 mainThread:(id)arg3 hangStartTime:(unsigned long long)arg4 hangEndTime:(unsigned long long)arg5 hangDuration:(int)arg6;	// IMP=0x00000001000110dc
- (id)init;	// IMP=0x0000000100010ffc

@end

