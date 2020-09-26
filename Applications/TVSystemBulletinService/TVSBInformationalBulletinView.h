//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TVSBBulletinView-Protocol.h"

@class NSString, TVSBInformationalBulletinItem, TVSUIBulletinBackgroundView;

@interface TVSBInformationalBulletinView : UIView <TVSBBulletinView>
{
    TVSBInformationalBulletinItem *_bulletinItem;	// 8 = 0x8
    TVSUIBulletinBackgroundView *_backgroundView;	// 16 = 0x10
}

+ (unsigned long long)_footerLayoutForItem:(id)arg1;	// IMP=0x000000010000a108
+ (unsigned long long)_contentLayoutForItem:(id)arg1;	// IMP=0x000000010000a100
- (void).cxx_destruct;	// IMP=0x000000010000a1c0
@property(readonly, nonatomic) TVSUIBulletinBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) TVSBInformationalBulletinItem *bulletinItem; // @synthesize bulletinItem=_bulletinItem;
@property(readonly, nonatomic) UIView *contentView;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100009924

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
