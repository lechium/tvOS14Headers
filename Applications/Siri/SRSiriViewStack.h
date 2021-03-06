//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSMutableOrderedSet, UIView;
@protocol SRSiriStackableContent;

@interface SRSiriViewStack : NSObject <NSCopying>
{
    NSMutableOrderedSet *_mutableViews;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000960c
@property(retain, nonatomic) NSMutableOrderedSet *mutableViews; // @synthesize mutableViews=_mutableViews;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000958c
@property(readonly, nonatomic) UIView<SRSiriStackableContent> *mostRecentlyAddedView;
- (void)reset;	// IMP=0x00000001000094c4
- (id)previousViewBeforeContentView:(id)arg1;	// IMP=0x0000000100009464
- (id)viewAtIndex:(long long)arg1;	// IMP=0x0000000100009404
- (id)nextViewAfterContentView:(id)arg1;	// IMP=0x00000001000093a8
- (_Bool)containsContentView:(id)arg1;	// IMP=0x0000000100009398
- (void)removeContentView:(id)arg1;	// IMP=0x0000000100009300
- (void)addContentView:(id)arg1;	// IMP=0x000000010000926c
@property(readonly, nonatomic) NSArray *contentViews;
- (void)setContentViews:(id)arg1;	// IMP=0x00000001000091f8
- (id)initWithContentViews:(id)arg1;	// IMP=0x0000000100009168

@end

