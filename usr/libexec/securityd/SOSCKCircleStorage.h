//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SOSCircleStorageTransport.h"

__attribute__((visibility("hidden")))
@interface SOSCKCircleStorage : SOSCircleStorageTransport
{
}

- (struct __CFArray *)handleCircleMessagesAndReturnHandledCopy:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001b0410
- (struct __CFDictionary *)handleRetirementMessages:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001b0408
- (_Bool)postRetirement:(struct __CFString *)arg1 peer:(struct __OpaqueSOSPeerInfo *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001b0400
- (_Bool)postCircle:(struct __CFString *)arg1 circleData:(struct __CFData *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001b03f8
- (_Bool)flushChanges:(struct __CFError **)arg1;	// IMP=0x00000001001b03f0
- (_Bool)expireRetirementRecords:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001b03e8
- (id)getAccount;	// IMP=0x00000001001b03dc
- (long long)getTransportType;	// IMP=0x00000001001b03d4
- (id)initWithAccount:(id)arg1;	// IMP=0x00000001001b0360
- (id)init;	// IMP=0x00000001001b0310

@end
