//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NRDTLSStackDelegate, OS_dispatch_queue, OS_nw_connection, OS_nw_listener;

@interface NRDDTLSStack : NSObject
{
    _Bool _server;	// 8 = 0x8
    _Bool _isReadingOnUDP;	// 9 = 0x9
    _Bool _isReadingOnDTLS;	// 10 = 0xa
    _Bool _hasReceivedAnyEncryptedData;	// 11 = 0xb
    _Bool _hasRetransmittedAnyEncryptedData;	// 12 = 0xc
    unsigned short _dtlsLocalPortHBO;	// 14 = 0xe
    unsigned short _dtlsRemotePortHBO;	// 16 = 0x10
    NSObject<OS_nw_listener> *_dtlsListener;	// 24 = 0x18
    NSObject<OS_nw_connection> *_dtlsConnection;	// 32 = 0x20
    NSObject<OS_nw_connection> *_udpConnection;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    unsigned long long _identifier;	// 56 = 0x38
    id <NRDTLSStackDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000a07a4
@property(nonatomic) __weak id <NRDTLSStackDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned short dtlsRemotePortHBO; // @synthesize dtlsRemotePortHBO=_dtlsRemotePortHBO;
@property(nonatomic) unsigned short dtlsLocalPortHBO; // @synthesize dtlsLocalPortHBO=_dtlsLocalPortHBO;
@property(nonatomic) _Bool hasRetransmittedAnyEncryptedData; // @synthesize hasRetransmittedAnyEncryptedData=_hasRetransmittedAnyEncryptedData;
@property(nonatomic) _Bool hasReceivedAnyEncryptedData; // @synthesize hasReceivedAnyEncryptedData=_hasReceivedAnyEncryptedData;
@property(nonatomic) _Bool isReadingOnDTLS; // @synthesize isReadingOnDTLS=_isReadingOnDTLS;
@property(nonatomic) _Bool isReadingOnUDP; // @synthesize isReadingOnUDP=_isReadingOnUDP;
@property(nonatomic) _Bool server; // @synthesize server=_server;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_nw_connection> *udpConnection; // @synthesize udpConnection=_udpConnection;
@property(retain, nonatomic) NSObject<OS_nw_connection> *dtlsConnection; // @synthesize dtlsConnection=_dtlsConnection;
@property(retain, nonatomic) NSObject<OS_nw_listener> *dtlsListener; // @synthesize dtlsListener=_dtlsListener;
- (id)initDTLSWithQueue:(id)arg1 server:(_Bool)arg2 delegate:(id)arg3;	// IMP=0x00000001000a024c
- (void)startDTLS;	// IMP=0x000000010009fd80
- (void)handleIsReady;	// IMP=0x000000010009fcec
- (void)readOnDTLSConnection;	// IMP=0x000000010009fbe4
- (void)readOnUDPConnection;	// IMP=0x000000010009fadc
- (void)retransmitOutboundEncryptedData:(id)arg1 retransmitCount:(unsigned int)arg2;	// IMP=0x000000010009f9ec
- (void)processInboundEncryptedData:(id)arg1;	// IMP=0x000000010009f8c8
- (void)processOutboundUnencryptedData:(id)arg1;	// IMP=0x000000010009f7b8
- (id)description;	// IMP=0x000000010009f724

@end

