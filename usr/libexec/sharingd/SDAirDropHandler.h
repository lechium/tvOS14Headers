//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LSBundleProxy, NSString, SFAirDropTransfer;

__attribute__((visibility("hidden")))
@interface SDAirDropHandler : NSObject
{
    _Bool _hasFiles;	// 8 = 0x8
    _Bool _hasLinks;	// 9 = 0x9
    _Bool _isActivated;	// 10 = 0xa
    _Bool _handlingAppInstalled;	// 11 = 0xb
    SFAirDropTransfer *_transfer;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    LSBundleProxy *_bundleProxy;	// 32 = 0x20
    NSString *_handlingAppBundleID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100036ba4
@property(retain, nonatomic) NSString *handlingAppBundleID; // @synthesize handlingAppBundleID=_handlingAppBundleID;
@property(nonatomic) _Bool handlingAppInstalled; // @synthesize handlingAppInstalled=_handlingAppInstalled;
@property(retain, nonatomic) LSBundleProxy *bundleProxy; // @synthesize bundleProxy=_bundleProxy;
@property(nonatomic) _Bool isActivated; // @synthesize isActivated=_isActivated;
@property(readonly, nonatomic) _Bool hasLinks; // @synthesize hasLinks=_hasLinks;
@property(readonly, nonatomic) _Bool hasFiles; // @synthesize hasFiles=_hasFiles;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) SFAirDropTransfer *transfer; // @synthesize transfer=_transfer;
- (_Bool)openURLs:(id)arg1;	// IMP=0x0000000100036b14
- (_Bool)openURLs:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x00000001000365ac
- (void)removeItemAtURLToFreeUpSpace:(id)arg1;	// IMP=0x00000001000364e0
- (void)logReceiverBundleID:(id)arg1 forAppProxy:(id)arg2 andURL:(id)arg3;	// IMP=0x00000001000362f8
@property(readonly, copy, nonatomic) NSString *senderName;
- (id)bundleProxyFromCandidateIdentifiers:(id)arg1 handlesURL:(id)arg2;	// IMP=0x0000000100035e6c
- (id)alertMessageLocalizedKeyForTypeDicts:(id)arg1;	// IMP=0x0000000100035a98
@property(readonly, nonatomic) unsigned long long totalSharedItemsCount;
@property(readonly, nonatomic) _Bool isJustLinks;
@property(readonly, nonatomic) _Bool isJustFiles;
- (id)applicationProxyForBundleProxy:(id)arg1;	// IMP=0x0000000100035874
- (id)defaultActionForBundleProxy:(id)arg1;	// IMP=0x00000001000356e8
- (void)prepareForAccept;	// IMP=0x00000001000356e4
- (void)prepareOrPerformOpenAction;	// IMP=0x0000000100035400
- (void)updatePossibleActions;	// IMP=0x000000010003526c
- (id)cancelActionTitleToAccompanyActions:(id)arg1;	// IMP=0x00000001000351cc
@property(readonly, copy, nonatomic) NSString *singleItemActionTitle;
@property(readonly, nonatomic) NSString *suitableContentsDescription;
@property(readonly, nonatomic) NSString *suitableContentsTitle;
- (long long)transferTypes;	// IMP=0x0000000100035188
@property(readonly, nonatomic) _Bool canHandleTransfer;
- (void)lockStatusChanged:(id)arg1;	// IMP=0x0000000100035174
- (void)removeStatusMonitorObservers;	// IMP=0x0000000100035124
- (void)addStatusMonitorObservers;	// IMP=0x00000001000350bc
- (void)triggerSelectedActionIfAppropriate;	// IMP=0x0000000100034cf0
- (void)actionSelected:(id)arg1;	// IMP=0x0000000100034900
- (void)transferUpdated;	// IMP=0x00000001000346b4
- (id)description;	// IMP=0x000000010003458c
- (void)activate;	// IMP=0x00000001000344e4
- (void)dealloc;	// IMP=0x0000000100034484
- (id)initWithTransfer:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x00000001000341fc
- (id)initWithTransfer:(id)arg1;	// IMP=0x00000001000341ec
- (id)init;	// IMP=0x0000000100034138

@end

