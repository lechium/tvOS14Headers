//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@class NSDateComponentsFormatter;

@interface TVHPositionalDurationValueTransformer : NSValueTransformer
{
    NSDateComponentsFormatter *_formatter;	// 8 = 0x8
}

+ (_Bool)allowsReverseTransformation;	// IMP=0x00000001000b864c
+ (Class)transformedValueClass;	// IMP=0x00000001000b8640
- (void).cxx_destruct;	// IMP=0x00000001000b874c
@property(retain, nonatomic) NSDateComponentsFormatter *formatter; // @synthesize formatter=_formatter;
- (id)transformedValue:(id)arg1;	// IMP=0x00000001000b8654
- (id)init;	// IMP=0x00000001000b8598

@end

