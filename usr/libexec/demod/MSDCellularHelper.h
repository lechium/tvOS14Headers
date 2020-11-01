//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CoreTelephonyClientRegistrationDelegate-Protocol.h"

@class CoreTelephonyClient, NSMutableDictionary, NSString;

@interface MSDCellularHelper : NSObject <CoreTelephonyClientRegistrationDelegate>
{
    _Bool _cellularConnectionAvailability;	// 8 = 0x8
    _Bool _cellularProvisioned;	// 9 = 0x9
    NSMutableDictionary *_cellularInfo;	// 16 = 0x10
    CoreTelephonyClient *_CTClient;	// 24 = 0x18
    struct __CTServerConnection *_CTServerConnection;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00000001000226c4
- (void).cxx_destruct;	// IMP=0x0000000100025184
@property _Bool cellularProvisioned; // @synthesize cellularProvisioned=_cellularProvisioned;
@property struct __CTServerConnection *CTServerConnection; // @synthesize CTServerConnection=_CTServerConnection;
@property(retain, nonatomic) CoreTelephonyClient *CTClient; // @synthesize CTClient=_CTClient;
@property(retain, nonatomic) NSMutableDictionary *cellularInfo; // @synthesize cellularInfo=_cellularInfo;
- (_Bool)isPlanSimActive:(int)arg1;	// IMP=0x0000000100025128
- (_Bool)isPlanProfileActive:(id)arg1;	// IMP=0x00000001000250c0
- (_Bool)activatePlanProfileForCsn:(id)arg1 withIccid:(id)arg2;	// IMP=0x0000000100024e10
- (_Bool)getPlanSimSubscriptionStatus:(int *)arg1;	// IMP=0x0000000100024b24
- (_Bool)downloadPlanProfileFromServerWithUrl:(id)arg1 forCsn:(id)arg2;	// IMP=0x00000001000248a4
- (id)fetchProvisioningServerUrlWithBundleParts:(id)arg1;	// IMP=0x0000000100024764
- (_Bool)extractCsnAndPlanProfileFromVinlyInfo:(id)arg1 outputCsn:(id *)arg2 outputPlanProfile:(id *)arg3;	// IMP=0x00000001000243b8
- (id)fetchCachedVinylInfoFromCTServer;	// IMP=0x0000000100024158
- (_Bool)provisionCellularWithBundleParts:(id)arg1 runStatusCheckOnly:(_Bool)arg2;	// IMP=0x0000000100023c60
- (_Bool)getCellularProvisionStatus;	// IMP=0x0000000100023c58
- (void)signalStrengthChanged:(id)arg1 info:(id)arg2;	// IMP=0x0000000100023984
- (void)operatorNameChanged:(id)arg1 name:(id)arg2;	// IMP=0x00000001000236d4
- (void)enableTelephonyIfNeeded;	// IMP=0x00000001000236d0
- (_Bool)startCellularProvisioningWithBundleParts:(id)arg1;	// IMP=0x000000010002349c
- (_Bool)shouldStartCellularProvisioning;	// IMP=0x0000000100023494
- (void)queryCellularInfo;	// IMP=0x0000000100022770
@property(nonatomic) _Bool cellularConnectionAvailability; // @synthesize cellularConnectionAvailability=_cellularConnectionAvailability;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

