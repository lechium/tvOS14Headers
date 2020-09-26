//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TVHKCollectionChangeSet;

@interface TVHMediaEntitiesDataSourceFetchResult : NSObject
{
    NSString *_dataSourceIdentifier;	// 8 = 0x8
    NSArray *_mediaEntities;	// 16 = 0x10
    NSArray *_sortDescriptors;	// 24 = 0x18
    NSArray *_indexBarItems;	// 32 = 0x20
    TVHKCollectionChangeSet *_changeSet;	// 40 = 0x28
}

+ (id)new;	// IMP=0x00000001000a3e2c
- (void).cxx_destruct;	// IMP=0x00000001000a4220
@property(retain, nonatomic) TVHKCollectionChangeSet *changeSet; // @synthesize changeSet=_changeSet;
@property(copy, nonatomic) NSArray *indexBarItems; // @synthesize indexBarItems=_indexBarItems;
@property(copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(readonly, copy, nonatomic) NSArray *mediaEntities; // @synthesize mediaEntities=_mediaEntities;
@property(readonly, copy, nonatomic) NSString *dataSourceIdentifier; // @synthesize dataSourceIdentifier=_dataSourceIdentifier;
- (id)initWithFetchControllerResultSet:(id)arg1;	// IMP=0x00000001000a3fb0
- (id)initWithDataSourceIdentifier:(id)arg1 mediaEntities:(id)arg2;	// IMP=0x00000001000a3ef0
- (id)init;	// IMP=0x00000001000a3e68

@end

