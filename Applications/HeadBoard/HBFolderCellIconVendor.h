//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HBFolder;

@interface HBFolderCellIconVendor : NSObject
{
    HBFolder *_pendingFulfillmentFolder;	// 8 = 0x8
}

+ (id)vendorQueue;	// IMP=0x0000000100066be4
- (void).cxx_destruct;	// IMP=0x00000001000672bc
@property(retain, nonatomic) HBFolder *pendingFulfillmentFolder; // @synthesize pendingFulfillmentFolder=_pendingFulfillmentFolder;
- (void)requestIconLayerStackForFolder:(id)arg1 reasons:(unsigned long long)arg2 options:(id)arg3 response:(CDUnknownBlockType)arg4;	// IMP=0x0000000100066c80

@end

