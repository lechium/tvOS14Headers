//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, _HBApplicationIconFileMetadata;

@interface HBApplicationIconFile : NSObject
{
    NSData *_data;	// 8 = 0x8
    _HBApplicationIconFileMetadata *_metadata;	// 16 = 0x10
    struct {
        unsigned char version;
        unsigned char _unused[7];
        unsigned long long metadataStart;
        unsigned long long metadataLength;
        unsigned long long flattenedImageStart;
        unsigned long long flattenedImageLength;
        unsigned long long radiosityImageStart;
        unsigned long long radiosityImageLength;
    } _header;	// 24 = 0x18
}

+ (id)_fileDataWithMetadataData:(id)arg1 flattenedImageData:(id)arg2 radiosityImageData:(id)arg3;	// IMP=0x000000010003d554
+ (id)_imageDataWithImage:(struct CGImage *)arg1 extraOptions:(id)arg2;	// IMP=0x000000010003d3d8
+ (id)iconFileDataWithApplication:(id)arg1 error:(id *)arg2;	// IMP=0x000000010003cba8
- (void).cxx_destruct;	// IMP=0x000000010003d784
@property(readonly, nonatomic, getter=_metadata) _HBApplicationIconFileMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic, getter=_header) CDStruct_06537ce9 header; // @synthesize header=_header;
@property(readonly, nonatomic, getter=_data) NSData *data; // @synthesize data=_data;
- (id)radiosityImage;	// IMP=0x000000010003d310
@property(readonly, nonatomic) NSArray *layers;
@property(readonly, nonatomic) double imageScale;
@property(readonly, nonatomic) struct CGSize imageSize;
- (id)flattenedImage;	// IMP=0x000000010003d144
- (id)description;	// IMP=0x000000010003c990
- (id)initWithData:(id)arg1 error:(id *)arg2;	// IMP=0x000000010003c7a0

@end

