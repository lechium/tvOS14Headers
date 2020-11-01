//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString, NSUUID, NWNetworkAgentRegistration;
@protocol NRLinkDelegate, OS_dispatch_queue;

@interface NRLink : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned char _state;	// 16 = 0x10
    unsigned char _type;	// 17 = 0x11
    unsigned long long _identifier;	// 24 = 0x18
    NSUUID *_nrUUID;	// 32 = 0x20
    id <NRLinkDelegate> _linkDelegate;	// 40 = 0x28
    struct NEVirtualInterface_s *_virtualInterface;	// 48 = 0x30
    _Bool _startRequested;	// 56 = 0x38
    _Bool _ikeClassCEstablished;	// 57 = 0x39
    _Bool _ikeClassDEstablished;	// 58 = 0x3a
    _Bool _peerAvailabilityCheckInProgress;	// 59 = 0x3b
    double _linkTotalReadyTimeInSec;	// 64 = 0x40
    _Bool _noTransport;	// 72 = 0x48
    _Bool _isPrimary;	// 73 = 0x49
    _Bool _suspendWhenReady;	// 74 = 0x4a
    unsigned short _linkMTU;	// 76 = 0x4c
    unsigned short _metric;	// 78 = 0x4e
    NWNetworkAgentRegistration *_proxyAgentRegistration;	// 80 = 0x50
    NSMutableArray *_policyIDs;	// 88 = 0x58
    NSString *_policyIdentifierString;	// 96 = 0x60
    NSData *_usedProxyNotifyPayload;	// 104 = 0x68
    unsigned long long _linkReadyStartTime;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000100097364
@property(nonatomic) unsigned long long linkReadyStartTime; // @synthesize linkReadyStartTime=_linkReadyStartTime;
@property(retain, nonatomic) NSData *usedProxyNotifyPayload; // @synthesize usedProxyNotifyPayload=_usedProxyNotifyPayload;
@property(readonly, nonatomic) __weak id <NRLinkDelegate> linkDelegate; // @synthesize linkDelegate=_linkDelegate;
@property(readonly, nonatomic) NSUUID *nrUUID; // @synthesize nrUUID=_nrUUID;
@property(nonatomic) unsigned short metric; // @synthesize metric=_metric;
@property(nonatomic) unsigned short linkMTU; // @synthesize linkMTU=_linkMTU;
@property(readonly, nonatomic) _Bool startRequested; // @synthesize startRequested=_startRequested;
@property(retain, nonatomic) NSString *policyIdentifierString; // @synthesize policyIdentifierString=_policyIdentifierString;
@property(retain, nonatomic) NSMutableArray *policyIDs; // @synthesize policyIDs=_policyIDs;
@property(readonly, nonatomic) struct NEVirtualInterface_s *virtualInterface; // @synthesize virtualInterface=_virtualInterface;
@property(retain, nonatomic) NWNetworkAgentRegistration *proxyAgentRegistration; // @synthesize proxyAgentRegistration=_proxyAgentRegistration;
@property(nonatomic) _Bool suspendWhenReady; // @synthesize suspendWhenReady=_suspendWhenReady;
@property(nonatomic) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
@property(nonatomic) _Bool noTransport; // @synthesize noTransport=_noTransport;
@property(readonly, nonatomic) _Bool peerAvailabilityCheckInProgress; // @synthesize peerAvailabilityCheckInProgress=_peerAvailabilityCheckInProgress;
@property(nonatomic) double linkTotalReadyTimeInSec; // @synthesize linkTotalReadyTimeInSec=_linkTotalReadyTimeInSec;
@property(readonly, nonatomic) _Bool ikeClassDEstablished; // @synthesize ikeClassDEstablished=_ikeClassDEstablished;
@property(readonly, nonatomic) _Bool ikeClassCEstablished; // @synthesize ikeClassCEstablished=_ikeClassCEstablished;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned char state; // @synthesize state=_state;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)removePolicies;	// IMP=0x0000000100096f04
- (void)refreshCompanionProxyAgent;	// IMP=0x0000000100096f00
- (void)checkPeerAvailabilityWithForceAggressive:(_Bool)arg1;	// IMP=0x0000000100096e84
- (_Bool)setNoACKPrioritization;	// IMP=0x0000000100096de0
- (_Bool)setInterfaceSubfamily;	// IMP=0x0000000100096d08
- (void)setInterfaceAvailabilityForcedWithInterfaceName:(id)arg1;	// IMP=0x0000000100096b2c
- (void)setInterfaceAvailabilityIfApplicable;	// IMP=0x0000000100096a1c
- (void)dealloc;	// IMP=0x00000001000969c8
- (_Bool)changeStateTo:(unsigned char)arg1;	// IMP=0x0000000100096890
- (_Bool)changeStateTo:(unsigned char)arg1 detailsFormat:(id)arg2;	// IMP=0x00000001000967f4
- (_Bool)changeStateTo:(unsigned char)arg1 details:(id)arg2;	// IMP=0x00000001000965dc
- (void)reportEvent:(int)arg1;	// IMP=0x00000001000965cc
- (void)reportEvent:(int)arg1 detailsFormat:(id)arg2;	// IMP=0x0000000100096538
- (void)reportEvent:(int)arg1 details:(id)arg2;	// IMP=0x00000001000964d0
- (_Bool)sendControlData:(id)arg1;	// IMP=0x00000001000964c8
- (_Bool)cancelWithReason:(id)arg1;	// IMP=0x00000001000964c0
- (id)copyStatusString;	// IMP=0x00000001000964a0
- (_Bool)resume;	// IMP=0x0000000100096488
- (_Bool)suspend;	// IMP=0x0000000100096480
- (_Bool)start;	// IMP=0x0000000100096478
- (id)copyShortDescription;	// IMP=0x0000000100096404
- (id)copyShortDescriptionInner;	// IMP=0x0000000100096330
- (id)description;	// IMP=0x0000000100096314
- (id)copyDescription;	// IMP=0x00000001000962a0
- (id)copyDescriptionInner;	// IMP=0x0000000100096140
- (id)initLinkWithQueue:(id)arg1 linkDelegate:(id)arg2 nrUUID:(id)arg3;	// IMP=0x0000000100095e90
- (void)checkProxyAgentWithForceUpdate:(_Bool)arg1;	// IMP=0x0000000100097838
- (void)unregisterProxyAgent;	// IMP=0x00000001000977a4
- (void)invalidateIKESessionForClass:(unsigned char)arg1;	// IMP=0x0000000100097780
- (void)invalidateIKESession:(id *)arg1;	// IMP=0x0000000100097628
- (void)invalidateLink;	// IMP=0x00000001000975f0
- (void)setState:(unsigned char)arg1;	// IMP=0x00000001000975b0

@end

