//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASSignalReader-Protocol.h"

@class NSString;
@protocol _CDContext;

@interface _DASChargeRateReader : NSObject <_DASSignalReader>
{
    id <_CDContext> _context;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000101fc
@property(retain, nonatomic) id <_CDContext> context; // @synthesize context=_context;
- (id)lastModifiedDate;	// IMP=0x00000001000101e0
- (id)currentValue;	// IMP=0x0000000100010178
- (id)init;	// IMP=0x0000000100010104

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

