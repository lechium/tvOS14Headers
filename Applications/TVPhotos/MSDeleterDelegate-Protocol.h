//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSAssetCollection, MSDeleter, NSError;

@protocol MSDeleterDelegate <NSObject>
- (void)deleter:(MSDeleter *)arg1 didFinishDeletingAssetCollection:(MSAssetCollection *)arg2 error:(NSError *)arg3;
@end

