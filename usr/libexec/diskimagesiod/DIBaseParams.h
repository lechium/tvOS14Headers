//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class DiskImageParamsXPC, NSURL;

@interface DIBaseParams : NSObject <NSSecureCoding, NSCoding>
{
    _Bool _allowStoringInKeychain;	// 8 = 0x8
    long long _debugLevel;	// 16 = 0x10
    long long _logsForwarding;	// 24 = 0x18
    unsigned long long _readPassphraseFlags;	// 32 = 0x20
    DiskImageParamsXPC *_diskImageParamsXPC;	// 40 = 0x28
    NSURL *_inputURL;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100021e1c
- (void).cxx_destruct;	// IMP=0x0000000100022fd8
@property(nonatomic) _Bool allowStoringInKeychain; // @synthesize allowStoringInKeychain=_allowStoringInKeychain;
@property(readonly, nonatomic) NSURL *inputURL; // @synthesize inputURL=_inputURL;
@property(retain, nonatomic) DiskImageParamsXPC *diskImageParamsXPC; // @synthesize diskImageParamsXPC=_diskImageParamsXPC;
@property(nonatomic) unsigned long long readPassphraseFlags; // @synthesize readPassphraseFlags=_readPassphraseFlags;
@property(nonatomic) long long logsForwarding; // @synthesize logsForwarding=_logsForwarding;
@property(nonatomic) long long debugLevel; // @synthesize debugLevel=_debugLevel;
@property(nonatomic) unsigned long long rawBlockSize;
- (id)copyInstanceID;	// IMP=0x0000000100022e24
- (void)invalidate;	// IMP=0x0000000100022e14
- (_Bool)hasCryptoBackend;	// IMP=0x0000000100022d6c
- (_Bool)getPassphraseFromUserWithXpcHandler:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100022c70
- (_Bool)getPassphraseFromConsoleWithUseStdin:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000010002293c
- (id)description;	// IMP=0x0000000100022874
- (id)copyEncryptionUUID;	// IMP=0x0000000100022800
- (_Bool)setPassphrase:(const char *)arg1 error:(id *)arg2;	// IMP=0x00000001000223d8
- (id)initWithURL:(id)arg1 fileOpenMode:(unsigned short)arg2 error:(id *)arg3;	// IMP=0x00000001000221f0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100022064
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100021eac
@property(readonly, nonatomic) _Bool RAMdisk;
@property(readonly, nonatomic) unique_ptr_e7519619 *cryptoHeader;
@property(nonatomic) shared_ptr_90e31b53 backend;

@end

