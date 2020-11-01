//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;
@protocol SDNetworkEjecterDelegate;

__attribute__((visibility("hidden")))
@interface SDNetworkEjecter : NSObject
{
    struct __SFNode *_node;	// 8 = 0x8
    int _mountedCount;	// 16 = 0x10
    int _ejectedCount;	// 20 = 0x14
    NSNumber *_flags;	// 24 = 0x18
    NSString *_protocol;	// 32 = 0x20
    id <SDNetworkEjecterDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001001057bc
@property __weak id <SDNetworkEjecterDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *protocol; // @synthesize protocol=_protocol;
@property(copy) NSNumber *flags; // @synthesize flags=_flags;
- (void)stop;	// IMP=0x0000000100105728
- (int)start;	// IMP=0x0000000100105678
- (void)eject;	// IMP=0x0000000100105444
- (void)ejectMountPoints:(id)arg1 useAssistant:(_Bool)arg2;	// IMP=0x0000000100105440
- (void)notifyClientAboutEject:(int)arg1;	// IMP=0x00000001001052c0
- (void)dealloc;	// IMP=0x0000000100105278
- (id)initWithNode:(struct __SFNode *)arg1;	// IMP=0x0000000100105204

@end

