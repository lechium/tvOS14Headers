//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SystemDiagnosticLogAgent.h"

@interface SystemDiagnosticLogAgentiOS : SystemDiagnosticLogAgent
{
}

- (void)processMessage:(id)arg1 replyWith:(id)arg2;	// IMP=0x0000000100004514
- (_Bool)getAccessibilityPreferences:(const char *)arg1 withTimeout:(double)arg2;	// IMP=0x0000000100004170
- (_Bool)getKeyboardPreferences:(const char *)arg1 withTimeout:(double)arg2;	// IMP=0x0000000100003c64
- (_Bool)ASPToolTrace:(const char *)arg1 withTimeout:(double)arg2;	// IMP=0x0000000100003acc
- (_Bool)ASPToolTaskForDir:(const char *)arg1 WithTimeout:(double)arg2;	// IMP=0x0000000100003904
- (_Bool)ASPToolSnapshotForDir:(const char *)arg1 WithTimeout:(double)arg2;	// IMP=0x000000010000376c
- (_Bool)ASPToolGenericWithTimeout:(double)arg1 andBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003660
- (_Bool)_BTPHYTaskWithTimeout:(long long)arg1;	// IMP=0x00000001000033f4
- (id)_AWDTaskWithTimeout:(long long)arg1;	// IMP=0x0000000100002f3c
- (id)_coreMediaTaskWithTimeout:(long long)arg1;	// IMP=0x0000000100002d20

@end

