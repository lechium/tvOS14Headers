//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, _DASActivity;

@protocol _DASActivityBackgroundTaskSchedulerServer
- (void)establishConnection:(void (^)(void))arg1;
- (void)completeTaskRequest:(_DASActivity *)arg1 completionHandler:(void (^)(void))arg2;
- (void)cancelAllTaskRequestsWithCompletionHandler:(void (^)(void))arg1;
- (void)cancelTaskRequestWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(void))arg2;
- (void)getPendingTaskRequestsWithCompletionHandler:(void (^)(NSArray *))arg1;
- (void)submitTaskRequest:(_DASActivity *)arg1 withHandler:(void (^)(NSError *))arg2;
@end

