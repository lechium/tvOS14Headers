//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@class NSDateComponentsFormatter;

@interface TVDurationValueTransformer : NSValueTransformer
{
    NSDateComponentsFormatter *_minutesFormatter;	// 8 = 0x8
    NSDateComponentsFormatter *_secondsFormatter;	// 16 = 0x10
}

+ (_Bool)allowsReverseTransformation;	// IMP=0x000000010004ca04
+ (Class)transformedValueClass;	// IMP=0x000000010004c9f8
+ (void)load;	// IMP=0x000000010004c8fc
- (void).cxx_destruct;	// IMP=0x000000010004cba0
@property(retain, nonatomic) NSDateComponentsFormatter *secondsFormatter; // @synthesize secondsFormatter=_secondsFormatter;
@property(retain, nonatomic) NSDateComponentsFormatter *minutesFormatter; // @synthesize minutesFormatter=_minutesFormatter;
- (id)transformedValue:(id)arg1;	// IMP=0x000000010004ca0c
- (id)init;	// IMP=0x000000010004c944

@end

