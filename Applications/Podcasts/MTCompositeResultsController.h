//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTResultsController.h"

#import "MTResultsControllerDelegate-Protocol.h"

@class NSArray, NSString;
@protocol MTResultsControllerDelegate;

@interface MTCompositeResultsController : MTResultsController <MTResultsControllerDelegate>
{
    id <MTResultsControllerDelegate> delegate;	// 8 = 0x8
    NSArray *_controllers;	// 16 = 0x10
}

+ (id)controllerWithControllers:(id)arg1;	// IMP=0x0000000100020c60
- (void).cxx_destruct;	// IMP=0x0000000100021c14
@property(readonly, nonatomic) NSArray *controllers; // @synthesize controllers=_controllers;
- (void)setDelegate:(id)arg1;	// IMP=0x0000000100021bf0
- (id)delegate;	// IMP=0x0000000100021bd0
- (_Bool)hasObjects;	// IMP=0x0000000100021aa0
- (id)allObjects;	// IMP=0x0000000100021914
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x0000000100021700
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x0000000100021694
- (void)controllerWillChangeContent:(id)arg1;	// IMP=0x0000000100021628
- (unsigned long long)indexOfController:(id)arg1;	// IMP=0x00000001000215b0
- (id)controllerAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000214fc
- (id)indexPathsForObject:(id)arg1;	// IMP=0x0000000100021324
- (unsigned long long)numberOfObjectsInSection:(unsigned long long)arg1;	// IMP=0x00000001000212d8
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x000000010002121c
- (id)indexPathForObject:(id)arg1;	// IMP=0x0000000100021044
- (void)reloadData;	// IMP=0x0000000100020f28
- (void)_setControllers:(id)arg1;	// IMP=0x0000000100020d28
- (id)initWithControllers:(id)arg1;	// IMP=0x0000000100020cb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

