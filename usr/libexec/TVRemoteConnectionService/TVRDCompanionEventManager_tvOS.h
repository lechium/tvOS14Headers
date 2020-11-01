//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RPCompanionLinkClient;
@protocol TVRDCompanionEventManagerDelegate;

__attribute__((visibility("hidden")))
@interface TVRDCompanionEventManager_tvOS : NSObject
{
    id <TVRDCompanionEventManagerDelegate> _delegate;	// 8 = 0x8
    RPCompanionLinkClient *_companionLinkClient;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100002adc
@property(retain, nonatomic) RPCompanionLinkClient *companionLinkClient; // @synthesize companionLinkClient=_companionLinkClient;
@property(nonatomic) __weak id <TVRDCompanionEventManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_switchSystemAppearenceMode:(_Bool)arg1;	// IMP=0x0000000100002a54
- (void)_enableReduceLoudSounds:(_Bool)arg1;	// IMP=0x0000000100002a04
- (void)_switchToUserAccountWithID:(id)arg1;	// IMP=0x00000001000027b8
- (id)_fetchUserAccounts;	// IMP=0x00000001000024c8
- (id)_fetchLaunchableApplications;	// IMP=0x0000000100002270
- (void)_setupEventHandlers;	// IMP=0x0000000100001a20
- (void)broadcastEventToInterestedDevices:(id)arg1;	// IMP=0x0000000100001930
- (void)dealloc;	// IMP=0x00000001000018d4
- (id)init;	// IMP=0x000000010000178c

@end
