//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GKNetworkRequestInfo : NSObject
{
    NSMutableDictionary *_currentTasks;	// 8 = 0x8
    NSMutableDictionary *_pendingRequests;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001a13fc
@property(retain, nonatomic) NSMutableDictionary *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(retain, nonatomic) NSMutableDictionary *currentTasks; // @synthesize currentTasks=_currentTasks;
- (id)description;	// IMP=0x00000001001a1330
- (id)init;	// IMP=0x00000001001a12b4

@end

