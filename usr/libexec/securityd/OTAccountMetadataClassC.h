//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface OTAccountMetadataClassC : PBCodable <NSCopying>
{
    long long _epoch;	// 8 = 0x8
    unsigned long long _lastHealthCheckup;	// 16 = 0x10
    NSString *_altDSID;	// 24 = 0x18
    int _attemptedJoin;	// 32 = 0x20
    int _cdpState;	// 36 = 0x24
    int _icloudAccountState;	// 40 = 0x28
    NSString *_peerID;	// 48 = 0x30
    NSData *_syncingPolicy;	// 56 = 0x38
    int _trustState;	// 64 = 0x40
    NSData *_voucher;	// 72 = 0x48
    NSData *_voucherSignature;	// 80 = 0x50
    struct {
        unsigned int epoch:1;
        unsigned int lastHealthCheckup:1;
        unsigned int attemptedJoin:1;
        unsigned int cdpState:1;
        unsigned int icloudAccountState:1;
        unsigned int trustState:1;
    } _has;	// 88 = 0x58
}

+ (id)loadFromKeychainForContainer:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x000000010008b908
+ (_Bool)deleteFromKeychainForContainer:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x000000010008b618
- (void).cxx_destruct;	// IMP=0x000000010002b7dc
@property(retain, nonatomic) NSData *voucherSignature; // @synthesize voucherSignature=_voucherSignature;
@property(retain, nonatomic) NSData *voucher; // @synthesize voucher=_voucher;
@property(retain, nonatomic) NSData *syncingPolicy; // @synthesize syncingPolicy=_syncingPolicy;
@property(nonatomic) unsigned long long lastHealthCheckup; // @synthesize lastHealthCheckup=_lastHealthCheckup;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(nonatomic) long long epoch; // @synthesize epoch=_epoch;
@property(retain, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010002b544
- (unsigned long long)hash;	// IMP=0x000000010002b3c4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010002b154
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002af3c
- (void)copyTo:(id)arg1;	// IMP=0x000000010002ad78
- (void)writeTo:(id)arg1;	// IMP=0x000000010002abe0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010002a5b8
- (id)dictionaryRepresentation;	// IMP=0x000000010002a178
- (id)description;	// IMP=0x000000010002a0c4
@property(readonly, nonatomic) _Bool hasVoucherSignature;
@property(readonly, nonatomic) _Bool hasVoucher;
@property(readonly, nonatomic) _Bool hasSyncingPolicy;
- (int)StringAsCdpState:(id)arg1;	// IMP=0x0000000100029fdc
- (id)cdpStateAsString:(int)arg1;	// IMP=0x0000000100029f64
@property(nonatomic) _Bool hasCdpState;
@property(nonatomic) int cdpState; // @synthesize cdpState=_cdpState;
- (int)StringAsAttemptedJoin:(id)arg1;	// IMP=0x0000000100029e3c
- (id)attemptedJoinAsString:(int)arg1;	// IMP=0x0000000100029dc4
@property(nonatomic) _Bool hasAttemptedJoin;
@property(nonatomic) int attemptedJoin; // @synthesize attemptedJoin=_attemptedJoin;
@property(nonatomic) _Bool hasLastHealthCheckup;
- (int)StringAsTrustState:(id)arg1;	// IMP=0x0000000100029c3c
- (id)trustStateAsString:(int)arg1;	// IMP=0x0000000100029bc4
@property(nonatomic) _Bool hasTrustState;
@property(nonatomic) int trustState; // @synthesize trustState=_trustState;
@property(readonly, nonatomic) _Bool hasAltDSID;
@property(nonatomic) _Bool hasEpoch;
- (int)StringAsIcloudAccountState:(id)arg1;	// IMP=0x0000000100029a10
- (id)icloudAccountStateAsString:(int)arg1;	// IMP=0x0000000100029980
@property(nonatomic) _Bool hasIcloudAccountState;
@property(nonatomic) int icloudAccountState; // @synthesize icloudAccountState=_icloudAccountState;
@property(readonly, nonatomic) _Bool hasPeerID;
- (id)getTPSyncingPolicy;	// IMP=0x000000010008b570
- (void)setTPSyncingPolicy:(id)arg1;	// IMP=0x000000010008b4ac
- (_Bool)saveToKeychainForContainer:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x000000010008ae28

@end

