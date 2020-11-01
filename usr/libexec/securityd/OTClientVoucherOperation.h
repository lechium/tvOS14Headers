//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSGroupOperation.h"

#import "OctagonStateTransitionOperationProtocol-Protocol.h"

@class NSData, NSOperation, NSString, OTCuttlefishContext, OTDeviceInformation, OTOperationDependencies;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface OTClientVoucherOperation : CKKSGroupOperation <OctagonStateTransitionOperationProtocol>
{
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    OTCuttlefishContext *_cuttlefishContext;	// 32 = 0x20
    NSString *_peerID;	// 40 = 0x28
    NSData *_permanentInfo;	// 48 = 0x30
    NSData *_permanentInfoSig;	// 56 = 0x38
    NSData *_stableInfo;	// 64 = 0x40
    NSData *_stableInfoSig;	// 72 = 0x48
    OTDeviceInformation *_deviceInfo;	// 80 = 0x50
    NSData *_voucher;	// 88 = 0x58
    NSData *_voucherSig;	// 96 = 0x60
    OTOperationDependencies *_operationDependencies;	// 104 = 0x68
    NSOperation *_finishedOp;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000010012d73c
@property(retain) NSOperation *finishedOp; // @synthesize finishedOp=_finishedOp;
@property(retain) OTOperationDependencies *operationDependencies; // @synthesize operationDependencies=_operationDependencies;
@property(retain, nonatomic) NSData *voucherSig; // @synthesize voucherSig=_voucherSig;
@property(retain, nonatomic) NSData *voucher; // @synthesize voucher=_voucher;
@property(retain) OTDeviceInformation *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) NSData *stableInfoSig; // @synthesize stableInfoSig=_stableInfoSig;
@property(retain, nonatomic) NSData *stableInfo; // @synthesize stableInfo=_stableInfo;
@property(retain, nonatomic) NSData *permanentInfoSig; // @synthesize permanentInfoSig=_permanentInfoSig;
@property(retain, nonatomic) NSData *permanentInfo; // @synthesize permanentInfo=_permanentInfo;
@property(retain, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
@property __weak OTCuttlefishContext *cuttlefishContext; // @synthesize cuttlefishContext=_cuttlefishContext;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)proceedWithKeys:(id)arg1;	// IMP=0x000000010012d250
- (void)groupStart;	// IMP=0x000000010012cff8
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 errorState:(id)arg3 deviceInfo:(id)arg4 peerID:(id)arg5 permanentInfo:(id)arg6 permanentInfoSig:(id)arg7 stableInfo:(id)arg8 stableInfoSig:(id)arg9;	// IMP=0x000000010012ce04

@end

