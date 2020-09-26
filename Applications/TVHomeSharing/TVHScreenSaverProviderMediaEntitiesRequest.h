//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TVHKAsynchronousWorkToken, TVHKMediaEntityIdentifier, TVHKMediaLibrary, TVHKStateMachine;

@interface TVHScreenSaverProviderMediaEntitiesRequest : NSObject
{
    TVHKMediaLibrary *_mediaLibrary;	// 8 = 0x8
    unsigned long long _mediaCategoryType;	// 16 = 0x10
    TVHKMediaEntityIdentifier *_mediaEntityCollectionIdentifier;	// 24 = 0x18
    TVHKStateMachine *_stateMachine;	// 32 = 0x20
    TVHKAsynchronousWorkToken *_fetchWorkToken;	// 40 = 0x28
    CDUnknownBlockType _completionBlock;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000254ac
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) TVHKAsynchronousWorkToken *fetchWorkToken; // @synthesize fetchWorkToken=_fetchWorkToken;
@property(retain, nonatomic) TVHKStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(readonly, nonatomic) TVHKMediaEntityIdentifier *mediaEntityCollectionIdentifier; // @synthesize mediaEntityCollectionIdentifier=_mediaEntityCollectionIdentifier;
@property(readonly, nonatomic) unsigned long long mediaCategoryType; // @synthesize mediaCategoryType=_mediaCategoryType;
@property(readonly, nonatomic) TVHKMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (void)_completeWithFetchResponse:(id)arg1 error:(id)arg2;	// IMP=0x0000000100025238
- (void)_startFetchingMediaEntities;	// IMP=0x0000000100024b64
- (void)_stopObservingMediaLibrary:(id)arg1;	// IMP=0x0000000100024ae0
- (void)_startObservingMediaLibrary:(id)arg1;	// IMP=0x0000000100024a54
- (id)_stateMachineName;	// IMP=0x00000001000249b8
- (void)_registerStateMachineHandlers;	// IMP=0x000000010002433c
- (void)_setupStateMachine;	// IMP=0x000000010002428c
- (void)_handleMediaLibraryConnectionStateDidChangeNotification:(id)arg1;	// IMP=0x0000000100024120
- (void)fetchMediaEntitiesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100023f58
- (void)dealloc;	// IMP=0x0000000100023f08
- (id)initWithMediaLibrary:(id)arg1 mediaCategoryType:(unsigned long long)arg2 mediaEntityCollectionIdentifier:(id)arg3;	// IMP=0x0000000100023de4

@end
