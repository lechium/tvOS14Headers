//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVContentKeyRequest, AVContentKeySession, AVPersistableContentKeyRequest, NSData, NSError, NSString;

@protocol AVContentKeySessionDelegate <NSObject>
- (void)contentKeySession:(AVContentKeySession *)arg1 didProvideContentKeyRequest:(AVContentKeyRequest *)arg2;

@optional
- (void)contentKeySessionDidGenerateExpiredSessionReport:(AVContentKeySession *)arg1;
- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:(AVContentKeySession *)arg1;
- (void)contentKeySession:(AVContentKeySession *)arg1 contentKeyRequestDidSucceed:(AVContentKeyRequest *)arg2;
- (_Bool)contentKeySession:(AVContentKeySession *)arg1 shouldRetryContentKeyRequest:(AVContentKeyRequest *)arg2 reason:(NSString *)arg3;
- (void)contentKeySession:(AVContentKeySession *)arg1 contentKeyRequest:(AVContentKeyRequest *)arg2 didFailWithError:(NSError *)arg3;
- (void)contentKeySession:(AVContentKeySession *)arg1 didUpdatePersistableContentKey:(NSData *)arg2 forContentKeyIdentifier:(id)arg3;
- (void)contentKeySession:(AVContentKeySession *)arg1 didProvidePersistableContentKeyRequest:(AVPersistableContentKeyRequest *)arg2;
- (void)contentKeySession:(AVContentKeySession *)arg1 didProvideRenewingContentKeyRequest:(AVContentKeyRequest *)arg2;
@end

