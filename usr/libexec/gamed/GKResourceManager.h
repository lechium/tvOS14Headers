//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GKResourceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_syncQueue;	// 8 = 0x8
    NSMutableDictionary *_groupForResources;	// 16 = 0x10
}

- (id)_remainingResourceAfterJoiningResources:(id)arg1 group:(id)arg2 queue:(id)arg3;	// IMP=0x00000001000796bc
- (void)_deregisterForResources:(id)arg1 group:(id)arg2;	// IMP=0x0000000100079580
- (void)_registerForResources:(id)arg1 group:(id)arg2;	// IMP=0x0000000100079300
- (void)dealloc;	// IMP=0x00000001000792b0
- (id)init;	// IMP=0x0000000100079244

@end

