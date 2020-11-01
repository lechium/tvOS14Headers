//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDActivityRequestRecord.h"

@class NSUUID, RPCompanionLinkClient;

__attribute__((visibility("hidden")))
@interface SDActivityEncryptionKeyRequestRecord : SDActivityRequestRecord
{
    NSUUID *_previousKeyIdentifier;	// 64 = 0x40
    RPCompanionLinkClient *_linkClient;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000395b0
@property(retain, nonatomic) RPCompanionLinkClient *linkClient; // @synthesize linkClient=_linkClient;
@property(retain, nonatomic) NSUUID *previousKeyIdentifier; // @synthesize previousKeyIdentifier=_previousKeyIdentifier;
- (id)description;	// IMP=0x0000000100039440
- (void)dealloc;	// IMP=0x00000001000393e8

@end

