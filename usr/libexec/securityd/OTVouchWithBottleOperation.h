//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSGroupOperation.h"

#import "OctagonStateTransitionOperationProtocol-Protocol.h"

@class NSData, NSOperation, NSString, OTCuttlefishContext, OTOperationDependencies;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface OTVouchWithBottleOperation : CKKSGroupOperation <OctagonStateTransitionOperationProtocol>
{
    _Bool _saveVoucher;	// 10 = 0xa
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    OTCuttlefishContext *_cuttlefishContext;	// 32 = 0x20
    NSString *_bottleID;	// 40 = 0x28
    NSData *_entropy;	// 48 = 0x30
    NSString *_bottleSalt;	// 56 = 0x38
    NSData *_voucher;	// 64 = 0x40
    NSData *_voucherSig;	// 72 = 0x48
    OTOperationDependencies *_deps;	// 80 = 0x50
    NSOperation *_finishedOp;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000100070e48
@property(retain) NSOperation *finishedOp; // @synthesize finishedOp=_finishedOp;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property(readonly) _Bool saveVoucher; // @synthesize saveVoucher=_saveVoucher;
@property(retain, nonatomic) NSData *voucherSig; // @synthesize voucherSig=_voucherSig;
@property(retain, nonatomic) NSData *voucher; // @synthesize voucher=_voucher;
@property(retain, nonatomic) NSString *bottleSalt; // @synthesize bottleSalt=_bottleSalt;
@property(retain, nonatomic) NSData *entropy; // @synthesize entropy=_entropy;
@property(retain, nonatomic) NSString *bottleID; // @synthesize bottleID=_bottleID;
@property __weak OTCuttlefishContext *cuttlefishContext; // @synthesize cuttlefishContext=_cuttlefishContext;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)proceedWithKeys:(id)arg1 filteredTLKShares:(id)arg2;	// IMP=0x0000000100070a70
- (void)noteMetric:(id)arg1 count:(long long)arg2;	// IMP=0x00000001000708e4
- (void)proceedWithPeerID:(id)arg1 refetchWasNeeded:(_Bool)arg2;	// IMP=0x0000000100070714
- (void)groupStart;	// IMP=0x0000000100070094
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 errorState:(id)arg3 bottleID:(id)arg4 entropy:(id)arg5 bottleSalt:(id)arg6 saveVoucher:(_Bool)arg7;	// IMP=0x000000010006ff08

@end
