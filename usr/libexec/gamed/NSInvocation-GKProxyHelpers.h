//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSInvocation.h>

@interface NSInvocation (GKProxyHelpers)
+ (id)_gkInvocationWithBlock:(id)arg1;	// IMP=0x0000000100110b94
- (void)_gkInvokeOnceWithTarget:(id)arg1;	// IMP=0x0000000100110aa0
- (void)_gkInvokeOnce;	// IMP=0x0000000100110a6c
- (void)_gkClearTarget;	// IMP=0x0000000100110a2c
- (void)_gkClearArgumentAtIndex:(unsigned long long)arg1;	// IMP=0x00000001001109c8
- (void)__gkPrepareForFakeCallbackWithNoData:(_Bool)arg1 orError:(id)arg2;	// IMP=0x00000001001107c8
- (void)_gkPrepareForCallWithError:(id)arg1;	// IMP=0x00000001001106e0
- (void)_gkCallbackWithError:(id)arg1 queue:(id)arg2;	// IMP=0x0000000100110628
- (id)_gkReplyHandlerInvocation;	// IMP=0x0000000100110584
- (void)_gkClearCopiedArguments;	// IMP=0x00000001001103c8
- (void)_gkCopyArguments;	// IMP=0x0000000100110150
- (void)_gkPrintBlockSignature;	// IMP=0x0000000100110058
- (_Bool)_gkHasReplyBlock;	// IMP=0x0000000100110c00
@end

