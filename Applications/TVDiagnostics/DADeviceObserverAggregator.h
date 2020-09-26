//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DADeviceObserver-Protocol.h"
#import "DADeviceObserverEnclosureDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSOperationQueue, NSString;

@interface DADeviceObserverAggregator : NSObject <DADeviceObserverEnclosureDelegate, DADeviceObserver>
{
    NSOperationQueue *_discoveryQueue;	// 8 = 0x8
    NSArray *_observers;	// 16 = 0x10
    NSMutableDictionary *_handlers;	// 24 = 0x18
}

+ (id)defaultObserverClasses;	// IMP=0x00000001000039c8
+ (id)aggregatorWithObserverClasses:(id)arg1;	// IMP=0x0000000100003978
- (void).cxx_destruct;	// IMP=0x0000000100004910
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) NSArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSOperationQueue *discoveryQueue; // @synthesize discoveryQueue=_discoveryQueue;
- (void)_endObserving;	// IMP=0x00000001000047b8
- (void)_beginObserving;	// IMP=0x000000010000469c
- (void)observerDidChangeDevices:(id)arg1;	// IMP=0x0000000100004408
- (void)discoverAllDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004024
- (void)endDiscoveringDevicesWithIdentifier:(id)arg1;	// IMP=0x0000000100003f64
- (id)beginDiscoveringDevicesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100003e3c
- (id)allDevices;	// IMP=0x0000000100003cc0
- (id)initWithObserverClasses:(id)arg1;	// IMP=0x0000000100003a70
- (id)init;	// IMP=0x0000000100003a14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

