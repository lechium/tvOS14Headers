//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SOSCircleStorageTransport.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SOSKVSCircleStorageTransport : SOSCircleStorageTransport
{
    NSMutableDictionary *pending_changes;	// 16 = 0x10
    NSString *circleName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001c44bc
@property(retain, nonatomic) NSString *circleName; // @synthesize circleName;
@property(retain, nonatomic) NSMutableDictionary *pending_changes; // @synthesize pending_changes;
- (_Bool)postRetirement:(struct __CFString *)arg1 peer:(struct __OpaqueSOSPeerInfo *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001c43c0
- (_Bool)kvsSendOfficialDSID:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001c4328
- (_Bool)kvsRingFlushChanges:(struct __CFError **)arg1;	// IMP=0x00000001001c431c
- (_Bool)kvsRingPostRing:(struct __CFString *)arg1 ring:(struct __CFData *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001c42bc
- (_Bool)kvsSendAccountChangedWithDSID:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001c4224
- (_Bool)kvssendDebugInfo:(struct __CFString *)arg1 debug:(void *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001c4178
- (_Bool)kvsAppendDebugKeyInterest:(struct __CFArray *)arg1 firstUnlock:(struct __CFArray *)arg2 unlocked:(struct __CFArray *)arg3 err:(struct __CFError **)arg4;	// IMP=0x00000001001c4130
- (_Bool)kvsAppendRingKeyInterest:(struct __CFArray *)arg1 firstUnlock:(struct __CFArray *)arg2 unlocked:(struct __CFArray *)arg3 err:(struct __CFError **)arg4;	// IMP=0x00000001001c3f90
- (_Bool)kvsAppendKeyInterest:(struct __CFArray *)arg1 firstUnlock:(struct __CFArray *)arg2 unlocked:(struct __CFArray *)arg3 err:(struct __CFError **)arg4;	// IMP=0x00000001001c3e28
- (struct __CFArray *)handleCircleMessagesAndReturnHandledCopy:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001c3d90
- (struct __CFDictionary *)handleRetirementMessages:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001c3b54
- (_Bool)postCircle:(struct __CFString *)arg1 circleData:(struct __CFData *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001c3af4
- (_Bool)flushChanges:(struct __CFError **)arg1;	// IMP=0x00000001001c3ae8
- (_Bool)expireRetirementRecords:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001c3a34
- (void)kvsAddToPendingChanges:(struct __CFString *)arg1 data:(struct __CFData *)arg2;	// IMP=0x00000001001c3924
- (_Bool)kvsSendPendingChanges:(struct __CFError **)arg1;	// IMP=0x00000001001c37e4
- (long long)getTransportType;	// IMP=0x00000001001c37dc
- (id)getCircleName;	// IMP=0x00000001001c37d0
- (id)initWithAccount:(id)arg1 andCircleName:(id)arg2;	// IMP=0x00000001001c36bc
- (id)init;	// IMP=0x00000001001c3688

@end

