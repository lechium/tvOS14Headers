//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol UIScenePresenter;

@interface _PBScenePresentation : NSObject
{
    id <UIScenePresenter> _scenePresenter;	// 8 = 0x8
    long long _layoutLevel;	// 16 = 0x10
    NSString *_sceneIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100184a34
@property(readonly, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property(readonly, nonatomic) long long layoutLevel; // @synthesize layoutLevel=_layoutLevel;
@property(readonly, nonatomic) id <UIScenePresenter> scenePresenter; // @synthesize scenePresenter=_scenePresenter;
- (long long)compare:(id)arg1;	// IMP=0x00000001001848f0
- (_Bool)matchesElement:(id)arg1;	// IMP=0x0000000100184684
- (unsigned long long)hash;	// IMP=0x0000000100184500
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001840d4
- (id)description;	// IMP=0x0000000100183f74
- (id)initWithLayoutElement:(id)arg1;	// IMP=0x0000000100183cb4

@end

