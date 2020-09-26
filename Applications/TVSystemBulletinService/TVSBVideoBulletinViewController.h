//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVSBBulletinViewController.h"

#import "HMCameraStreamControlDelegate-Protocol.h"

@class NSDictionary, NSString, TVCSHomeManager, TVSBVideoBulletinCameraContentView;

@interface TVSBVideoBulletinViewController : TVSBBulletinViewController <HMCameraStreamControlDelegate>
{
    _Bool _homeFetched;	// 8 = 0x8
    CDUnknownBlockType _prepareCompletion;	// 16 = 0x10
    TVCSHomeManager *_homeManager;	// 24 = 0x18
    NSDictionary *_messageDictionary;	// 32 = 0x20
    TVSBVideoBulletinCameraContentView *_contentView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000098bc
@property(nonatomic) _Bool homeFetched; // @synthesize homeFetched=_homeFetched;
@property(retain, nonatomic) TVSBVideoBulletinCameraContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSDictionary *messageDictionary; // @synthesize messageDictionary=_messageDictionary;
@property(retain, nonatomic) TVCSHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(copy, nonatomic) CDUnknownBlockType prepareCompletion; // @synthesize prepareCompletion=_prepareCompletion;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000096dc
- (id)_videoBulletinView;	// IMP=0x00000001000096d0
- (void)configureCameraViewForBulletinView:(id)arg1;	// IMP=0x0000000100008fa0
- (id)_cameraProfileWithName:(id)arg1 home:(id)arg2 room:(id)arg3;	// IMP=0x0000000100008de0
- (void)_configureVideoBulletinView:(id)arg1 forBulletin:(id)arg2;	// IMP=0x00000001000084d8
- (void)updateBulletinView:(id)arg1 forBulletin:(id)arg2;	// IMP=0x0000000100008474
- (id)bulletinViewForBulletin:(id)arg1;	// IMP=0x00000001000083c8
- (void)prepareWithBulletin:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008358
- (void)bulletinServiceEndPresentationWithReason:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000081f0
- (void)bulletinServiceToggleSize;	// IMP=0x0000000100008108
- (void)bulletinServiceEndUserInteraction;	// IMP=0x000000010000808c
- (void)bulletinServiceBeginUserInteraction;	// IMP=0x0000000100007f84
- (void)dealloc;	// IMP=0x0000000100007f18
- (id)init;	// IMP=0x0000000100007e64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
