//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCMXPCMessageWithContainerBase.h"

@interface MCMXPCMessageSetDataProtection : MCMXPCMessageWithContainerBase
{
    _Bool _thirdParty;	// 8 = 0x8
    _Bool _retryIfLocked;	// 9 = 0x9
    int _dataProtectionClass;	// 12 = 0xc
}

@property(readonly, nonatomic) _Bool retryIfLocked; // @synthesize retryIfLocked=_retryIfLocked;
@property(readonly, nonatomic) int dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
@property(readonly, nonatomic, getter=isThirdParty) _Bool thirdParty; // @synthesize thirdParty=_thirdParty;
- (id)initWithXPCObject:(id)arg1 clientConnection:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000010000f8ec

@end

