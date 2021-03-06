//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AFConversation, AFConversationTransaction, NSArray;

@protocol AFConversationDelegate <NSObject>

@optional
- (void)conversation:(AFConversation *)arg1 presentationStateDidChangeForItemsAtIndexPaths:(NSArray *)arg2;
- (void)conversation:(AFConversation *)arg1 didUpdateItemsAtIndexPaths:(NSArray *)arg2;
- (void)conversation:(AFConversation *)arg1 didInsertItemsAtIndexPaths:(NSArray *)arg2;
- (void)conversation:(AFConversation *)arg1 didRemoveItemsWithIdentifiers:(NSArray *)arg2 atIndexPaths:(NSArray *)arg3 parentItemIdentifiers:(NSArray *)arg4;
- (void)conversation:(AFConversation *)arg1 didChangeWithTransaction:(AFConversationTransaction *)arg2;
@end

