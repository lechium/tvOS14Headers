//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WAApple80211 : NSObject
{
    struct _Apple80211 *_apple80211Ref;	// 8 = 0x8
    NSString *_ifName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100024cb8
@property(retain, nonatomic) NSString *ifName; // @synthesize ifName=_ifName;
@property(nonatomic) struct _Apple80211 *apple80211Ref; // @synthesize apple80211Ref=_apple80211Ref;
- (id)getChipSet;	// IMP=0x0000000100024658
- (_Bool)currentChannelInfo:(struct apple80211_channel *)arg1;	// IMP=0x000000010002444c
- (_Bool)triggerDpsReset:(id)arg1;	// IMP=0x0000000100024220
- (_Bool)triggerFastDpsReset;	// IMP=0x0000000100024024
- (_Bool)grabAndSubmitFWTrapInfo;	// IMP=0x0000000100023abc
- (int)currentPHYMode;	// IMP=0x00000001000238d4
- (void)dealloc;	// IMP=0x0000000100023814
- (id)initWithInterfaceName:(id)arg1;	// IMP=0x00000001000234c0
- (id)initByFindingInterfaceName;	// IMP=0x0000000100023054
- (id)init;	// IMP=0x0000000100022fec

@end

