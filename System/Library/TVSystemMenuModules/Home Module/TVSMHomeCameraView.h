//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSystemMenuUI/TVSMBaseView.h>

@class HMCameraProfile, TVSMHomeCameraContentView;

@interface TVSMHomeCameraView : TVSMBaseView
{
    _Bool _centered;	// 8 = 0x8
    HMCameraProfile *_cameraProfile;	// 16 = 0x10
    TVSMHomeCameraContentView *_cameraContentView;	// 24 = 0x18
}

+ (void)_configureFloatingContentViewAppearance;	// IMP=0x0000000000011ea0
- (void).cxx_destruct;	// IMP=0x000000000001201c
@property(nonatomic, getter=isCentered) _Bool centered; // @synthesize centered=_centered;
@property(retain, nonatomic) TVSMHomeCameraContentView *cameraContentView; // @synthesize cameraContentView=_cameraContentView;
@property(retain, nonatomic) HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
- (id)initWithFrame:(struct CGRect)arg1 buttonStyle:(long long)arg2;	// IMP=0x0000000000011784

@end

