//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NRDDTLSStack, NSData;

@protocol NRDTLSStackDelegate <NSObject>
- (void)handleDTLSStack:(NRDDTLSStack *)arg1 inboundDecryptedData:(NSData *)arg2;
- (void)handleDTLSStack:(NRDDTLSStack *)arg1 outboundEncryptedData:(NSData *)arg2;
- (void)handleIsReady:(NRDDTLSStack *)arg1;
@end

