//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (GKExtensions)
+ (id)_gkFormattedTimeIntervalStringWithStartDate:(id)arg1 endDate:(id)arg2 calendarUnits:(unsigned long long)arg3 style:(long long)arg4;	// IMP=0x0000000100069ee8
+ (id)_gkServerTimestamp;	// IMP=0x000000010006ce90
+ (id)_gkDateFromServerTimestamp:(id)arg1;	// IMP=0x000000010006ce38
+ (id)_gkDateFromScalarServerTimestamp:(unsigned long long)arg1;	// IMP=0x000000010006cdec
- (id)_gkFormattedWhenStringWithOptions:(unsigned long long)arg1;	// IMP=0x000000010006a1c0
- (id)_gkFormattedDateForStyle:(unsigned long long)arg1 relative:(_Bool)arg2;	// IMP=0x000000010006a0bc
- (id)_gkFormattedStringWithDateStyle:(unsigned long long)arg1 timeStyle:(unsigned long long)arg2;	// IMP=0x000000010006a000
- (id)_gkServerTimestamp;	// IMP=0x000000010006cee4
@end

