//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable;

@interface HBTopShelfStaticImageAssetCache : NSObject
{
    NSMapTable *_images;	// 8 = 0x8
    NSHashTable *_models;	// 16 = 0x10
    NSMapTable *_cellCache;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100043730
@property(readonly, nonatomic) NSMapTable *cellCache; // @synthesize cellCache=_cellCache;
@property(readonly, nonatomic) NSHashTable *models; // @synthesize models=_models;
@property(readonly, nonatomic) NSMapTable *images; // @synthesize images=_images;
- (id)folderImageForModel:(id)arg1 forCell:(id)arg2;	// IMP=0x00000001000434bc
- (id)init;	// IMP=0x00000001000433ec

@end

