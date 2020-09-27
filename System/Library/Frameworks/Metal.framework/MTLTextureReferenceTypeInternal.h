/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLTextureReferenceType.h>

@interface MTLTextureReferenceTypeInternal : MTLTextureReferenceType {

	unsigned long long _dataType;
	unsigned long long _textureDataType;
	unsigned long long _textureType;
	unsigned long long _access;
	BOOL _isDepthTexture;

}
-(void)dealloc;
-(unsigned long long)textureType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)dataType;
-(unsigned long long)access;
-(id)initWithDataType:(unsigned long long)arg1 textureType:(unsigned long long)arg2 access:(unsigned long long)arg3 isDepthTexture:(BOOL)arg4 ;
-(BOOL)isDepthTexture;
-(unsigned long long)textureDataType;
@end
