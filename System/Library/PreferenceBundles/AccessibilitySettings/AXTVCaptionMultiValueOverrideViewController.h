//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AXTVCaptionBaseViewController.h"

@class AXTVCaptionStyle, NSArray, NSString, TSKMappingFormatter;

@interface AXTVCaptionMultiValueOverrideViewController : AXTVCaptionBaseViewController
{
    AXTVCaptionStyle *_style;	// 8 = 0x8
    NSString *_valueKey;	// 16 = 0x10
    NSString *_overrideKey;	// 24 = 0x18
    NSString *_overrideDescription;	// 32 = 0x20
    NSArray *_availableValues;	// 40 = 0x28
    id _defaultValue;	// 48 = 0x30
    TSKMappingFormatter *_formatter;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000010b3c
@property(retain, nonatomic) TSKMappingFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) NSArray *availableValues; // @synthesize availableValues=_availableValues;
@property(copy, nonatomic) NSString *overrideDescription; // @synthesize overrideDescription=_overrideDescription;
@property(copy, nonatomic) NSString *overrideKey; // @synthesize overrideKey=_overrideKey;
@property(copy, nonatomic) NSString *valueKey; // @synthesize valueKey=_valueKey;
@property(copy, nonatomic) AXTVCaptionStyle *style; // @synthesize style=_style;
- (id)loadSettingGroups;	// IMP=0x000000000001074c

@end
