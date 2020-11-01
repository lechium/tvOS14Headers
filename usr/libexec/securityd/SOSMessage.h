//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SOSAccount;

__attribute__((visibility("hidden")))
@interface SOSMessage : NSObject
{
    void *engine;	// 8 = 0x8
    SOSAccount *account;	// 16 = 0x10
    NSString *circleName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001c6b18
@property(retain) NSString *circleName; // @synthesize circleName;
@property(retain) SOSAccount *account; // @synthesize account;
@property void *engine; // @synthesize engine;
- (_Bool)SOSTransportMessageSendMessageIfNeeded:(id)arg1 circleName:(struct __CFString *)arg2 pID:(struct __CFString *)arg3 err:(struct __CFError **)arg4;	// IMP=0x00000001001c6978
- (void)SOSTransportMessageUpdateLastMessageSentTimetstamp:(id)arg1 peer:(struct __OpaqueSOSPeer *)arg2;	// IMP=0x00000001001c6880
- (_Bool)SOSTransportMessageHandlePeerMessage:(id)arg1 id:(struct __CFString *)arg2 cm:(struct __CFData *)arg3 err:(struct __CFError **)arg4;	// IMP=0x00000001001c6600
- (void)SOSTransportMessageUpdateRTTs:(id)arg1;	// IMP=0x00000001001c6318
- (void)SOSTransportMessageCalculateNextTimer:(id)arg1 rtt:(int)arg2 peerid:(id)arg3;	// IMP=0x00000001001c6110
- (struct __CFDictionary *)SOSTransportMessageHandlePeerMessageReturnsHandledCopy:(id)arg1 peerMessages:(struct __CFDictionary *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001c60ec
- (_Bool)SOSTransportMessageSendMessage:(id)arg1 id:(struct __CFString *)arg2 messageToSend:(struct __CFData *)arg3 err:(struct __CFError **)arg4;	// IMP=0x00000001001c6048
- (_Bool)SOSTransportMessageCleanupAfterPeerMessages:(id)arg1 peers:(struct __CFDictionary *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001c6040
- (_Bool)SOSTransportMessageSyncWithPeers:(id)arg1 p:(struct __CFSet *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001c6038
- (_Bool)SOSTransportMessageFlushChanges:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001c6030
- (_Bool)SOSTransportMessageSendMessages:(id)arg1 pm:(struct __CFDictionary *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001c6028
- (id)SOSTransportMessageGetAccount;	// IMP=0x00000001001c6020
- (long long)SOSTransportMessageGetTransportType;	// IMP=0x00000001001c6018
- (struct __CFString *)SOSTransportMessageGetCircleName;	// IMP=0x00000001001c6010
- (void *)SOSTransportMessageGetEngine;	// IMP=0x00000001001c6008
- (id)initWithAccount:(id)arg1 andName:(id)arg2;	// IMP=0x00000001001c5f00

@end

