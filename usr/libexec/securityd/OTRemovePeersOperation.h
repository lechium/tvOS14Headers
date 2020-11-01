//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSGroupOperation.h"

#import "OctagonStateTransitionOperationProtocol-Protocol.h"

@class NSOperation, NSSet, NSString, OTOperationDependencies;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface OTRemovePeersOperation : CKKSGroupOperation <OctagonStateTransitionOperationProtocol>
{
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    NSSet *_peerIDs;	// 32 = 0x20
    OTOperationDependencies *_deps;	// 40 = 0x28
    NSOperation *_finishedOp;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100131e7c
@property(retain) NSOperation *finishedOp; // @synthesize finishedOp=_finishedOp;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) NSSet *peerIDs; // @synthesize peerIDs=_peerIDs;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)groupStart;	// IMP=0x0000000100131b18
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 errorState:(id)arg3 peerIDs:(id)arg4;	// IMP=0x00000001001319d8

@end

