//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, PBRestrictionServiceRequest, TVSStateMachine;

@interface PBRestrictionServiceRequestManager : NSObject
{
    TVSStateMachine *_stateMachine;	// 8 = 0x8
    NSMutableArray *_pendingServiceRequestsQueue;	// 16 = 0x10
    NSMutableDictionary *_pendingTokenToRequestMapping;	// 24 = 0x18
    PBRestrictionServiceRequest *_currentRequest;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x0000000100193298
+ (void)initialize;	// IMP=0x0000000100193224
- (void).cxx_destruct;	// IMP=0x0000000100199390
@property(retain, nonatomic) PBRestrictionServiceRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(readonly, nonatomic) NSMutableDictionary *pendingTokenToRequestMapping; // @synthesize pendingTokenToRequestMapping=_pendingTokenToRequestMapping;
@property(readonly, nonatomic) NSMutableArray *pendingServiceRequestsQueue; // @synthesize pendingServiceRequestsQueue=_pendingServiceRequestsQueue;
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
- (_Bool)_isSettingRestrictedByProfile:(unsigned long long)arg1;	// IMP=0x00000001001991ec
- (_Bool)_isContentTypeRestrictedByProfile:(unsigned long long)arg1;	// IMP=0x0000000100198f9c
- (_Bool)_isContentType:(unsigned long long)arg1 allowedWithRating:(id)arg2;	// IMP=0x0000000100198c8c
- (_Bool)_isBooleanSettingType:(unsigned long long)arg1;	// IMP=0x0000000100198c20
- (id)_featureNameForSetting:(unsigned long long)arg1;	// IMP=0x0000000100198b80
- (id)_featureNameForContentType:(unsigned long long)arg1;	// IMP=0x0000000100198a50
- (id)_dequeueNextServiceRequest;	// IMP=0x0000000100198814
- (void)_enqueueIncomingRequest:(id)arg1;	// IMP=0x00000001001985a8
- (void)_validatePINWithRequest:(id)arg1 postCompletionEvent:(_Bool)arg2;	// IMP=0x000000010019837c
- (void)_checkRestrictionSettingWithRequest:(id)arg1;	// IMP=0x00000001001981a4
- (void)_authorizeRestrictionsWithRequest:(id)arg1;	// IMP=0x0000000100197de8
- (void)_validateRestrictionForSettingWithRequest:(id)arg1;	// IMP=0x0000000100197780
- (void)_validateRestrictionForContentTypesWithRequest:(id)arg1;	// IMP=0x0000000100197164
- (void)_initializeRestrictionServiceStateMachine;	// IMP=0x0000000100193e94
- (void)cancelRequestWithToken:(id)arg1;	// IMP=0x0000000100193d44
- (void)authorizeRestrictionsWithRequest:(id)arg1;	// IMP=0x0000000100193bf4
- (void)checkRestrictionSettingWithRequest:(id)arg1;	// IMP=0x0000000100193aa4
- (void)validateRestrictionForSettingWithRequest:(id)arg1;	// IMP=0x0000000100193954
- (_Bool)requestPassesAgeRestriction:(id)arg1;	// IMP=0x0000000100193880
- (void)validateRestrictionForContentTypesWithRequest:(id)arg1;	// IMP=0x0000000100193730
- (void)validatePINWithRequest:(id)arg1;	// IMP=0x00000001001934fc
- (id)_init;	// IMP=0x00000001001933b0
- (id)init;	// IMP=0x0000000100193378

@end

