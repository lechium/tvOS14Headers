//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAPortalLayer;

@interface PBPortalView : UIView
{
    UIView *_sourceView;	// 8 = 0x8
}

+ (Class)layerClass;	// IMP=0x0000000100156f3c
- (void).cxx_destruct;	// IMP=0x0000000100156fdc
@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(readonly, nonatomic) CAPortalLayer *portalLayer; // @dynamic portalLayer;
- (id)description;	// IMP=0x0000000100156c8c
@property(nonatomic) _Bool allowsBackdropGroups; // @dynamic allowsBackdropGroups;
@property(nonatomic) _Bool matchesPosition; // @dynamic matchesPosition;
@property(nonatomic) _Bool matchesTransform; // @dynamic matchesTransform;
@property(nonatomic) _Bool matchesAlpha; // @dynamic matchesAlpha;
@property(nonatomic) _Bool hidesSourceView; // @dynamic hidesSourceView;

@end

