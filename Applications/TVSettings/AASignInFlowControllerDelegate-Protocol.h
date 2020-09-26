//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AASignInFlowController, ACAccount, CDPContext, NSSet, NSString;

@protocol AASignInFlowControllerDelegate <NSObject>

@optional
@property(nonatomic) unsigned long long findMyActivationAction;
@property(nonatomic) _Bool shouldStashLoginResponse;
@property(copy, nonatomic) NSSet *requiredTerms;
@property(nonatomic) _Bool skipDataclassEnablement;
@property(nonatomic) _Bool backgroundDataclassEnablement;
@property(nonatomic) _Bool skipCDPEnablement;
@property(retain, nonatomic) CDPContext *cdpContext;
- (void)signInFlowController:(AASignInFlowController *)arg1 saveAccount:(ACAccount *)arg2 withAllDataclassesEnabledIfPossibleWithCompletion:(void (^)(_Bool, ACAccount *, NSError *))arg3;
- (void)signInFlowController:(AASignInFlowController *)arg1 enableFindMyWithAction:(unsigned long long)arg2 completion:(void (^)(_Bool))arg3;
- (void)signInFlowController:(AASignInFlowController *)arg1 presentGenericTermsUIForAccount:(ACAccount *)arg2 completion:(void (^)(_Bool, ACAccount *, NSError *))arg3;
- (void)signInFlowController:(AASignInFlowController *)arg1 showAlertWithTitle:(NSString *)arg2 message:(NSString *)arg3 completion:(void (^)(_Bool))arg4;
@end

