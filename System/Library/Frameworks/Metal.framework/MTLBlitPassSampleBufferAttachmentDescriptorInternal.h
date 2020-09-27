/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLBlitPassSampleBufferAttachmentDescriptor.h>

@interface MTLBlitPassSampleBufferAttachmentDescriptorInternal : MTLBlitPassSampleBufferAttachmentDescriptor {

	MTLBlitPassSampleBufferAttachmentDescriptorPrivate _private;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(const MTLBlitPassSampleBufferAttachmentDescriptorPrivate*)_descriptorPrivate;
-(void)setSampleBuffer:(id)arg1 ;
-(id)sampleBuffer;
-(void)setStartOfEncoderSampleIndex:(unsigned long long)arg1 ;
-(unsigned long long)startOfEncoderSampleIndex;
-(void)setEndOfEncoderSampleIndex:(unsigned long long)arg1 ;
-(unsigned long long)endOfEncoderSampleIndex;
@end
