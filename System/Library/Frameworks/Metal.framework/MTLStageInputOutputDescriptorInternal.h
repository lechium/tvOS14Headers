/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLStageInputOutputDescriptor.h>

@class MTLBufferLayoutDescriptorArrayInternal, MTLAttributeDescriptorArrayInternal;

@interface MTLStageInputOutputDescriptorInternal : MTLStageInputOutputDescriptor {

	MTLBufferLayoutDescriptorArrayInternal* _vertexBufferArray;
	MTLAttributeDescriptorArrayInternal* _attributeArray;
	unsigned long long _indexBufferIndex;
	unsigned long long _indexType;

}
+(id)vertexDescriptor;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)attributes;
-(void)reset;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)layouts;
-(unsigned long long)indexType;
-(void)setIndexType:(unsigned long long)arg1 ;
-(unsigned long long)indexBufferIndex;
-(void)setIndexBufferIndex:(unsigned long long)arg1 ;
-(id)newSerializedDescriptor;
-(BOOL)validateWithVertexFunction:(id)arg1 error:(id*)arg2 renderPipelineDescriptor:(id)arg3 ;
@end

