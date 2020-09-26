//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"

@class NSString;

@interface HBTopShelfModel : NSObject <BSDescriptionProviding>
{
    NSString *_applicationIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000a3c54
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void)_applyItemUpdates:(id)arg1;	// IMP=0x00000001000a3c3c
- (void)_removedFromController;	// IMP=0x00000001000a3c38
- (void)_addedToController;	// IMP=0x00000001000a3c34
@property(readonly, copy, nonatomic) NSString *_logSafeDescription;
- (id)_logSafeDescriptionBuilder;	// IMP=0x00000001000a3b54
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000001000a3afc
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000001000a3a70
- (id)succinctDescriptionBuilder;	// IMP=0x00000001000a3a60
- (id)succinctDescription;	// IMP=0x00000001000a3a0c
@property(readonly, copy) NSString *description;
- (id)initWithApplicationIdentifier:(id)arg1;	// IMP=0x00000001000a397c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

