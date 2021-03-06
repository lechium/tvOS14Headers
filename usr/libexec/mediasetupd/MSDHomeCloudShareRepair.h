//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMUser, HMUserCloudShareRepairInfo, NSString;

@interface MSDHomeCloudShareRepair : NSObject
{
    HMUser *_user;	// 8 = 0x8
    NSString *_containerID;	// 16 = 0x10
    HMUserCloudShareRepairInfo *_repairInfo;	// 24 = 0x18
}

+ (id)repairTokenForUser:(id)arg1;	// IMP=0x0000000100032110
- (void).cxx_destruct;	// IMP=0x000000010003242c
@property(readonly, nonatomic) HMUserCloudShareRepairInfo *repairInfo; // @synthesize repairInfo=_repairInfo;
@property(readonly, copy, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
@property(readonly, nonatomic) HMUser *user; // @synthesize user=_user;
- (void)performRepairRequest:(CDUnknownBlockType)arg1;	// IMP=0x0000000100032288
- (id)initWithUser:(id)arg1 repairInfo:(id)arg2 containerID:(id)arg3;	// IMP=0x00000001000321b8

@end

