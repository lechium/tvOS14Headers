//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RadioCC.h"

#import "tGraphDataSource-Protocol.h"

@interface RadioTxDutyCycleCC : RadioCC <tGraphDataSource>
{
    int txDutyCycleLimit;	// 168 = 0xa8
    int minReachableTxDutyCycleLimit;	// 172 = 0xac
}

- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x000000010001644c
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x00000001000163b0
- (int)numberOfFields;	// IMP=0x0000000100016378
- (void)setAdditionalRadioMitigations;	// IMP=0x0000000100016344
- (void)calculateAdditionalRadioMitigations;	// IMP=0x00000001000162f8
- (void)addRadioMitigations;	// IMP=0x00000001000162c4
- (id)initWithRunLoopAndParams:(struct __CFRunLoop *)arg1 withParams:(struct __CFDictionary *)arg2;	// IMP=0x0000000100016214

@end

