//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSBaseAESSIVKey.h"

#import "NSSecureCoding-Protocol.h"

__attribute__((visibility("hidden")))
@interface CKKSWrappedAESSIVKey : CKKSBaseAESSIVKey <NSSecureCoding>
{
}

+ (id)zeroedKey;	// IMP=0x0000000100177774
+ (_Bool)supportsSecureCoding;	// IMP=0x000000010017776c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001776c8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001776a4
- (id)base64WrappedKey;	// IMP=0x000000010017764c
- (id)wrappedData;	// IMP=0x0000000100177610
- (id)initWithData:(id)arg1;	// IMP=0x00000001001774dc
- (id)initWithBase64:(id)arg1;	// IMP=0x00000001001773f4
- (id)initWithBytes:(char *)arg1 len:(unsigned long long)arg2;	// IMP=0x0000000100177338
- (id)init;	// IMP=0x00000001001772f8

@end
