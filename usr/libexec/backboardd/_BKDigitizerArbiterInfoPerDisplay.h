//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKDigitizerTouchStreamAggregate, BKTouchDeliveryStatisticsLoggingObserver, NSMapTable;

@interface _BKDigitizerArbiterInfoPerDisplay : NSObject
{
    NSMapTable *_digitizerServiceToInfoMapping;	// 8 = 0x8
    BKDigitizerTouchStreamAggregate *_touchStreams;	// 16 = 0x10
    BKTouchDeliveryStatisticsLoggingObserver *_touchStatisticsLoggingObserver;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010005db64
- (void)dealloc;	// IMP=0x000000010005db14

@end

