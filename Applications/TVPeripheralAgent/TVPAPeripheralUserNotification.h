//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVPAPeripheralUserNotification : NSObject
{
    long long _type;	// 8 = 0x8
    NSString *_bulletinImageType;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_subtitle;	// 32 = 0x20
    long long _timeout;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000037a0
@property(nonatomic) long long timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *bulletinImageType; // @synthesize bulletinImageType=_bulletinImageType;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)_updateHUD;	// IMP=0x00000001000028e8
- (id)initWithHUDType:(long long)arg1;	// IMP=0x00000001000028a0

@end

