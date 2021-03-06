//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AggDTemperatureHistogram : NSObject
{
    unsigned long long _bins[32];	// 8 = 0x8
    unsigned long long _sampleCount;	// 264 = 0x108
    int _idx;	// 272 = 0x110
    const int *_binBoundaries;	// 280 = 0x118
    int _mostRecentBin;	// 288 = 0x120
}

- (void)uploadToAggD;	// IMP=0x0000000100017ba8
- (void)incrementMostRecentBin:(unsigned int)arg1;	// IMP=0x0000000100017b84
- (void)incrementBinForTemperature:(int)arg1 count:(unsigned int)arg2;	// IMP=0x0000000100017b30
- (void)incrementBinForTemperature:(int)arg1;	// IMP=0x0000000100017b20
- (int)temperatureToHistogramBinIndex:(int)arg1;	// IMP=0x0000000100017af8
- (id)initWithIndex:(int)arg1 histogramType:(int)arg2;	// IMP=0x0000000100017a50

@end

