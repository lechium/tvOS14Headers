//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface CKKSListenerCollection : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSMapTable *_listeners;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000f3e08
@property(retain) NSMapTable *listeners; // @synthesize listeners=_listeners;
@property(retain) NSString *name; // @synthesize name=_name;
- (void)iterateListeners:(CDUnknownBlockType)arg1;	// IMP=0x00000001000f3bdc
- (void)registerListener:(id)arg1;	// IMP=0x00000001000f39b4
- (id)description;	// IMP=0x00000001000f3880
- (id)initWithName:(id)arg1;	// IMP=0x00000001000f37dc

@end

