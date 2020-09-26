//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMSURLProtocolDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class ACAccount, AMSBag, AMSSyncPasswordSettingsTask, NSNumber, NSString, NSTimer, UIViewController;

@interface TVSettingsAccountsFacadePasswordSetting : NSObject <NSURLSessionDelegate, AMSURLProtocolDelegate>
{
    ACAccount *_account;	// 8 = 0x8
    NSNumber *_asnPaidSetting;	// 16 = 0x10
    unsigned long long _asnPaidSettingValue;	// 24 = 0x18
    NSNumber *_asnFreeSetting;	// 32 = 0x20
    unsigned long long _asnFreeSettingValue;	// 40 = 0x28
    AMSBag *_amsBag;	// 48 = 0x30
    UIViewController *_presentingViewController;	// 56 = 0x38
    NSTimer *_syncCoalesceTimer;	// 64 = 0x40
    AMSSyncPasswordSettingsTask *_syncTask;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010008b20c
@property(retain, nonatomic) AMSSyncPasswordSettingsTask *syncTask; // @synthesize syncTask=_syncTask;
@property(retain, nonatomic) NSTimer *syncCoalesceTimer; // @synthesize syncCoalesceTimer=_syncCoalesceTimer;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) AMSBag *amsBag; // @synthesize amsBag=_amsBag;
@property(readonly, nonatomic) unsigned long long asnFreeSettingValue; // @synthesize asnFreeSettingValue=_asnFreeSettingValue;
@property(readonly, nonatomic) NSNumber *asnFreeSetting; // @synthesize asnFreeSetting=_asnFreeSetting;
@property(readonly, nonatomic) unsigned long long asnPaidSettingValue; // @synthesize asnPaidSettingValue=_asnPaidSettingValue;
@property(readonly, nonatomic) NSNumber *asnPaidSetting; // @synthesize asnPaidSetting=_asnPaidSetting;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)_setPaidSettingValue:(unsigned long long)arg1 freeSettingValue:(unsigned long long)arg2;	// IMP=0x000000010008af50
- (void)_syncPasswordPaidSetting:(unsigned long long)arg1 freeSetting:(unsigned long long)arg2 originalPaidSetting:(unsigned long long)arg3 originalFreeSetting:(unsigned long long)arg4;	// IMP=0x000000010008ab1c
- (void)_updatePaidSetting:(unsigned long long)arg1 freeSetting:(unsigned long long)arg2;	// IMP=0x000000010008a990
- (void)_refreshAccount;	// IMP=0x000000010008a7ec
- (void)_accountStoreDidChange:(id)arg1;	// IMP=0x000000010008a668
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010008a450
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010008a1f8
- (void)setAsnFreeSetting:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x000000010008a1a0
- (void)setAsnPaidSetting:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x000000010008a148
- (void)setAsnFreeSetting:(id)arg1;	// IMP=0x000000010008a100
- (void)setAsnPaidSetting:(id)arg1;	// IMP=0x000000010008a0b8
- (void)dealloc;	// IMP=0x000000010008a030
- (id)initWithAccount:(id)arg1 amsBag:(id)arg2;	// IMP=0x0000000100089f00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

