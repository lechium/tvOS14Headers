//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MTResultsChangeGenerator, NSIndexPath;

@protocol MTResultsChangeGeneratorDelegate <NSObject>
- (void)generator:(MTResultsChangeGenerator *)arg1 didChangeObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(NSIndexPath *)arg5;
@end
