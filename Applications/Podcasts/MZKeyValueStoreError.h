//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSString;

@interface MZKeyValueStoreError : NSError
{
    NSString *_transactionDescription;	// 40 = 0x28
}

+ (id)serverClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 underlyingError:(id)arg3;	// IMP=0x00000001000630f0
+ (id)clientClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 underlyingError:(id)arg3;	// IMP=0x0000000100062f5c
+ (id)userClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 underlyingError:(id)arg3;	// IMP=0x0000000100062dc8
+ (id)delegateCancelledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x0000000100062d60
+ (id)transactionCancelledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x0000000100062cf8
+ (id)transactionTimeoutErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x0000000100062c90
+ (id)transactionCancelledErrorWithTransaction:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3;	// IMP=0x0000000100062be4
+ (id)transactionMissingURLErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x0000000100062b44
+ (id)transactionMissingDomainErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x0000000100062aa4
+ (id)storeAccountSessionExpiredWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x0000000100062a04
+ (id)noStoreAccountErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x0000000100062964
+ (id)userEnteredWrongCredentialsErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x00000001000628c4
+ (id)userCancelledSignInErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x0000000100062824
+ (id)storeValidationErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x0000000100062754
+ (id)storeGenericErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x0000000100062684
+ (id)storeAccountMismatchErrorWithPreviousStoreAccountText:(id)arg1 currentStoreAccontText:(id)arg2 transaction:(id)arg3 underlyingError:(id)arg4;	// IMP=0x00000001000624e4
+ (id)storeLoggedOutErrorWithPreviousStoreAccountText:(id)arg1 transaction:(id)arg2 underlyingError:(id)arg3;	// IMP=0x000000010006237c
+ (id)killSwitchErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x00000001000622dc
+ (id)networkingBlockedErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000010006223c
+ (id)keyValueStoreDisabledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x0000000100061924
+ (id)unknownErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000010006180c
+ (id)keyValueStoreErrorWithCode:(long long)arg1 localizedDescription:(id)arg2 transaction:(id)arg3 underlyingError:(id)arg4;	// IMP=0x00000001000615e0
- (void).cxx_destruct;	// IMP=0x00000001000632a0
@property(copy, nonatomic) NSString *transactionDescription; // @synthesize transactionDescription=_transactionDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100061560
- (double)retrySeconds;	// IMP=0x00000001000614e0
- (id)currentStoreAccountKey;	// IMP=0x0000000100061484
- (id)previousStoreAccountKey;	// IMP=0x0000000100061428
- (_Bool)isTransactionMissingInformationError;	// IMP=0x0000000100061400
- (_Bool)isTransactionCancelledError;	// IMP=0x00000001000613d8
- (_Bool)isClampError;	// IMP=0x000000010006139c
- (_Bool)isRecoverableError;	// IMP=0x000000010006133c
- (_Bool)isAccountsChangedError;	// IMP=0x0000000100061308
- (_Bool)isAuthenticationError;	// IMP=0x00000001000612e0
- (id)description;	// IMP=0x0000000100061194

@end

