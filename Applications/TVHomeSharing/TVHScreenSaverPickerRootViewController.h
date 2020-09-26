//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHRootViewController.h"

#import "TVHScreenSaverPickerDelegate-Protocol.h"

@class NSString;

@interface TVHScreenSaverPickerRootViewController : TVHRootViewController <TVHScreenSaverPickerDelegate>
{
}

- (void)screenSaverPickerDidChangeScreenSaver:(id)arg1;	// IMP=0x00000001000ab970
- (id)_browseViewControllersWithMediaLibrary:(id)arg1 openURL:(id)arg2;	// IMP=0x00000001000ab8b8
- (void)handleURL:(id)arg1;	// IMP=0x00000001000ab8b4
- (id)initWithMediaLibrariesEnviroment:(id)arg1;	// IMP=0x00000001000ab804

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

