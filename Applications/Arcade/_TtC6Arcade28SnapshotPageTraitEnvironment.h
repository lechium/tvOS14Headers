//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UITraitCollection;
@protocol _TtP6Arcade20PageTraitEnvironment_;

@interface _TtC6Arcade28SnapshotPageTraitEnvironment : NSObject
{
    MISSING_TYPE *traitCollection;	// 8 = 0x8
    MISSING_TYPE *pageContainerSize;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000f560c
- (id)init;	// IMP=0x00000001000f561c
@property(nonatomic, readonly) id <_TtP6Arcade20PageTraitEnvironment_> snapshotPageTraitEnvironment;
@property(nonatomic, readonly) struct UIEdgeInsets pageMarginInsets;
@property(nonatomic, readonly) struct CGSize pageContainerSize; // @synthesize pageContainerSize;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000f5588
@property(nonatomic, readonly) UITraitCollection *traitCollection; // @synthesize traitCollection;

@end

