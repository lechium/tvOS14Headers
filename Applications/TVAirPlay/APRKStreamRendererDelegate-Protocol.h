//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class APRKMetadata, APRKStreamRenderer, NSString;

@protocol APRKStreamRendererDelegate <NSObject>

@optional
- (void)didUpdateMetadata:(APRKMetadata *)arg1 forRenderer:(APRKStreamRenderer *)arg2;
- (void)recordingSessionDidFailForRenderer:(APRKStreamRenderer *)arg1;
- (void)didChangeStreamRendererModeTo:(unsigned long long)arg1 forRenderer:(APRKStreamRenderer *)arg2;
- (void)videoLayerSizeDidChangeTo:(struct CGSize)arg1 forRenderer:(APRKStreamRenderer *)arg2;
- (void)shouldHidePasscodePromptForRenderer:(APRKStreamRenderer *)arg1;
- (void)shouldShowPasscodePromptWithString:(NSString *)arg1 forRenderer:(APRKStreamRenderer *)arg2;
@end

