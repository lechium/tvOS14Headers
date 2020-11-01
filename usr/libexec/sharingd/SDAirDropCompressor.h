//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SDAirDropCompressor : NSObject
{
    _Bool _compressible;	// 8 = 0x8
    unsigned int _totalBytesSent;	// 12 = 0xc
    double _totalNetworkDelay;	// 16 = 0x10
    _Bool _keepingUpWithNetwork;	// 24 = 0x18
    long long _numBlocksProcessed;	// 32 = 0x20
    unsigned int _totalBytesProcessed;	// 40 = 0x28
    long long _numBlocksCompressed;	// 48 = 0x30
    double _lastCompressionRatio;	// 56 = 0x38
    double _totalCompressionTime;	// 64 = 0x40
    unsigned int _totalCompressedOutput;	// 72 = 0x48
    struct __CFReadStream *_readStream;	// 80 = 0x50
    struct __CFWriteStream *_writeStream;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_adjustmentQueue;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000001000de3b4
- (void)executeWriteWithAdaptiveCompression;	// IMP=0x00000001000ddf00
- (void)executeReadWithAdaptiveCompression;	// IMP=0x00000001000dde20
- (void)fileComplete;	// IMP=0x00000001000ddd8c
- (void)processCompressibilityStatistics;	// IMP=0x00000001000ddd00
- (void)processNetworkStatistics:(double)arg1;	// IMP=0x00000001000ddb38
- (void)openStreams;	// IMP=0x00000001000dda68
- (void)sendOutgoingChunk:(char *)arg1 length:(long long)arg2 compressed:(_Bool)arg3;	// IMP=0x00000001000dd9ec
- (_Bool)readIncomingChunk;	// IMP=0x00000001000dd8d0
- (_Bool)readData:(char *)arg1 length:(long long)arg2 fromStream:(struct __CFReadStream *)arg3;	// IMP=0x00000001000dd810
- (_Bool)writeData:(char *)arg1 length:(long long)arg2 toStream:(struct __CFWriteStream *)arg3;	// IMP=0x00000001000dd760
- (struct __CFReadStream *)copyReadStream;	// IMP=0x00000001000dd750
- (void)dealloc;	// IMP=0x00000001000dd6f8
- (id)initWithReadStream:(struct __CFReadStream *)arg1 writeStream:(struct __CFWriteStream *)arg2;	// IMP=0x00000001000dd640

@end

