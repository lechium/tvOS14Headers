//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSAsset, NSDate, NSString;

@interface TVPAsset : NSObject
{
    int _state;	// 8 = 0x8
    MSAsset *_asset;	// 16 = 0x10
    NSString *_assetID;	// 24 = 0x18
    NSDate *_dateContentCreated;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100011c00
@property(retain) NSDate *dateContentCreated; // @synthesize dateContentCreated=_dateContentCreated;
@property(copy) NSString *assetID; // @synthesize assetID=_assetID;
@property int state; // @synthesize state=_state;
@property(retain) MSAsset *asset; // @synthesize asset=_asset;
- (id)description;	// IMP=0x0000000100011ba8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100011a6c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000119a4
- (unsigned long long)hash;	// IMP=0x0000000100011958
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001189c

@end

