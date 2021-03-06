//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface HBFolderNameInfo : NSObject
{
    NSArray *_folderNames;	// 8 = 0x8
    NSString *_fallbackFolderName;	// 16 = 0x10
}

+ (id)localizedDefaultFolderName;	// IMP=0x0000000100035210
+ (id)proposedFolderNameWithTargetFolderNameInfo:(id)arg1 editingFolderNameInfo:(id)arg2;	// IMP=0x0000000100034fac
- (void).cxx_destruct;	// IMP=0x000000010003523c
@property(readonly, nonatomic) NSString *fallbackFolderName; // @synthesize fallbackFolderName=_fallbackFolderName;
@property(readonly, nonatomic) NSArray *folderNames; // @synthesize folderNames=_folderNames;
- (id)description;	// IMP=0x0000000100034f00
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100034e70
- (id)initWithApplication:(id)arg1;	// IMP=0x0000000100034d88

@end

