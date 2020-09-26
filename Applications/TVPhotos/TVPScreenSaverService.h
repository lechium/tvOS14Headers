//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVPhotoServiceInterface-Protocol.h"

@class NSString;

@interface TVPScreenSaverService : NSObject <TVPhotoServiceInterface>
{
}

- (void)_fetchAssetsForCollection:(id)arg1 queue:(id)arg2 remotePhotoServer:(id)arg3 responseBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000010000a594
- (void)_fetchPhotoCollectionsWithRemotePhotoServer:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000a258
- (void)photoAssetsWithOptions:(id)arg1 remotePhotoServer:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010000a208

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

