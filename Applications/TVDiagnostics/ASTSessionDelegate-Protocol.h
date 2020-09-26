//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ASTProfileResult, ASTSession, ASTTestResult, NSArray, NSData, NSDictionary, NSError, NSNumber, NSString;

@protocol ASTSessionDelegate <NSObject>
- (void)session:(ASTSession *)arg1 didEndWithError:(NSError *)arg2;
- (void)session:(ASTSession *)arg1 profile:(ASTProfileResult *)arg2 filteredByComponents:(NSArray *)arg3;
- (void)session:(ASTSession *)arg1 cancelTest:(NSNumber *)arg2;
- (void)session:(ASTSession *)arg1 startTest:(NSNumber *)arg2 parameters:(NSDictionary *)arg3 testResult:(ASTTestResult *)arg4;

@optional
- (void)sessionDidReboot:(ASTSession *)arg1;
- (void)sessionDidInvalidate:(ASTSession *)arg1;
- (void)sessionDidResume:(ASTSession *)arg1;
- (void)session:(ASTSession *)arg1 didPauseWithError:(NSError *)arg2;
- (void)sessionDidAbortWhilePerformingActions:(ASTSession *)arg1;
- (void)session:(ASTSession *)arg1 performActions:(NSArray *)arg2 sequentially:(_Bool)arg3 stopOnError:(_Bool)arg4;
- (void)session:(ASTSession *)arg1 didUpdateTestSuiteProgress:(NSNumber *)arg2;
- (void)session:(ASTSession *)arg1 didUpdateTestSuiteImage:(NSData *)arg2;
- (void)sessionDidCancelSuite:(ASTSession *)arg1;
- (void)session:(ASTSession *)arg1 didCompleteTestSuite:(NSString *)arg2 description:(NSString *)arg3;
- (void)session:(ASTSession *)arg1 didStartTestSuite:(NSString *)arg2 description:(NSString *)arg3;
- (void)session:(ASTSession *)arg1 didUpdateSettings:(NSDictionary *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)session:(ASTSession *)arg1 didResumeSendingResultForTest:(NSNumber *)arg2;
- (void)session:(ASTSession *)arg1 didPauseSendingResultForTest:(NSNumber *)arg2 error:(NSError *)arg3;
- (void)session:(ASTSession *)arg1 didFinishSendingResultForTest:(NSNumber *)arg2;
- (void)sessionDidStart:(ASTSession *)arg1;
@end

