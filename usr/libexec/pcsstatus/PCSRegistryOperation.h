//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSBlockOperation.h>

@class NSError, NSString;

@interface PCSRegistryOperation : NSBlockOperation
{
    NSError *_error;	// 8 = 0x8
    NSString *_operationUUID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000054c4
@property(retain) NSString *operationUUID; // @synthesize operationUUID=_operationUUID;
@property(retain) NSError *error; // @synthesize error=_error;
- (id)pendingDependenciesString:(id)arg1;	// IMP=0x0000000100005318
- (id)debugDescription;	// IMP=0x00000001000051e4
- (id)description;	// IMP=0x00000001000050b0
- (id)operationStateString;	// IMP=0x0000000100005010
- (id)selfname;	// IMP=0x0000000100004ed4
- (id)init;	// IMP=0x0000000100004e38

@end

