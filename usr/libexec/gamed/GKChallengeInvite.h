//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class GKChallengeInternal, GKPlayerInternal, GKStoreItemInternal, NSDictionary, NSString;

@interface GKChallengeInvite : NSObject <NSSecureCoding>
{
    NSString *_challengeID;	// 8 = 0x8
    GKChallengeInternal *_challenge;	// 16 = 0x10
    GKPlayerInternal *_receivingPlayer;	// 24 = 0x18
    GKPlayerInternal *_issuingPlayer;	// 32 = 0x20
    GKStoreItemInternal *_storeItem;	// 40 = 0x28
    NSString *_goalText;	// 48 = 0x30
    NSDictionary *_pushDescriptor;	// 56 = 0x38
    NSString *_gameTitle;	// 64 = 0x40
    NSString *_resolvedBundleID;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100089f24
@property(retain, nonatomic) NSDictionary *pushDescriptor; // @synthesize pushDescriptor=_pushDescriptor;
@property(retain, nonatomic) NSString *challengeID; // @synthesize challengeID=_challengeID;
@property(retain, nonatomic) NSString *resolvedBundleID; // @synthesize resolvedBundleID=_resolvedBundleID;
@property(retain, nonatomic) NSString *gameTitle; // @synthesize gameTitle=_gameTitle;
@property(retain, nonatomic) NSString *goalText; // @synthesize goalText=_goalText;
@property(retain, nonatomic) GKStoreItemInternal *storeItem; // @synthesize storeItem=_storeItem;
@property(retain, nonatomic) GKPlayerInternal *issuingPlayer; // @synthesize issuingPlayer=_issuingPlayer;
@property(retain, nonatomic) GKPlayerInternal *receivingPlayer; // @synthesize receivingPlayer=_receivingPlayer;
@property(retain, nonatomic) GKChallengeInternal *challenge; // @synthesize challenge=_challenge;
- (void)loadGoalTextForGameDescriptor:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010008a6cc
- (void)loadDetailsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100089fdc
- (id)initWithChallenge:(id)arg1;	// IMP=0x0000000100089f84
- (id)challengeInternalObject;	// IMP=0x0000000100089f7c
- (id)description;	// IMP=0x0000000100089f2c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100089e38
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100089c8c
- (void)dealloc;	// IMP=0x0000000100089c04

@end

