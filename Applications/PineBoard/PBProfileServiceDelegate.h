//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVProfileServiceDelegate-Protocol.h"

@interface PBProfileServiceDelegate : NSObject <TVProfileServiceDelegate>
{
}

- (void)profileServiceDidChangeActiveAccount:(id)arg1;	// IMP=0x0000000100075728
- (void)profileService:(id)arg1 presentMappingDialogWithOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000750b4
- (void)profileService:(id)arg1 presentConfirmMatchDialogWithOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000749ec

@end

