//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface OctagonStateTransitionPathStep : NSObject
{
    _Bool _successState;	// 8 = 0x8
    NSDictionary *_followStates;	// 16 = 0x10
}

+ (id)pathFromDictionary:(id)arg1;	// IMP=0x00000001000ad3f4
+ (id)success;	// IMP=0x00000001000ad3cc
- (void).cxx_destruct;	// IMP=0x00000001000ad3c0
@property(readonly) NSDictionary *followStates; // @synthesize followStates=_followStates;
@property _Bool successState; // @synthesize successState=_successState;
- (id)description;	// IMP=0x00000001000ad304
- (id)nextStep:(id)arg1;	// IMP=0x00000001000ad284
- (id)initWithPath:(id)arg1;	// IMP=0x00000001000ad208
- (id)initAsSuccess;	// IMP=0x00000001000ad1a4

@end

