//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKEventStatistic.h"

@interface BKIntegerEventStatistic : BKEventStatistic
{
    long long _value;	// 8 = 0x8
}

@property(nonatomic) long long value; // @synthesize value=_value;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100044a30
- (void)increment;	// IMP=0x0000000100044a0c
- (void)reset;	// IMP=0x000000010004499c
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x00000001000448e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100044858
- (unsigned long long)hash;	// IMP=0x00000001000447f4

@end
