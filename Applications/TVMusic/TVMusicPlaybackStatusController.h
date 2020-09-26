//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MPRequestResponseControllerDelegate-Protocol.h"

@class MPModelGenericObject, MPRequestResponseController, NSString;

@interface TVMusicPlaybackStatusController : NSObject <MPRequestResponseControllerDelegate>
{
    _Bool _shuffled;	// 8 = 0x8
    long long _playbackState;	// 16 = 0x10
    MPModelGenericObject *_playingSection;	// 24 = 0x18
    MPModelGenericObject *_playingItem;	// 32 = 0x20
    MPRequestResponseController *_playerRequestController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010007ecb8
@property(retain, nonatomic) MPRequestResponseController *playerRequestController; // @synthesize playerRequestController=_playerRequestController;
@property(nonatomic, getter=isShuffled) _Bool shuffled; // @synthesize shuffled=_shuffled;
@property(retain, nonatomic) MPModelGenericObject *playingItem; // @synthesize playingItem=_playingItem;
@property(retain, nonatomic) MPModelGenericObject *playingSection; // @synthesize playingSection=_playingSection;
@property(nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
- (void)controller:(id)arg1 defersResponseReplacement:(CDUnknownBlockType)arg2;	// IMP=0x000000010007e764
- (void)_playerPathChanged:(id)arg1;	// IMP=0x000000010007e5dc
- (long long)playbackStateforItemWithIdentifiers:(id)arg1 inContainer:(id)arg2;	// IMP=0x000000010007e434
- (long long)playbackStateforItemWithIdentifiers:(id)arg1;	// IMP=0x000000010007e240
- (void)dealloc;	// IMP=0x000000010007e1a4
- (id)init;	// IMP=0x000000010007dc44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
