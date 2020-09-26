//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class NSNumber, PBOpenApplicationRequest;

@interface PBOpenAppDialogsTransaction : BSTransaction
{
    PBOpenApplicationRequest *_request;	// 8 = 0x8
    NSNumber *_restrictionValue;	// 16 = 0x10
    NSNumber *_legacyGameValue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001c7a74
@property(readonly, nonatomic) NSNumber *legacyGameValue; // @synthesize legacyGameValue=_legacyGameValue;
@property(readonly, nonatomic) NSNumber *restrictionValue; // @synthesize restrictionValue=_restrictionValue;
@property(readonly, nonatomic) PBOpenApplicationRequest *request; // @synthesize request=_request;
- (void)_addLegacyGameDialogTransaction;	// IMP=0x00000001001c767c
- (void)_addRestrictionDialogTransaction;	// IMP=0x00000001001c72cc
@property(readonly, nonatomic) _Bool shouldContinueLaunch;
- (_Bool)_shouldFailForChildTransaction:(id)arg1;	// IMP=0x00000001001c71e0
- (void)_begin;	// IMP=0x00000001001c717c
- (id)initWithRequest:(id)arg1;	// IMP=0x00000001001c708c

@end
