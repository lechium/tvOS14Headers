//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RSDRemoteDevice.h"

@interface RSDRemoteLoopbackDevice : RSDRemoteDevice
{
}

- (int)connectToService:(char *)arg1 withTimeout:(unsigned int)arg2;	// IMP=0x0000000100011724
- (int)listenForService:(char *)arg1 port:(char **)arg2;	// IMP=0x0000000100011524
- (void)needsConnect;	// IMP=0x0000000100011520
- (_Bool)connectable;	// IMP=0x00000001000114d8
- (unsigned int)type;	// IMP=0x00000001000114d0

@end

