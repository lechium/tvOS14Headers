/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPipelineColorAttachmentDescriptor.h>

@interface MTLRenderPipelineColorAttachmentDescriptorInternal : MTLRenderPipelineColorAttachmentDescriptor {

	MTLRenderPipelineAttachmentDescriptorPrivate _private;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)pixelFormat;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(BOOL)isBlendingEnabled;
-(unsigned long long)sourceRGBBlendFactor;
-(unsigned long long)destinationRGBBlendFactor;
-(unsigned long long)rgbBlendOperation;
-(unsigned long long)sourceAlphaBlendFactor;
-(unsigned long long)destinationAlphaBlendFactor;
-(unsigned long long)alphaBlendOperation;
-(unsigned long long)writeMask;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(void)setBlendingEnabled:(BOOL)arg1 ;
-(void)setSourceRGBBlendFactor:(unsigned long long)arg1 ;
-(void)setDestinationRGBBlendFactor:(unsigned long long)arg1 ;
-(void)setRgbBlendOperation:(unsigned long long)arg1 ;
-(void)setSourceAlphaBlendFactor:(unsigned long long)arg1 ;
-(void)setDestinationAlphaBlendFactor:(unsigned long long)arg1 ;
-(void)setAlphaBlendOperation:(unsigned long long)arg1 ;
-(void)setWriteMask:(unsigned long long)arg1 ;
-(const MTLRenderPipelineAttachmentDescriptorPrivate*)_descriptorPrivate;
@end
