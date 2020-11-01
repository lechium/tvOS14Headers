//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCMConcreteContainerIdentity, MCMContainerPath, MCMUserIdentity, NSDictionary, NSNumber, NSString, NSUUID;

@interface MCMMetadata : NSObject
{
    _Bool _transient;	// 8 = 0x8
    _Bool _existed;	// 9 = 0x9
    unsigned int _platform;	// 12 = 0xc
    int _dataProtectionClass;	// 16 = 0x10
    unsigned long long _containerClass;	// 24 = 0x18
    MCMUserIdentity *_userIdentity;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    NSUUID *_uuid;	// 48 = 0x30
    MCMContainerPath *_containerPath;	// 56 = 0x38
    NSString *_userManagedAssetsDirName;	// 64 = 0x40
    NSDictionary *_info;	// 72 = 0x48
    NSNumber *_schemaVersion;	// 80 = 0x50
}

+ (id)_readAndValidateMetadataInDictionary:(id)arg1 containerURL:(id)arg2 forUserIdentity:(id)arg3 containerClass:(unsigned long long)arg4 checkClassPath:(_Bool)arg5 error:(id *)arg6;	// IMP=0x000000010005cc90
+ (id)readAndValidateMetadataAtFileUrl:(id)arg1 forUserIdentity:(id)arg2 containerClass:(unsigned long long)arg3 checkClassPath:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000010005c7dc
+ (id)readAndValidateMetadataAtUrl:(id)arg1 forUserIdentity:(id)arg2 containerClass:(unsigned long long)arg3 checkClassPath:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000010005c708
- (void).cxx_destruct;	// IMP=0x000000010005c69c
@property(nonatomic) int dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
@property(retain, nonatomic) NSNumber *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(nonatomic) _Bool existed; // @synthesize existed=_existed;
@property(readonly, nonatomic) unsigned int platform; // @synthesize platform=_platform;
@property(nonatomic) _Bool transient; // @synthesize transient=_transient;
@property(retain, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(retain, nonatomic) NSString *userManagedAssetsDirName; // @synthesize userManagedAssetsDirName=_userManagedAssetsDirName;
@property(retain, nonatomic) MCMContainerPath *containerPath; // @synthesize containerPath=_containerPath;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) MCMUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) unsigned long long containerClass; // @synthesize containerClass=_containerClass;
- (id)shortDescription;	// IMP=0x000000010005c4f8
- (id)description;	// IMP=0x000000010005c378
- (_Bool)setInfoValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010005c168
@property(readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentity;
- (_Bool)writeMetadataToFileURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000010005ba6c
- (_Bool)writeMetadataToDiskWithError:(id *)arg1;	// IMP=0x000000010005b970
- (id)initWithContainerIdentity:(id)arg1 info:(id)arg2 containerPath:(id)arg3 userManagedAssetsDirName:(id)arg4 schemaVersion:(id)arg5 dataProtectionClass:(int)arg6;	// IMP=0x000000010005b7a0

@end

