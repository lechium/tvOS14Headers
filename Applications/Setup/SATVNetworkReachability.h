//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSession;

@interface SATVNetworkReachability : NSObject
{
    NSURLSession *_urlSession;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100047758
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
- (void)dealloc;	// IMP=0x0000000100047634
- (void)_performReachabilityRequestWithRetryCount:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100047004
- (void)testReachabilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100046d2c
- (id)init;	// IMP=0x0000000100046c54

@end
