//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BackendXPC.h"

@interface RamXPC : BackendXPC
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010002485c
- (id)description;	// IMP=0x00000001000251ec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100025068
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100024e08
- (void)createRamBackend;	// IMP=0x00000001000249f0
- (id)initWithSize:(unsigned long long)arg1;	// IMP=0x0000000100024864

@end

