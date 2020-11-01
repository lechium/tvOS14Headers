//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _SFECKeyPair;

__attribute__((visibility("hidden")))
@interface CKKSManifestInjectionPointHelper : NSObject
{
    NSString *_peerID;	// 8 = 0x8
    _SFECKeyPair *_keyPair;	// 16 = 0x10
}

+ (void)setIgnoreChanges:(_Bool)arg1;	// IMP=0x00000001000ffa18
+ (_Bool)ignoreChanges;	// IMP=0x00000001000ffa0c
+ (void)registerEgoPeerID:(id)arg1 keyPair:(id)arg2;	// IMP=0x00000001000ff98c
+ (void)registerHelper:(id)arg1 forPeer:(id)arg2;	// IMP=0x00000001000ff904
- (void).cxx_destruct;	// IMP=0x00000001000ff6e8
- (id)peerID;	// IMP=0x00000001000ff6e0
- (id)keyPair;	// IMP=0x00000001000ff6d8
- (void)performWithPeerVerifyingKeys:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ff3d0
- (void)performWithEgoPeerID:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ff2ac
- (void)performWithSigningKey:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ff118
- (id)description;	// IMP=0x00000001000ff084
- (id)initWithPeerID:(id)arg1 keyPair:(id)arg2 isEgoPeer:(_Bool)arg3;	// IMP=0x00000001000fefa8

@end

