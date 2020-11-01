//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDTargetDevice, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface MSDFindMyHub : NSObject
{
    _Bool _useLocalHub;	// 8 = 0x8
    _Bool _isLogicSync;	// 9 = 0x9
    NSString *_server;	// 16 = 0x10
    NSString *_port;	// 24 = 0x18
    NSString *_bonjourName;	// 32 = 0x20
    NSArray *_serverList;	// 40 = 0x28
    NSMutableDictionary *_deviceOptions;	// 48 = 0x30
    MSDTargetDevice *_device;	// 56 = 0x38
    NSDictionary *_fmhDict;	// 64 = 0x40
    NSDictionary *_deviceInfo;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x0000000100056ea4
- (void).cxx_destruct;	// IMP=0x0000000100058888
@property _Bool isLogicSync; // @synthesize isLogicSync=_isLogicSync;
@property(retain) NSDictionary *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain) NSDictionary *fmhDict; // @synthesize fmhDict=_fmhDict;
@property(retain) MSDTargetDevice *device; // @synthesize device=_device;
@property _Bool useLocalHub; // @synthesize useLocalHub=_useLocalHub;
@property(retain) NSMutableDictionary *deviceOptions; // @synthesize deviceOptions=_deviceOptions;
@property(retain) NSArray *serverList; // @synthesize serverList=_serverList;
@property(retain) NSString *bonjourName; // @synthesize bonjourName=_bonjourName;
@property(retain) NSString *port; // @synthesize port=_port;
@property(retain) NSString *server; // @synthesize server=_server;
- (_Bool)compareSavedHubHostsWithNewHosts;	// IMP=0x0000000100058424
- (_Bool)compareSavedHubHostNameWithNewHostName;	// IMP=0x0000000100058190
- (_Bool)enrollAndSetup:(id *)arg1;	// IMP=0x0000000100057df4
- (_Bool)askFindMyHubForHubInfoAndDeviceOptions;	// IMP=0x0000000100057314
- (unsigned long long)queryFindMyHubAndDetermineLogicSyncResult;	// IMP=0x0000000100057014
- (_Bool)discoverAndEnrollWithHub:(id *)arg1;	// IMP=0x0000000100056f54

@end

