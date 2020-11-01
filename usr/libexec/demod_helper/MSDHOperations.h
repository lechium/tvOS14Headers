//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDSignedManifest;
@protocol OS_os_transaction;

@interface MSDHOperations : NSObject
{
    MSDSignedManifest *_signedManifest;	// 8 = 0x8
    NSObject<OS_os_transaction> *_transaction;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000001000174b8
- (void).cxx_destruct;	// IMP=0x000000010001a234
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) MSDSignedManifest *signedManifest; // @synthesize signedManifest=_signedManifest;
- (_Bool)quitHelper;	// IMP=0x000000010001a204
- (_Bool)restoreAttributesUnder:(id)arg1 fromManifest:(id)arg2;	// IMP=0x0000000100019ef8
- (_Bool)restoreAppDataAttributesUnder:(id)arg1 containerType:(id)arg2 identifier:(id)arg3;	// IMP=0x0000000100019b74
- (_Bool)restoreBackupAttributesUnder:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000100019a80
- (_Bool)reboot;	// IMP=0x00000001000199d8
- (_Bool)moveStagingToFinal:(id)arg1 finalPath:(id)arg2;	// IMP=0x0000000100018f74
- (_Bool)disableLaunchdServicesForWatch;	// IMP=0x0000000100018ce0
- (_Bool)manageDemoVolume:(id)arg1;	// IMP=0x0000000100018b9c
- (_Bool)manageDataVolume:(id)arg1;	// IMP=0x00000001000189c8
- (_Bool)writeNVRam:(id)arg1 withValue:(id)arg2;	// IMP=0x00000001000187c8
- (_Bool)deleteNvram:(id)arg1;	// IMP=0x0000000100018668
- (_Bool)cloneFile:(id)arg1 stagingPath:(id)arg2 expectingHash:(id)arg3 expectingTarget:(id)arg4;	// IMP=0x0000000100018590
- (_Bool)touchFile:(id)arg1 fileAttributes:(id)arg2;	// IMP=0x0000000100018418
- (_Bool)writeDictionary:(id)arg1 toFile:(id)arg2;	// IMP=0x0000000100018278
- (_Bool)createDeviceManifest:(id)arg1 forBackup:(_Bool)arg2 range:(struct _NSRange)arg3;	// IMP=0x0000000100017ed0
- (_Bool)removeDirectory:(id)arg1;	// IMP=0x0000000100017e38
- (_Bool)prepareDirectory:(id)arg1 writableByNonRoot:(_Bool)arg2;	// IMP=0x0000000100017a30
- (_Bool)migratePreferencesFile;	// IMP=0x0000000100017770
- (void)dealloc;	// IMP=0x0000000100017588
- (id)init;	// IMP=0x0000000100017524

@end
