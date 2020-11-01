//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDBonjourBrowserDelegate-Protocol.h"

@class NSArray, NSString, SDBonjourBrowser;
@protocol SDWindowsBrowserDelegate;

__attribute__((visibility("hidden")))
@interface SDWindowsBrowser : NSObject <SDBonjourBrowserDelegate>
{
    SDBonjourBrowser *_browser;	// 8 = 0x8
    NSString *_workgroup;	// 16 = 0x10
    id <SDWindowsBrowserDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100133edc
@property __weak id <SDWindowsBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *workgroup; // @synthesize workgroup=_workgroup;
- (void)stop;	// IMP=0x0000000100133e54
- (void)start;	// IMP=0x0000000100133d54
- (void)bonjourNodesDidChange:(id)arg1;	// IMP=0x0000000100133d18
@property(readonly, copy) NSArray *nodes;
- (void)dealloc;	// IMP=0x0000000100133cbc
- (id)initWithWorkgroup:(id)arg1;	// IMP=0x0000000100133c38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

