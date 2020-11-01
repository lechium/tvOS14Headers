//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition;
@protocol OS_xpc_object;

@interface MSDHelperAgent : NSObject
{
    _Bool _result;	// 8 = 0x8
    NSObject<OS_xpc_object> *_xpc_conn;	// 16 = 0x10
    NSCondition *_doneCondition;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010001bb68
- (void).cxx_destruct;	// IMP=0x000000010001ed2c
@property(nonatomic) _Bool result; // @synthesize result=_result;
@property(retain, nonatomic) NSCondition *doneCondition; // @synthesize doneCondition=_doneCondition;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpc_conn; // @synthesize xpc_conn=_xpc_conn;
- (_Bool)quitHelper;	// IMP=0x000000010001eb84
- (_Bool)reboot;	// IMP=0x000000010001e988
- (_Bool)moveStagingToFinal:(id)arg1 finalPath:(id)arg2;	// IMP=0x000000010001e6c4
- (_Bool)disableLaunchdServicesForWatch;	// IMP=0x000000010001e4c8
- (_Bool)manageDemoVolume:(id)arg1;	// IMP=0x000000010001e250
- (_Bool)manageDataVolume:(id)arg1;	// IMP=0x000000010001dfd8
- (_Bool)writeNvram:(id)arg1 withValue:(id)arg2;	// IMP=0x000000010001dd28
- (_Bool)deleteNvram:(id)arg1;	// IMP=0x000000010001daf8
- (_Bool)restoreAppDataAttributesUnder:(id)arg1 containerType:(id)arg2 identifier:(id)arg3;	// IMP=0x000000010001d7f8
- (_Bool)restoreBackupAttributesUnder:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000010001d564
- (_Bool)cloneFile:(id)arg1 to:(id)arg2 expectingHash:(id)arg3 expectingTarget:(id)arg4;	// IMP=0x000000010001d1dc
- (_Bool)touchFile:(id)arg1 fileAttributes:(id)arg2;	// IMP=0x000000010001ce5c
- (id)createDeviceManifest:(id)arg1 forBackup:(_Bool)arg2 range:(struct _NSRange)arg3;	// IMP=0x000000010001cac8
- (_Bool)removeWorkDirectory:(id)arg1;	// IMP=0x000000010001c898
- (_Bool)prepareWorkDirectory:(id)arg1 writableByNonRoot:(_Bool)arg2;	// IMP=0x000000010001c61c
- (_Bool)clearStagedDeviceAfterUpdateProcess;	// IMP=0x000000010001c420
- (_Bool)stageDeviceForUpdateProcess;	// IMP=0x000000010001c224
- (_Bool)migratePreferencesFile;	// IMP=0x000000010001c028
- (void)handleMessage:(id)arg1;	// IMP=0x000000010001be40
- (id)init;	// IMP=0x000000010001bbd4

@end

