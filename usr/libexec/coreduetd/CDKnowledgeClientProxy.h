//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSCountedSet, NSObject, NSString, NSXPCConnection;
@protocol _DKDaemonInterface;

@interface CDKnowledgeClientProxy : NSProxy
{
    int _notifyToken;	// 8 = 0x8
    NSObject<_DKDaemonInterface> *_daemon;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    NSString *_procName;	// 32 = 0x20
    NSCountedSet *_selectorInvocations;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000239b0
@property(readonly, nonatomic) NSCountedSet *selectorInvocations; // @synthesize selectorInvocations=_selectorInvocations;
@property(readonly, nonatomic) NSString *procName; // @synthesize procName=_procName;
@property(readonly, nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) __weak NSObject<_DKDaemonInterface> *daemon; // @synthesize daemon=_daemon;
- (id)description;	// IMP=0x00000001000238fc
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000001000238a0
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000100023854
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000010002372c
- (void)_logInvocationForSelector:(id)arg1;	// IMP=0x0000000100023714
- (void)dealloc;	// IMP=0x0000000100023638
- (id)initWithDaemon:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000233b4

@end

