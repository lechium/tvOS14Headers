//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecordID, NSString;

__attribute__((visibility("hidden")))
@interface CKKSCloudKitDeletion : NSObject
{
    CKRecordID *_recordID;	// 8 = 0x8
    NSString *_recordType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000a98d0
@property(retain) NSString *recordType; // @synthesize recordType=_recordType;
@property(retain) CKRecordID *recordID; // @synthesize recordID=_recordID;
- (id)initWithRecordID:(id)arg1 recordType:(id)arg2;	// IMP=0x00000001000a9804

@end

