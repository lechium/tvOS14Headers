//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ComponentControl.h"

#import "tGraphDataSource-Protocol.h"

@interface SpeakerCC : ComponentControl <tGraphDataSource>
{
    float _targetSpeakerGain;	// 128 = 0x80
    float _currentSpeakerGain;	// 132 = 0x84
    float _speakerGainFloor;	// 136 = 0x88
}

- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x0000000100034b74
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x0000000100034ac4
- (int)numberOfFields;	// IMP=0x0000000100034a8c
- (void)refreshTGraphTelemetry;	// IMP=0x0000000100034a3c
- (void)defaultAction;	// IMP=0x00000001000348e0
- (id)initWithParams:(struct __CFDictionary *)arg1;	// IMP=0x00000001000346dc

@end
