//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTSingletonHolder : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id _instance;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100148538
@property(retain, nonatomic) id instance; // @synthesize instance=_instance;

@end

