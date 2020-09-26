//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "UIApplicationDelegate-Protocol.h"

@class BKSProcessAssertion, NSString, TVAirPlayAPRKManager, TVAirPlayAirTunesReceiverDelegate, UIWindow;

@interface TVAirPlayAppDelegate : UIResponder <UIApplicationDelegate>
{
    _Bool _playbackActive;	// 8 = 0x8
    int _cloudAvailabilityNotifyToken;	// 12 = 0xc
    BKSProcessAssertion *_procAssert;	// 16 = 0x10
    NSString *_previousAudioRouteUID;	// 24 = 0x18
    TVAirPlayAirTunesReceiverDelegate *_airTunesReceiverDelegate;	// 32 = 0x20
    TVAirPlayAPRKManager *_APRKManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010001472c
@property(retain, nonatomic) TVAirPlayAPRKManager *APRKManager; // @synthesize APRKManager=_APRKManager;
@property(retain, nonatomic) TVAirPlayAirTunesReceiverDelegate *airTunesReceiverDelegate; // @synthesize airTunesReceiverDelegate=_airTunesReceiverDelegate;
@property(retain, nonatomic) NSString *previousAudioRouteUID; // @synthesize previousAudioRouteUID=_previousAudioRouteUID;
@property(nonatomic) int cloudAvailabilityNotifyToken; // @synthesize cloudAvailabilityNotifyToken=_cloudAvailabilityNotifyToken;
@property(retain, nonatomic) BKSProcessAssertion *procAssert; // @synthesize procAssert=_procAssert;
@property(nonatomic) _Bool playbackActive; // @synthesize playbackActive=_playbackActive;
- (void)_updatePlaybackActive;	// IMP=0x00000001000144dc
- (void)_updateCloudConnectivityState;	// IMP=0x000000010001433c
- (void)_reenableAirPlaySpeakerIfNecessary;	// IMP=0x0000000100013fa4
- (void)_disableAirPlaySpeakerIfNecessary;	// IMP=0x0000000100013c50
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100013b98
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x00000001000139f8
- (void)dealloc;	// IMP=0x000000010001390c
- (id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;	// IMP=0x0000000100013724
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100012d0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

