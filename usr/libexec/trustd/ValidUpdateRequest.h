//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSession;

__attribute__((visibility("hidden")))
@interface ValidUpdateRequest : NSObject
{
    double _updateScheduled;	// 8 = 0x8
    NSURLSession *_backgroundSession;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010002195c
@property(retain) NSURLSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property double updateScheduled; // @synthesize updateScheduled=_updateScheduled;
- (_Bool)scheduleUpdateFromServer:(id)arg1 forVersion:(unsigned long long)arg2 withQueue:(id)arg3;	// IMP=0x00000001000217c4
- (void)createSession:(id)arg1 forServer:(id)arg2;	// IMP=0x0000000100021650
- (id)validUpdateConfiguration;	// IMP=0x0000000100021478

@end
